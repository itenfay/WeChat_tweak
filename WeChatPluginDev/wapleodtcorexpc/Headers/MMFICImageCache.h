//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSRecursiveLock, NSString;

@interface MMFICImageCache
{
    NSRecursiveLock *_tableLock;
    NSMutableDictionary *_imageTables;
}

+ (unsigned long long)preCleanGetCacheSize;
+ (unsigned long long)cleanCacheMgrMakeToClean;
- (void).cxx_destruct;
- (unsigned long long)preGetFICImageCacheSize;
- (unsigned long long)cleanFICImageCache;
- (void)executeEntityCreating:(id)arg1 withImage:(id)arg2;
- (void)asyncCreateFICImgForEntity:(id)arg1 withImage:(id)arg2;
- (void)asyncCreateFICImgForEntity:(id)arg1;
- (void)clearImgTableWithPrefix:(id)arg1;
- (void)reset;
- (void)deleteImageForEntity:(id)arg1;
- (id)retrieveImageForEntity:(id)arg1 isNeedMemoryCache:(_Bool)arg2;
- (_Bool)addFormatIfNotExist:(id)arg1 imgSize:(struct CGSize)arg2 maxImgCnt:(unsigned int)arg3 version:(unsigned int)arg4;
- (void)onServiceMemoryWarning;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

