//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface StoreEmotionSearchResMgr
{
}

+ (_Bool)checkConfigFileExistIfNeeded:(id)arg1 type:(unsigned int)arg2;
+ (void)tryRepairNewEmoijRes;
+ (id)unZipResIfTargetNotExistWithPath:(id)arg1 forSubType:(unsigned int)arg2;
+ (void)deleteResForSubType:(unsigned int)arg1;
+ (unsigned int)defaultVersionForSubType:(unsigned int)arg1;
+ (id)dirPathOfEmoticonResForSubType:(unsigned int)arg1;
+ (id)MMKVVersionKeyForEmoticonResWithSubType:(unsigned int)arg1;
+ (void)resetResVersionForSubType:(unsigned int)arg1;
+ (unsigned int)getCurrentVersionForSubType:(unsigned int)arg1;
+ (id)dirPathAfterUnzipIfNeedUpdateForSubType:(unsigned int)arg1;
+ (void)unZipResWithPath:(id)arg1 forSubType:(unsigned int)arg2 version:(unsigned int)arg3;
+ (void)tryUpdateEmoticonResForSubType:(unsigned int)arg1;
- (void)onResDeleteFinishWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

