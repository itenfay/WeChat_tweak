//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMusicPlayerErrInfo;

@protocol MMMusicPlayerExt

@optional
- (void)onDataBuffering:(double)arg1;
- (void)onNeedSetPlayPercent;
- (void)onNewSeekTime:(double)arg1;
- (void)onForceStopMusic;
- (void)onMusicPlayStatusChanged:(unsigned long long)arg1 error:(MMMusicPlayerErrInfo *)arg2;
- (void)onLevelMeterPeak:(float)arg1;
@end

