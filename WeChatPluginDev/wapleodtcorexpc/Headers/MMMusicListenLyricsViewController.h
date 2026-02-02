//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicLyricVcCalculator, NSString;

@interface MMMusicListenLyricsViewController
{
    MMMusicLyricVcCalculator *m_lyricCalcuator;
    long long _curState;
}

- (void).cxx_destruct;
@property(nonatomic) long long curState; // @synthesize curState=_curState;
- (void)onMusicPlayStatusChanged;
- (void)onUpdateCurOffset:(double)arg1;
- (void)onCurrentLyricChangeTo:(id)arg1 timeToNext:(double)arg2 currIndex:(unsigned int)arg3;
- (void)dealloc;
- (void)updateLyrics:(id)arg1;
- (id)initWithLyrics:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

