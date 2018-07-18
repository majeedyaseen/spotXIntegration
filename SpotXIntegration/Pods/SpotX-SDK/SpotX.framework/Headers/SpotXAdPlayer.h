//
//  Copyright © 2017 SpotX, Inc. All rights reserved.
//

@import UIKit;

#import "SpotXAdGroup.h"
#import "SpotXAdRequest.h"

@protocol SpotXAdPlayerDelegate;


#pragma mark - SpotXAdPlayer

/**
 The SpotXAdPlayer protocol defines the interface for all Ad Player implementations.
 */
@protocol SpotXAdPlayer <NSObject>

@required

/**
 Delegate to receive notifications of ad player events.
 */
@property (nonatomic, nullable, weak) id<SpotXAdPlayerDelegate> delegate;

-(void)start;

-(void)load;

-(void)play;

-(void)stop;

-(void)pause;

-(void)resume;

-(void)skip;

-(void)close;

@end

/**
 Empty implementation of a `SpotXAdPlayer`. This class exists only to simplfy the
 method signature for SpotXAdPlayerDelete methods.
 */
@interface SpotXAdPlayer : NSObject <SpotXAdPlayer>
@end


#pragma mark - SpotXAdPlayerDelegate


/**
 * This delegate notifies the controlling code when the state of the presenter changes.
 */
@protocol SpotXAdPlayerDelegate <NSObject>

@required

/**
 * (required) Creates a SpotXAdRequest for the bid request that's about to be sent.
 */
- (SpotXAdRequest *_Nullable)requestForPlayer:(SpotXAdPlayer *_Nonnull)player;


@optional

- (void)spotx:(SpotXAdPlayer *_Nonnull)player didLoadAds:(SpotXAdGroup *_Nullable)group error:(NSError *_Nullable)error;

- (void)spotx:(SpotXAdPlayer *_Nonnull)player adGroupStart:(SpotXAdGroup *_Nonnull)group;
- (void)spotx:(SpotXAdPlayer *_Nonnull)player adStart:(SpotXAd *_Nonnull)ad;
- (void)spotx:(SpotXAdPlayer *_Nonnull)player adPlaying:(SpotXAd *_Nonnull)ad;
- (void)spotx:(SpotXAdPlayer *_Nonnull)player adPaused:(SpotXAd *_Nonnull)ad;
- (void)spotx:(SpotXAdPlayer *_Nonnull)player adTimeUpdate:(SpotXAd *_Nonnull)ad timeElapsed:(double)seconds;
- (void)spotx:(SpotXAdPlayer *_Nonnull)player adClicked:(SpotXAd *_Nonnull)ad;
- (void)spotx:(SpotXAdPlayer *_Nonnull)player adComplete:(SpotXAd *_Nonnull)ad;
- (void)spotx:(SpotXAdPlayer *_Nonnull)player adSkipped:(SpotXAd *_Nonnull)ad;
- (void)spotx:(SpotXAdPlayer *_Nonnull)player adUserClose:(SpotXAd *_Nonnull)ad;
- (void)spotx:(SpotXAdPlayer *_Nonnull)player adError:(SpotXAd *_Nullable)ad error:(NSError *_Nullable)error;
- (void)spotx:(SpotXAdPlayer *_Nonnull)player adGroupComplete:(SpotXAdGroup *_Nonnull)group;

@end
