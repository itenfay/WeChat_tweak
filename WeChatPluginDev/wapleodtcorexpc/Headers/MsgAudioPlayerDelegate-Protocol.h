//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "AudioPlayerDelegate-Protocol.h"

@protocol MsgAudioPlayerProtocol;

@protocol MsgAudioPlayerDelegate <AudioPlayerDelegate>

@optional
- (void)audioPlayer:(id <MsgAudioPlayerProtocol>)arg1 didChangePeakPower:(float)arg2;
- (void)audioPlayerDidFinishPlaying:(id <MsgAudioPlayerProtocol>)arg1 isForceStop:(_Bool)arg2;
- (void)audioPlayerBeginPlaying:(id <MsgAudioPlayerProtocol>)arg1 success:(_Bool)arg2;
- (void)onEarTip;
@end

