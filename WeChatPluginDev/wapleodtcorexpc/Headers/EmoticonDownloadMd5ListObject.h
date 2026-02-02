//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSMutableArray, NSString;

@interface EmoticonDownloadMd5ListObject
{
    _Bool _needRecordVersionKeyUpdate;
    unsigned int _m_lastUpdateTime;
    NSData *_reqBuff;
    NSString *_versionKey;
    NSMutableArray *_m_md5List;
    unsigned long long _m_type;
}

+ (unsigned int)extFlagForCustomEmoticonType:(unsigned long long)arg1;
+ (id)getEmoticonDownloadMd5ListPathWithType:(unsigned long long)arg1;
+ (id)getEmoticonBackupRootDir;
+ (_Bool)NeedRecoverForType:(unsigned long long)arg1;
+ (void)RemoveEmoticonDownloadMd5ListWithType:(unsigned long long)arg1;
+ (_Bool)IsEmoticonDownloadMd5ListExistWithType:(unsigned long long)arg1;
+ (id)GetEmoticonDownloadMd5ListObjectWithType:(unsigned long long)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_versionKey;
+ (void)PBArrayAdd_reqBuff;
+ (void)PBArrayAdd_m_lastUpdateTime;
+ (void)PBArrayAdd_m_md5List;
- (void).cxx_destruct;
@property(nonatomic) _Bool needRecordVersionKeyUpdate; // @synthesize needRecordVersionKeyUpdate=_needRecordVersionKeyUpdate;
@property(nonatomic) unsigned long long m_type; // @synthesize m_type=_m_type;
@property(nonatomic) unsigned int m_lastUpdateTime; // @synthesize m_lastUpdateTime=_m_lastUpdateTime;
@property(retain, nonatomic) NSMutableArray *m_md5List; // @synthesize m_md5List=_m_md5List;
@property(retain, nonatomic) NSString *versionKey; // @synthesize versionKey=_versionKey;
@property(retain, nonatomic) NSData *reqBuff; // @synthesize reqBuff=_reqBuff;
- (id)logPrefix;
- (_Bool)checkCompleteForMd5Object:(id)arg1;
- (unsigned long long)indexOfMd5ObjectWithMd5:(id)arg1;
- (id)sortedAndUnionWithEmoticonWraps:(id)arg1;
- (id)getNextUncompleteMd5Object;
- (id)getMd5List;
- (id)allEmojiInfoObjListWithValidOnly:(_Bool)arg1;
- (id)allValidEmojiInfoObjDic;
- (unsigned long long)completeCount;
- (unsigned long long)totalCount;
- (unsigned long long)checkCompleteAndReturnNeedMd5DownloadCount;
- (void)checkComplete;
- (void)failedMd5:(id)arg1;
- (id)completeMd5:(id)arg1;
- (void)clearMd5List;
- (void)moveMd5List:(id)arg1 toMd5Position:(id)arg2;
- (void)stickyMd5List:(id)arg1;
- (void)removeMd5:(id)arg1;
- (void)addMd5ObjectList:(id)arg1 atFirst:(_Bool)arg2;
- (void)addMd5ObjectList:(id)arg1;
- (void)updateLastUpdateTime;
- (_Bool)moreThanADaySinceLastUpdateTime;
- (void)saveToFile;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

