
#import <Foundation/Foundation.h>

#import "RNSpotifyAuth.h"
#import "RNSpotifyError.h"
#import <SpotifyiOS/SpotifyiOS.h>
#import <SpotifyiOS/SPTAppRemotePlayerState.h>

@interface RNSpotifyConvert : NSObject

+(id)ID:(id)obj;
+(id)RNSpotifyError:(RNSpotifyError*)error;
+(id)NSError:(NSError*)error;
+(id)SPTPlaybackState:(id<SPTAppRemotePlayerState>)state;
+(id)SPTPlaybackTrack:(id<SPTAppRemotePlayerState>)track;
+(id)SPTPlaybackMetadata:(id<SPTAppRemotePlayerState>)metadata;
+(id)RNSpotifySessionData:(RNSpotifySessionData*)session;

@end
