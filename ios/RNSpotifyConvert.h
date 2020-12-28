
#import <Foundation/Foundation.h>
#import <SpotifyiOS/SpotifyiOS.h>>
#import "RNSpotifyAuth.h"
#import "RNSpotifyError.h"

@interface RNSpotifyConvert : NSObject

+(id)ID:(id)obj;
+(id)RNSpotifyError:(RNSpotifyError*)error;
+(id)NSError:(NSError*)error;
+(id)SPTPlaybackState:(SPTPlaybackState*)state;
+(id)SPTPlaybackTrack:(SPTPlaybackTrack*)track;
+(id)SPTPlaybackMetadata:(SPTPlaybackMetadata*)metadata;
+(id)RNSpotifySessionData:(RNSpotifySessionData*)session;

@end
