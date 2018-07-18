//
//  MoatAdEvent.h
//  MoatMobileAppKit
//
//  Created by Moat on 2/5/16.
//  Copyright © 2016 Moat. All rights reserved.
//
//  This class is simply a data object that encapsulates info relevant to a particular playback event.

#import <Foundation/Foundation.h>

typedef enum SPOTXMoatAdEventType : NSUInteger {
    SPOTXMoatAdEventComplete
    , SPOTXMoatAdEventStart
    , SPOTXMoatAdEventFirstQuartile
    , SPOTXMoatAdEventMidPoint
    , SPOTXMoatAdEventThirdQuartile
    , SPOTXMoatAdEventSkipped
    , SPOTXMoatAdEventStopped
    , SPOTXMoatAdEventPaused
    , SPOTXMoatAdEventPlaying
    , SPOTXMoatAdEventVolumeChange
    , SPOTXMoatAdEventNone
} SPOTXMoatAdEventType;

static NSTimeInterval const SPOTXMoatTimeUnavailable = NAN;
static float const SPOTXMoatVolumeUnavailable = NAN;

@interface SPOTXMoatAdEvent : NSObject

@property SPOTXMoatAdEventType eventType;
@property NSTimeInterval adPlayhead;
@property float adVolume;
@property (readonly) NSTimeInterval timeStamp;

- (id)initWithType:(SPOTXMoatAdEventType)eventType withPlayheadMillis:(NSTimeInterval)playhead;
- (id)initWithType:(SPOTXMoatAdEventType)eventType withPlayheadMillis:(NSTimeInterval)playhead withVolume:(float)volume;
- (NSDictionary *)asDict;
- (NSString *)eventAsString;

@end
