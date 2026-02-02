//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MsgPreloadVideoInfo, NSMutableDictionary;

@interface PreloadVideoCleanLogic : NSObject
{
    NSMutableDictionary *_dicOldRecord;
    MsgPreloadVideoInfo *_preloadVideoInfo;
    unsigned int _uiLastCleanPreloadTmpFileTime;
}

- (void).cxx_destruct;
- (void)onDeleteCacheForChatName:(id)arg1;
- (void)setPreloadSize:(unsigned int)arg1 forRecordId:(id)arg2;
- (unsigned int)getPreloadSizeForRecordId:(id)arg1;
- (void)setNonAutoCleanForPreloadRecord:(id)arg1;
- (unsigned long long)cleanAllPreloadTempFileWithRecords:(id)arg1;
- (unsigned long long)cleanAllPreloadTempFileWithDownloadingMsg:(id)arg1;
- (void)cleanOutOfDatePreloadTempFile:(id)arg1;
- (void)removePreloadTempFile:(id)arg1;
- (void)removePreloadRecordByLRU;
- (void)removePreloadRecord:(id)arg1 shouldRemoveFile:(_Bool)arg2;
- (void)addPreloadRecord:(id)arg1;
- (_Bool)isAddedTaskOverDailyLimit;
- (void)savePreloadInfo;
- (void)loadPreloadRecord;
- (id)getPreloadRecordKey:(id)arg1;
- (id)getPreloadVideoInfoPath;
- (void)cleanOldRecordCache;
- (void)saveOldPreloadRecord;
- (void)loadOldRecord;
- (id)getOldRecordPath;
- (id)init;

@end

