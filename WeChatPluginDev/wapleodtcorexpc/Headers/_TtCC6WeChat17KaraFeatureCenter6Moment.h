//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE;

@interface _TtCC6WeChat17KaraFeatureCenter6Moment
{
    MISSING_TYPE *imageHistoryTable;
    MISSING_TYPE *videoHistoryTable;
    MISSING_TYPE *timelineSessionHistoryTable;
    MISSING_TYPE *timelineSessionRecord;
    MISSING_TYPE *_numberOfUnreadBeforeEnterTimeline;
    MISSING_TYPE *_badgeBeforeEnterTimeline;
}

- (void)onSessionQuit:(id)arg1 withTime:(unsigned long long)arg2;
- (void)onSessionEnter:(id)arg1 withTime:(unsigned long long)arg2;
- (void)onBeginDownload:(id)arg1 downloadType:(long long)arg2;
- (void)momentWillBeDownloaded:(id)arg1 atDate:(id)arg2;
- (void)userDidSeeFullScreenMoment:(id)arg1 media:(id)arg2 atDate:(id)arg3;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;

@end

