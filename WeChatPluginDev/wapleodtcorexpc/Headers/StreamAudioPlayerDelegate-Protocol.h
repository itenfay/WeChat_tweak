//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "AudioPlayerDelegate-Protocol.h"

@class StreamAudioQueuePlayer;

@protocol StreamAudioPlayerDelegate <AudioPlayerDelegate>

@optional
- (void)audioPlayerDidBlocked:(StreamAudioQueuePlayer *)arg1;
@end

