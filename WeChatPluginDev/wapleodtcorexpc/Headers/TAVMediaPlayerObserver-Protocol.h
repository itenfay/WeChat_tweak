//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVPlayer, AVPlayerItem, TAVMediaPlayer;

@protocol TAVMediaPlayerObserver <NSObject>

@optional
- (void)mediaPlayerDidRefresh:(TAVMediaPlayer *)arg1;
- (void)mediaPlayerDidPlayToEnd:(TAVMediaPlayer *)arg1;
- (void)mediaPlayer:(TAVMediaPlayer *)arg1 speedDidChange:(double)arg2;
- (void)mediaPlayer:(TAVMediaPlayer *)arg1 progressDidChange:(CDStruct_1b6d18a9)arg2;
- (void)mediaPlayer:(TAVMediaPlayer *)arg1 stateDidChange:(long long)arg2;
- (void)mediaPlayer:(TAVMediaPlayer *)arg1 itemDidChange:(AVPlayerItem *)arg2;
- (void)mediaPlayer:(TAVMediaPlayer *)arg1 playerDidReset:(AVPlayer *)arg2;
@end

