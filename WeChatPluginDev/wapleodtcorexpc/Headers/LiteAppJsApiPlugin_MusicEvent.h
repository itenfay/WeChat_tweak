//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface LiteAppJsApiPlugin_MusicEvent
{
    _Bool _isNotifyMusicStateChange;
    _Bool _isSeeking;
    NSString *_curMusicId;
    NSString *_curMusicSrc;
    NSString *_curMusicSrcId;
    NSString *_curAlbumId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSeeking; // @synthesize isSeeking=_isSeeking;
@property(nonatomic) _Bool isNotifyMusicStateChange; // @synthesize isNotifyMusicStateChange=_isNotifyMusicStateChange;
@property(retain, nonatomic) NSString *curAlbumId; // @synthesize curAlbumId=_curAlbumId;
@property(retain, nonatomic) NSString *curMusicSrcId; // @synthesize curMusicSrcId=_curMusicSrcId;
@property(retain, nonatomic) NSString *curMusicSrc; // @synthesize curMusicSrc=_curMusicSrc;
@property(retain, nonatomic) NSString *curMusicId; // @synthesize curMusicId=_curMusicId;
- (void)resetObserveValues;
- (void)sendBackgroundStateChangeEvent:(id)arg1;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (void)onPlayMusic:(id)arg1 fromScene:(long long)arg2;
- (id)getPlayerState;
- (void)beginObserveMusicStateChange:(id)arg1 musicSrc:(id)arg2 srcId:(id)arg3;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

