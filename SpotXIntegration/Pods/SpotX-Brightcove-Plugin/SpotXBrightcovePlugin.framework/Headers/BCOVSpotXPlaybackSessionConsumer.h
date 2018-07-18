//
//  Copyright (c) 2018 spotxchange. All rights reserved.
//

#import <Foundation/Foundation.h>

@import SpotX;
@import BrightcovePlayerSDK;

@interface BCOVSpotXPlaybackSessionConsumer : NSObject <BCOVPlaybackSessionConsumer>

-(instancetype _Nonnull)initWithRequest:(SpotXAdRequest * _Nonnull)request forPlaybackController:(id<BCOVPlaybackController> _Nonnull)playbackController cuePointPolicy:(BCOVCuePointProgressPolicy* _Nonnull)cuePointPolicy inView:(UIView * _Nullable)containerView;

@end
