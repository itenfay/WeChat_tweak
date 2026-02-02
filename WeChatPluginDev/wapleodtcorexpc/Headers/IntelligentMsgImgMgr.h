//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class IntelligentClassification, IntelligentFaceAlbum, IntelligentMessageDataPB, IntelligentOCR, NSMutableDictionary, NSMutableSet, NSNumber, NSRecursiveLock, NSString;

@interface IntelligentMsgImgMgr
{
    NSRecursiveLock *_lock;
    NSRecursiveLock *_faceClusterSequenceLock;
    _Bool m_faceClusterSequenceLoad;
    IntelligentMessageDataPB *m_intelligentMessageData;
    NSMutableSet *m_setAllNeedBuildIndexSessionUserName;
    NSMutableDictionary *m_temporaryDataDic;
    IntelligentOCR *m_intelligentOCR;
    IntelligentClassification *m_intelligentClassification;
    IntelligentFaceAlbum *m_intelligentFaceAlbum;
    NSNumber *_intelligentOCRInitResult;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *intelligentOCRInitResult; // @synthesize intelligentOCRInitResult=_intelligentOCRInitResult;
@property(retain, nonatomic) IntelligentFaceAlbum *m_intelligentFaceAlbum; // @synthesize m_intelligentFaceAlbum;
@property(retain, nonatomic) IntelligentClassification *m_intelligentClassification; // @synthesize m_intelligentClassification;
@property(retain, nonatomic) IntelligentOCR *m_intelligentOCR; // @synthesize m_intelligentOCR;
- (void)handleOnModelListWillUpdate:(id)arg1;
- (void)handleOnModelUpdate:(id)arg1;
- (void)onServiceTerminate;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)p_loadStrongNotificationInternal;
- (void)p_saveIntelligentMsgToDataFileInternal;
- (id)p_getIntelligentMsgDataFilePath;
- (id)p_getIntelligentMsgDirPath;
- (void)insertSecureRank:(id)arg1;
- (_Bool)checkQueryIsSecureRank:(id)arg1;
- (_Bool)isOpenFaceFeatureHardwareAcceleration;
- (id)getIntelligentMsgRepairFaceClusterId;
- (_Bool)asyncCheckAndRepairFaceCluster;
- (void)handleRepairFaceCluster;
- (void)repairFaceCluster;
- (long long)getFaceClusterSequence;
- (_Bool)isGPUIntelligentPattern;
- (id)getgetTemporaryIDWithUserName:(id)arg1 msgLocalID:(unsigned int)arg2;
- (void)clearTemporaryData;
- (void)addFaceAlbumTemporaryDataWithUserName:(id)arg1 msgLocalID:(unsigned int)arg2 arrFaceAlbumData:(id)arg3;
- (void)addClassificationTemporaryDataWithUserName:(id)arg1 msgLocalID:(unsigned int)arg2 classificationData:(id)arg3;
- (void)addOcrTemporaryDataWithUserName:(id)arg1 msgLocalID:(unsigned int)arg2 ocrItem:(id)arg3;
- (id)getTemporaryDataWithUserName:(id)arg1 msgLocalID:(unsigned int)arg2;
- (_Bool)checkCanDoIntelligentInRAM;
- (_Bool)checkCanDoIntelligent;
- (id)getFaceAlbumMessageSurfaceImage:(id)arg1;
- (void)updateOrInsertFaceClusterListToDbWithBlock:(CDUnknownBlockType)arg1 dicLabelDbLabel:(id)arg2;
- (id)getArrPreFaceCluster;
- (id)getClassificationWithImage:(id)arg1;
- (void)releaseInternalMemory;
- (id)getIntelligentClassificationIdWithSearchQuery:(id)arg1;
- (id)batchGetIntelligentMsg:(id)arg1 error:(id)arg2;
- (id)locateOcrTextPointInImage:(id)arg1 searchText:(id)arg2;
- (id)getSynonymLabelIdListAlwaySimplifyChinaWithQuery:(id)arg1;
- (id)getSynonymLabelIdListWithQuery:(id)arg1;
- (id)searchSynonymLabelInfoDic:(id)arg1;
- (id)getLabelIdListAlwaySimplifyChinaWithQuery:(id)arg1;
- (id)getLabelIdListWithQuery:(id)arg1;
- (id)searchLabelInfoDic:(id)arg1;
- (id)getLabelNameWithLabelId:(unsigned int)arg1;
- (id)batchExecuteFaceAlbum:(id)arg1 error:(id)arg2;
- (id)batchExecuteClassification:(id)arg1 error:(id)arg2;
- (id)batchExecuteOcrText:(id)arg1 error:(id)arg2;
- (id)getCodeClassify:(id)arg1;
- (id)generatePHashWithImage:(id)arg1;
- (_Bool)releaseOcrXNetCache;
- (id)getOcrTextWithImage:(id)arg1;
- (_Bool)isIntelligentMessageUnsafe:(id)arg1 msgLocalID:(unsigned int)arg2;
- (id)cpKeyForIntelligentMsg:(id)arg1 msgLocalID:(unsigned int)arg2;
- (_Bool)checkRepairCurrentIntelligentMsgVersion;
- (void)initAllNeedBuildIndexSessionUserName;
- (unsigned long long)getAvailableMemory;
- (id)getIntelligentFaceAlbum;
- (id)getIntelligentClassification;
- (void)updateOCRHasInitSuccessedIfNeed;
- (_Bool)checkOCRHasInitSuccessed;
- (id)getIntelligentOCR;
- (void)initIntelligentMsgData;
- (void)initData;
- (id)init;
- (unsigned int)getReportIntelligentMsgCategoryFilterTypeWithCategoryDisplayType:(unsigned int)arg1;
- (void)reportIntelligentMsgSearchInputQueryActionLog:(id)arg1 userName:(id)arg2 searchSessionId:(id)arg3 isHadPriorityBuildIndex:(_Bool)arg4 categoryDisplayType:(unsigned int)arg5;
- (void)reportIntelligentMsgSearchClickPictureActionLog:(id)arg1 userName:(id)arg2 searchSessionId:(id)arg3 isHadPriorityBuildIndex:(_Bool)arg4 searchQuery:(id)arg5 keyWord:(id)arg6 peopleCnt:(unsigned int)arg7 imageSendTime:(unsigned int)arg8 tab:(unsigned int)arg9 categoryDisplayType:(unsigned int)arg10;
- (void)reportIntelligentMsgSearchClickFigureActionLog:(id)arg1 userName:(id)arg2 searchSessionId:(id)arg3 isHadPriorityBuildIndex:(_Bool)arg4 searchQuery:(id)arg5 peopleCnt:(unsigned int)arg6 categoryDisplayType:(unsigned int)arg7;
- (void)reportIntelligentMsgSearchResultActionLog:(id)arg1 userName:(id)arg2 action:(unsigned int)arg3 searchSessionId:(id)arg4 isHadPriorityBuildIndex:(_Bool)arg5 searchQuery:(id)arg6 keyWord:(id)arg7 imageCnt:(unsigned int)arg8 peopleCnt:(unsigned int)arg9 finderCnt:(unsigned int)arg10 searchCost:(unsigned int)arg11 categoryDisplayType:(unsigned int)arg12;
- (void)reportIntelligentMsgSearchClickCancelActionLog:(id)arg1 userName:(id)arg2 searchSessionId:(id)arg3 isHadPriorityBuildIndex:(_Bool)arg4 searchQuery:(id)arg5 searchCost:(unsigned int)arg6 categoryDisplayType:(unsigned int)arg7;
- (void)reportIntelligentMsgSearchActionLog:(id)arg1 userName:(id)arg2 action:(unsigned int)arg3 searchSessionId:(id)arg4 isHadPriorityBuildIndex:(_Bool)arg5 printQuery:(id)arg6 searchQuery:(id)arg7 searchScene:(unsigned int)arg8 tab:(unsigned int)arg9 categoryDisplayType:(unsigned int)arg10;
- (void)reportIntelligentMsgStartUsingActionLog:(id)arg1 userName:(id)arg2 action:(unsigned int)arg3 categoryDisplayType:(unsigned int)arg4;
- (void)reportIntelligentMsgImgClickCategoryWordActionLog:(id)arg1 userName:(id)arg2 searchSessionId:(id)arg3 classification:(id)arg4 isHadPriorityBuildIndex:(_Bool)arg5 categoryDisplayType:(unsigned int)arg6;
- (void)reportIntelligentMsgBrowseViewControllerClickToSearchBannerActionLog:(id)arg1 userName:(id)arg2 isPopUp:(_Bool)arg3 categoryDisplayType:(unsigned int)arg4;
- (void)reportIntelligentMsgBrowseViewControllerActionLog:(id)arg1 userName:(id)arg2 action:(unsigned int)arg3 categoryDisplayType:(unsigned int)arg4;
- (void)reportIntelligentMsgImgExposureActionLog:(id)arg1 userName:(id)arg2 scene:(unsigned int)arg3 imageAllCount:(unsigned long long)arg4 categoryDisplayType:(unsigned int)arg5;
- (id)getMatchTypeStr:(unsigned int)arg1;
- (void)reportIntelligentMsgImgActionLog:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

