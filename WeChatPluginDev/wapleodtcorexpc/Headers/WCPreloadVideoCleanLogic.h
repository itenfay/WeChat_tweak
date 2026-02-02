//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCPreloadVideoInfo;

@interface WCPreloadVideoCleanLogic : NSObject
{
    WCPreloadVideoInfo *_preloadVideoInfo;
    unsigned int _uiLastCleanPreloadTmpFileTime;
}

- (void).cxx_destruct;
- (_Bool)isPreloadCompleted:(id)arg1;
- (void)setPreloadCompelted:(_Bool)arg1 forRecordId:(id)arg2;
- (unsigned int)getPreloadPercentForRecordId:(id)arg1;
- (void)setTotalSize:(unsigned int)arg1 forRecordId:(id)arg2;
- (unsigned int)getTotalSizeForRecordId:(id)arg1;
- (void)setPreloadSize:(unsigned int)arg1 forRecordId:(id)arg2;
- (unsigned int)getPreloadSizeForRecordId:(id)arg1;
- (void)setNonAutoCleanForPreloadRecord:(id)arg1;
- (void)cleanOutOfDatePreloadTempFile:(id)arg1;
- (void)removeFile:(id)arg1;
- (void)removePreloadTempFile:(id)arg1;
- (void)removePreloadRecordByLRU;
- (void)removePreloadRecord:(id)arg1 shouldRemoveFile:(_Bool)arg2;
- (void)addPreloadRecord:(id)arg1;
- (_Bool)isAddedTaskOverDailyLimit;
- (void)savePreloadInfo;
- (void)loadPreloadRecord;
- (id)getPreloadRecordKey:(id)arg1;
- (id)getPreloadVideoInfoPath;
- (id)init;

@end

