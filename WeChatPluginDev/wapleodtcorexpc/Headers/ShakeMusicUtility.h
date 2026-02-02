//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicInfo, NSString;

@interface ShakeMusicUtility
{
    MMMusicInfo *_lastPlayingMusic;
    double _lastMusicOffset;
}

+ (id)genReportSongId:(unsigned int)arg1;
+ (unsigned long long)getCopyRightWithShakeMusicInfo:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double lastMusicOffset; // @synthesize lastMusicOffset=_lastMusicOffset;
@property(retain, nonatomic) MMMusicInfo *lastPlayingMusic; // @synthesize lastPlayingMusic=_lastPlayingMusic;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (void)onServiceClearData;
- (void)onServiceInit;
- (_Bool)isLastPlayMusicExists;
- (void)clearLastPlayingMusic;
- (void)resumeLastPlayingMusic;
- (void)recordPlayingMusicAndPause:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

