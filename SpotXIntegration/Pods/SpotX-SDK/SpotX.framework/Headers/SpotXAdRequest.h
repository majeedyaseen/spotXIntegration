//
//  Copyright © 2017 SpotX, Inc. All rights reserved.
//

@import Foundation;

#import "SpotXTypes.h"

@interface SpotXAdRequest : NSObject

@property (nonatomic, copy, readonly, nullable) NSString *apiKey;
@property (nonatomic, copy, readonly, nullable) NSString *channel;

/*!
 * New request with the specified API key.
 * If the key is not given here, it will be taken from [SpotX apiKey] instead.
 */
-(instancetype _Nullable)initWithApiKey:(nullable NSString *)apiKey;

-(void)setChannel:(nonnull NSString *)channel;

-(void)setParam:(nonnull NSString *)key value:(nullable NSString *)value;
-(void)setParam:(nonnull NSString *)key values:(nullable NSArray<NSString*> *)values;

-(void)setCustom:(nonnull NSString *)key value:(nullable NSString *)value;
-(void)setCustom:(nonnull NSString *)key values:(nullable NSArray<NSString*> *)values;

-(void)setPlaybackOption:(nonnull NSString *)key value:(nullable NSString *)value;
-(void)setPlaybackOption:(nonnull NSString *)key boolValue:(BOOL)value;

@end

