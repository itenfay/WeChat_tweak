//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCImageTranslateMgr
{
}

+ (id)mmkv;
+ (unsigned long long)preCleanGetCacheSize;
+ (unsigned long long)cleanCacheMgrMakeToClean;
- (id)promiseForUploadCDNImage:(id)arg1;
- (void)ReportTranslateFeedback:(int)arg1 originImage:(id)arg2 translateImage:(id)arg3;
- (void)ReportTranslateFor:(int)arg1 result:(unsigned int)arg2 hasSaveOriImg:(_Bool)arg3 hasSaveTranImg:(_Bool)arg4 showOriImgCnt:(unsigned int)arg5 TotalTime:(unsigned int)arg6 uploadTime:(unsigned int)arg7 translateTime:(unsigned int)arg8 fileId:(id)arg9 aesKey:(id)arg10;
- (void)ReportCancelAction:(int)arg1 hasSaveOriImg:(_Bool)arg2 time:(unsigned int)arg3 fileId:(id)arg4 aesKey:(id)arg5;
- (void)ReportAction:(unsigned long long)arg1 source:(int)arg2 hasDownloadHD:(_Bool)arg3 fileId:(id)arg4 aesKey:(id)arg5;
- (void)ReportAction:(unsigned long long)arg1 source:(int)arg2 fileId:(id)arg3 aesKey:(id)arg4;
- (void)internalKVStat:(int)arg1 result:(unsigned int)arg2 hasSaveOriImg:(_Bool)arg3 hasSaveTranImg:(_Bool)arg4 showOriImgCnt:(unsigned int)arg5 totalTime:(unsigned int)arg6 uploadTime:(unsigned int)arg7 translateTime:(unsigned int)arg8 fileId:(id)arg9 aesKey:(id)arg10;
- (void)OnDelMsg:(id)arg1 DelAll:(_Bool)arg2;
- (void)removeTranslateImageBrandForBiz:(id)arg1 desc:(id)arg2;
- (id)getTranslateImageBrandForBiz:(id)arg1 desc:(id)arg2;
- (void)setTranslateImageBrand:(id)arg1 biz:(id)arg2 desc:(id)arg3;
- (_Bool)isExistImageDetectResultForBiz:(id)arg1 desc:(id)arg2;
- (void)removeImageDetectResultForBiz:(id)arg1 desc:(id)arg2;
- (unsigned int)getImageDetectResultForBiz:(id)arg1 desc:(id)arg2;
- (void)setImageDetectResult:(unsigned int)arg1 biz:(id)arg2 desc:(id)arg3;
- (void)removeTranslateImageLangStateForBiz:(id)arg1 desc:(id)arg2;
- (unsigned int)getTranslateImageLangForBiz:(id)arg1 desc:(id)arg2;
- (void)setTranslateImageLang:(unsigned long long)arg1 biz:(id)arg2 desc:(id)arg3;
- (id)pathForImgCacheForBiz:(id)arg1;
- (id)pathForImgCacheDir;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

