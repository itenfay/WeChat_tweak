//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCAdBreakFramePlayNormalLogic
{
    _Bool _alreadyPlayed;
    _Bool _isOnceMorePlaying;
    _Bool _beginPosSetFlag;
}

@property(nonatomic) _Bool beginPosSetFlag; // @synthesize beginPosSetFlag=_beginPosSetFlag;
@property(nonatomic) _Bool isOnceMorePlaying; // @synthesize isOnceMorePlaying=_isOnceMorePlaying;
@property(nonatomic) _Bool alreadyPlayed; // @synthesize alreadyPlayed=_alreadyPlayed;
- (void)onPlayEnd:(_Bool)arg1;
- (void)onPlaybackTimeUpdate:(double)arg1;
- (void)onReferenceVideoPlaybackTimeUpdate:(double)arg1 isPlaying:(_Bool)arg2;
- (void)onReferenceVideoStop;
- (void)onReferenceVideoPlay;
- (void)reset;
- (_Bool)checkPlayMode;

@end

