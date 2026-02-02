//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "AudioPlayerProtocol-Protocol.h"

@class AudioPlayerUserData;
@protocol MsgAudioPlayerDelegate;

@protocol MsgAudioPlayerProtocol <AudioPlayerProtocol>
- (void)stopAndNotifyUI;
- (void)setDelegate:(id <MsgAudioPlayerDelegate>)arg1;
- (AudioPlayerUserData *)getUserData;
- (void)setUserData:(AudioPlayerUserData *)arg1;
- (void)setAutoMode;
- (void)setEarpieceMode;
@end

