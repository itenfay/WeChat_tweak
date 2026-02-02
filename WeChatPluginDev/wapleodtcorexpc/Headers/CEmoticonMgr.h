//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmoticonDataDB, EmoticonSendRecordList, NSMutableSet, NSRecursiveLock, NSString;

@interface CEmoticonMgr
{
    EmoticonDataDB *m_oEmoticonDB;
    NSMutableSet *_savingCustomEmotThumbs;
    NSRecursiveLock *_saveThumbsLock;
    EmoticonSendRecordList *_recordList;
}

+ (_Bool)isTusijiEmoticonMD5:(id)arg1;
+ (id)genSafeEmoticonImage:(id)arg1;
+ (unsigned int)getIdKeyResolutionLimit;
+ (unsigned int)getIdKeyIdEmoticon;
+ (void)ReportAddEmoticonWithAddEmoticonWrap:(id)arg1 failedReason:(id)arg2;
+ (_Bool)isSelfieEmoticonWithWrap:(id)arg1;
+ (id)getEmoticonImageForEditByMD5:(id)arg1 isStore:(_Bool)arg2;
+ (id)getEmoticonImageByMD5:(id)arg1;
+ (id)genEmoticonMsgForEmoticonWrap:(id)arg1 imageData:(id)arg2;
+ (id)errorMsgForEmoticonImageData:(id)arg1;
+ (id)emoticonMsgForEmoticonWrap:(id)arg1 imageData:(id)arg2 errorMsg:(id *)arg3;
+ (id)emoticonMsgForImageData:(id)arg1 errorMsg:(id *)arg2;
+ (id)GetEmoticonByMD5:(id)arg1;
+ (void)notifyEmoticonListUpdatedFor:(unsigned long long)arg1;
+ (_Bool)IsEmoticonImageExist:(id)arg1;
+ (unsigned int)CameraEmoticonLimit;
+ (unsigned int)CustomEmoticonLimit;
+ (unsigned int)CustomOrCameraEmoticonManualSyncLimit;
+ (unsigned int)CustomOrCameraEmoticonFirstSyncLimit;
- (void).cxx_destruct;
@property(retain, nonatomic) EmoticonSendRecordList *recordList; // @synthesize recordList=_recordList;
@property(retain, nonatomic) NSRecursiveLock *saveThumbsLock; // @synthesize saveThumbsLock=_saveThumbsLock;
@property(retain, nonatomic) NSMutableSet *savingCustomEmotThumbs; // @synthesize savingCustomEmotThumbs=_savingCustomEmotThumbs;
@property(readonly, nonatomic) EmoticonDataDB *emoticonDataDB; // @synthesize emoticonDataDB=m_oEmoticonDB;
- (id)allRecentSendEmoticonInOrder;
- (_Bool)isEmoticonInRecordFor:(id)arg1;
- (void)delAllRecord;
- (void)delRecordWithMd5:(id)arg1;
- (void)addRecordWithMessageWrap:(id)arg1;
- (void)trySaveCustomThumbImageWithImg:(id)arg1 md5:(id)arg2;
- (void)onMMDynamicConfigUpdated;
- (_Bool)checkEmoticonCanAddWithMd5:(id)arg1 pid:(id)arg2;
- (_Bool)checkEmoticonCanAddStrictWay:(_Bool)arg1 Md5:(id)arg2 pid:(id)arg3;
- (id)getRecentUsedEmoticonList:(unsigned int)arg1;
- (_Bool)updateEmoticon:(id)arg1 packageId:(id)arg2;
- (id)FilterNotInDBList:(id)arg1;
- (id)lastestSentMd5InMd5list:(id)arg1;
- (_Bool)updateEmoticon:(id)arg1 usedTime:(unsigned int)arg2;
- (id)getCameraEmoticonList;
- (id)getCustomEmoticonListWithOutGame;
- (id)getEmoticonListByPackageId:(id)arg1;
- (id)getEmoticonWrapByMd5:(id)arg1;
- (id)updatedEmoticonArrayForGame:(id)arg1;
- (void)onResPackageReady:(id)arg1;
- (void)willRecoverDatabase;
- (_Bool)CheckEmoticonExistInCustomListByMd5:(id)arg1;
- (_Bool)CheckEmoticonExist:(id)arg1;
- (_Bool)IsJsbOrDiceEmoticonMd5:(id)arg1;
- (_Bool)deleteEmoticonByPid:(id)arg1 isSilently:(_Bool)arg2 needRemoveFile:(_Bool)arg3;
- (_Bool)DeleteEmoticonFromCameraListByMd5:(id)arg1;
- (_Bool)DeleteEmoticonFromCustomListByMd5:(id)arg1;
- (void)DeleteEmoticonByMd5List:(id)arg1 ofType:(unsigned long long)arg2;
- (id)AddEmoticonWithData:(id)arg1 addEmoticonWrap:(id)arg2 extFlag:(unsigned int)arg3 index:(id)arg4 isSilently:(_Bool)arg5;
- (id)AddCustomEmoticonWithData:(id)arg1 addEmoticonWrap:(id)arg2 isSilently:(_Bool)arg3;
- (_Bool)AddEmoticonSilently:(id)arg1 Type:(unsigned int)arg2 packageId:(id)arg3 Source:(long long)arg4 Index:(unsigned int)arg5;
- (id)checkAndSaveEmoticon:(id)arg1 addEmotionWrap:(id)arg2;
- (id)GetEmoticonList;
- (void)copyPic:(id)arg1 fromResource:(id)arg2;
- (void)InitLocalList;
- (void)hardcodeTusiji;
- (void)AddHardCode:(id)arg1 Type:(unsigned int)arg2 GameType:(unsigned int)arg3 OriginPath:(id)arg4 packageId:(id)arg5;
- (void)configWxAMEnableSetting;
- (void)downloadTusijiResInMainThread;
- (void)loadDB;
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

