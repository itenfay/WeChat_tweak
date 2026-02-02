//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSObject, WCAdvertiseCommentUploadMgr;
@protocol OS_dispatch_queue;

@interface WCAdvertiseDataHelper
{
    NSMutableArray *m_advertiseList;
    NSMutableArray *m_advertiseMsgXmlList;
    WCAdvertiseCommentUploadMgr *m_adCommentUploader;
    _Bool m_bLoaded;
    NSObject<OS_dispatch_queue> *_dataSaveQueue;
    NSMutableDictionary *_adPullCompareCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *adPullCompareCache; // @synthesize adPullCompareCache=_adPullCompareCache;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dataSaveQueue; // @synthesize dataSaveQueue=_dataSaveQueue;
@property(retain, nonatomic) WCAdvertiseCommentUploadMgr *m_adCommentUploader; // @synthesize m_adCommentUploader;
- (void)tryToStoreWuidFromHistoryAd;
- (void)cleanAdPullCompareCache;
- (void)removeAdPullCompareInfo:(id)arg1;
- (id)fetchAdPullCompareInfo:(id)arg1;
- (void)saveAdPullCompareInfo:(id)arg1;
- (void)reportAdDeleteForExposureNoAction:(id)arg1 dataItem:(id)arg2;
- (void)safeRemoveAdInAdListAtIndex:(unsigned long long)arg1;
- (void)updateAtFriendAdvertiseData:(id)arg1;
- (_Bool)checkInvalidAdData;
- (void)removeAllCacheAdvertiseMsgXml;
- (void)addAdvertiseMsgXml:(id)arg1;
- (id)getAdvertiseMsgXmlList;
- (void)saveAdvertiseMsgXmlDatas;
- (id)GetPathOfWCAdvertiseMsgXmlStorage;
- (_Bool)isAdvertiseItemExistsWithID:(id)arg1;
- (id)getAdvertiseItemByID:(id)arg1;
- (id)getAdvertiseDataByCurMinTime:(unsigned int)arg1 MaxTime:(unsigned int)arg2 checkDataValid:(_Bool)arg3;
- (id)getAdvertiseDataByCurMinTime:(unsigned int)arg1 MaxTime:(unsigned int)arg2;
- (void)updateAdvertiseDataExceptCreateTime:(id)arg1;
- (void)updateAdvertiseDataList:(id)arg1;
- (void)updateAdvertiseData:(id)arg1;
- (void)deleteAllAdvertiseData;
- (void)deleteAdvertiseData:(id)arg1;
- (void)deleteAdvertiseDataList:(id)arg1;
- (void)addAdvertiseDataList:(id)arg1;
- (void)addAdvertiseData:(id)arg1 needUpdateCreateTime:(_Bool)arg2;
- (void)LL_addAdvertiseData:(id)arg1 IsAtFriend:(_Bool)arg2 needUpdateCreateTime:(_Bool)arg3;
- (unsigned int)getEarliestTimeOfCommentsAndLikes:(id)arg1;
- (void)saveAdvertiseDatas;
- (void)tryLoadAdvertiseData;
- (void)reuseAdvertiseData:(id)arg1 isFromServerPush:(_Bool)arg2;
- (_Bool)IsAdvertiseDataCanBeReused:(id)arg1 dataItem:(id)arg2;
- (_Bool)IsAdvertiseDataValid:(id)arg1 dataItem:(id)arg2;
- (_Bool)isAdPreviewExpired:(id)arg1;
- (_Bool)hasOutOfAdEndTime:(id)arg1 dataItem:(id)arg2;
- (_Bool)hasOutOfExposureTime:(id)arg1 dataItem:(id)arg2;
- (_Bool)hasExposured:(id)arg1 dataItem:(id)arg2;
- (_Bool)hasOutOfCommentTime:(id)arg1 dataItem:(id)arg2;
- (_Bool)hasCommented:(id)arg1 dataItem:(id)arg2;
- (id)GetPathOfWCAdvertiseStorage;
- (id)init;

@end

