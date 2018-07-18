//
//  Copyright © 2017 SpotX, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "SpotXAdPlayer.h"

@import SafariServices;

/**
 * This is the base UIViewController for containing SpotX Ads.
 */
@interface SpotXAdPlayerBase : UIViewController <SpotXAdPlayer, SFSafariViewControllerDelegate>

@property (nonatomic, nullable, weak) id<SpotXAdPlayerDelegate> delegate;

@property (nonatomic, nullable, readonly) SpotXAdGroup *adGroup;

-(void)load;

-(void)play;

-(void)stop;

-(void)skip;

-(void)close;

-(void)setSize:(float)size;

@end
