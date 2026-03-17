//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSError, WAUniversalAudioPlayer;

@protocol WAUniversalAudioEngineProtocol <NSObject>

@optional
- (void)fixIOCycleCrash;
- (_Bool)playerCanScheduleData:(WAUniversalAudioPlayer *)arg1 error:(id *)arg2;
- (void)playerDidError:(WAUniversalAudioPlayer *)arg1 error:(NSError *)arg2;
- (void)playerDidDestroy:(WAUniversalAudioPlayer *)arg1;
- (void)playerDidFinishPlaying:(WAUniversalAudioPlayer *)arg1;
- (void)playerDidStop:(WAUniversalAudioPlayer *)arg1;
- (void)playerWillStop:(WAUniversalAudioPlayer *)arg1;
- (void)playerDidPause:(WAUniversalAudioPlayer *)arg1;
- (void)playerWillPause:(WAUniversalAudioPlayer *)arg1;
- (void)playerDidPlay:(WAUniversalAudioPlayer *)arg1;
- (void)playerWillPlay:(WAUniversalAudioPlayer *)arg1;
- (_Bool)playerCanPlay:(WAUniversalAudioPlayer *)arg1 error:(id *)arg2;
- (void)playerDidLoad:(WAUniversalAudioPlayer *)arg1;
- (void)playerWillLoad:(WAUniversalAudioPlayer *)arg1;
@end

