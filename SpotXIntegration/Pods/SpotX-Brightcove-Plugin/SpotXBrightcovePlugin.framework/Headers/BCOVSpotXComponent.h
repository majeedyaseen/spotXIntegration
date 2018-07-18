//
//  Copyright (c) 2018 spotxchange. All rights reserved.
//

#import <Foundation/Foundation.h>

@import SpotX;
@import BrightcovePlayerSDK;

/**
 * SpotX lifecycle events.
 * You can monitor these in addition to the standard BCOVPlaybackControllerAdsDelegate methods
 * to receive more specific events about the ads that are playing.
 */
extern NSString * _Nonnull const kBCOVSpotXLifecycleEventWillPausePlayback;
extern NSString * _Nonnull const kBCOVSpotXLifecycleEventAdsStarted;
extern NSString * _Nonnull const kBCOVSpotXLifecycleEventAdClicked;
extern NSString * _Nonnull const kBCOVSpotXLifecycleEventAdError;
extern NSString * _Nonnull const kBCOVSpotXLifecycleEventAdsCompleted;
extern NSString * _Nonnull const kBCOVSpotXLifecycleEventWillResumePlayback;

@interface BCOVPlayerSDKManager (BCOVSpotXAdditions)
/**
 * Creates and returns a new playback controller with the specified SpotX ad request.
 *
 * @param request SpotX ad request to use for ads.
 * @param cuePointPolicy The cue point progress policy for ad cuepoints. If you do not specify one, a default of [BCOVCuePointProgressPolicy progressPolicyProcessingCuePoints:BCOVProgressPolicyProcessAllCuePoints resumingPlaybackFrom:BCOVProgressPolicyResumeFromContentPlayhead ignoringPreviouslyProcessedCuePoints:NO] will be provided.
 * @param adContainer Container view for the ad player. If you do not specify a view, the controller's superview will be used at playback time.
 * @return A new playback controller with the specified parameters.
 */
- (id<BCOVPlaybackController> _Nonnull)createSpotXPlaybackControllerWithRequest:(SpotXAdRequest * _Nonnull)request cuePointPolicy:(BCOVCuePointProgressPolicy * _Nullable)cuePointPolicy adContainer:(UIView * _Nullable)adContainer;
- (id<BCOVPlaybackController> _Nonnull)createSpotXPlaybackControllerWithRequest:(SpotXAdRequest * _Nonnull)request cuePointPolicy:(BCOVCuePointProgressPolicy * _Nullable)cuePointPolicy;
- (id<BCOVPlaybackController> _Nonnull)createSpotXPlaybackControllerWithRequest:(SpotXAdRequest * _Nonnull)request adContainer:(UIView * _Nullable)adContainer;
- (id<BCOVPlaybackController> _Nonnull)createSpotXPlaybackControllerWithRequest:(SpotXAdRequest * _Nonnull)request;

@end
