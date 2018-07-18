//
//  SpotXTypes.h
//  SpotX
//

@import Foundation;

/**
 * The error domain for errors originating with the SpotX SDK.
 */
static const NSErrorDomain _Nonnull SPXErrorDomain = @"SPXErrorDomain";

/**
 * Error Codes generated by SpotX.
 */
typedef NS_ENUM(NSInteger, SPXErrorCode) {
  /** Ads failed to load due to a missing parameter from the SDK. */
  kSPXMissingParamError     = 5001,
  
  /**
   * An error occurred communicating with the internal runtime.
   * Usually, this indicates that the runtime could not be loaded from the server.
   */
  kSPXRPCFailureError       = 5002,
  
  /** The ad request was made, but no ads are available to play. */
  kSPXNoAdsAvailableError   = 5003,
  
  /** An error occurred during ad playback. */
  kSPXPlaybackError         = 5004,
  
  /** The player was terminated because it was not responding. */
  kSPXHearbeatError         = 5005
};
