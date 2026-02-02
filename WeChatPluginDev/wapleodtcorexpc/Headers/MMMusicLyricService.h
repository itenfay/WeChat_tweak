//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSMutableDictionary, NSString;

@interface MMMusicLyricService
{
    NSMutableDictionary *_infoDic;
    MMTimer *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableDictionary *infoDic; // @synthesize infoDic=_infoDic;
- (void)notifyLyricChanged:(id)arg1;
- (void)updateLyricWithInfo:(id)arg1 musicOffset:(double)arg2;
- (void)updateLyric;
- (void)stopTimer;
- (void)setupTimerIfNeeded;
- (void)updateLyricIndexManually:(id)arg1 musicOffset:(double)arg2;
- (void)setManualOffsetControl:(id)arg1 enabled:(_Bool)arg2;
- (id)currentLyricStr:(id)arg1;
- (void)resignLyricNotifying:(id)arg1;
- (void)requestLyricNotifying:(id)arg1;
- (id)getLyricResolverWithSongId:(id)arg1;
- (void)initLyricFor:(id)arg1 lyrics:(id)arg2;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

