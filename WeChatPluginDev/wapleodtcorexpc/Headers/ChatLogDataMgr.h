//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ChatLogDataStat, NSMutableArray, NSObject, NSRecursiveLock, NSString;
@protocol OS_dispatch_queue;

@interface ChatLogDataMgr
{
    NSMutableArray *_arrSessionInfo;
    unsigned long long _startLoadDataTime;
    unsigned int _loadDataCostTime;
    struct vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> _arrSessionItems;
    struct vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> _arrImageSessionItems;
    struct vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> _arrVideoSessionItems;
    struct vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> _arrFileSessionItems;
    struct vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> _arrFilterSessionItems;
    struct vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> _arrFilterImgSessionItems;
    struct vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> _arrFilterVideoSessionItems;
    struct vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> _arrFilterFileSessionItems;
    NSObject<OS_dispatch_queue> *_removeFileQueue;
    _Bool _loadingData;
    _Bool _loadDataEnd;
    unsigned long long _oneMsgSize;
    _Bool _bGetProgress;
    _Bool _bGetDetailOfAggregationMsg;
    _Bool _filteringData;
    _Bool _filterDataEnd;
    unsigned int _msgOldestTime;
    unsigned int _msgNewestTime;
    unsigned long long _allSessionSize;
    unsigned long long _allOtherFileSize;
    unsigned long long _allMsgSize;
    unsigned long long _allMessageCount;
    unsigned long long _allThumbFileSize;
    unsigned long long _allThumbFileCount;
    unsigned long long _allAudioSize;
    unsigned long long _allAudioCount;
    unsigned long long _allImgThumbSize;
    unsigned long long _allImgThumbCount;
    unsigned long long _allAppThumbSize;
    unsigned long long _allAppThumbCount;
    unsigned long long _allVideoThumbSize;
    unsigned long long _allVideoThumbCount;
    unsigned long long _allRawImageSize;
    unsigned long long _allRawImageCount;
    unsigned long long _allRawVideoSize;
    unsigned long long _allRawVideoCount;
    unsigned long long _allVideoCount;
    unsigned long long _allFileCount;
    unsigned long long _allImageCount;
    unsigned long long _allRecordCount;
    NSMutableArray *_arrBrandSessionInfo;
    NSRecursiveLock *_detailRecurciveLock;
    ChatLogDataStat *_stat;
    CDUnknownBlockType _chatLogCalCompletion;
    CDUnknownBlockType _chatLogFilterCalCompletion;
    map_94801aa5 _sizeOfFileType;
}

+ (id)getRelatedMemoryKV;
+ (_Bool)isAppRecordFirstOpen;
+ (void)setAppRecordFirstOpen;
+ (id)convertSessionItem:(const void *)arg1;
+ (id)convertSessionItemOtherSize:(const void *)arg1;
+ (id)convertSessionItemMsgSize:(const void *)arg1;
+ (unsigned long long)getSessionItemResSize:(const void *)arg1;
+ (unsigned long long)getSessionItemImageSize:(const void *)arg1;
+ (unsigned long long)getSessionItemVideoSize:(const void *)arg1;
+ (unsigned long long)getSessionItemFileSize:(const void *)arg1;
+ (unsigned long long)getSessionItemAllSize:(const void *)arg1;
+ (unsigned long long)getOneSessionItemAllSize:(void *)arg1;
+ (void)recalculateHardlinkSizeForSessionItem:(void *)arg1;
+ (void)calculateTrueCount:(void *)arg1 retCount:(unsigned long long *)arg2 retSize:(unsigned long long *)arg3;
+ (_Bool)isCanAddToFileItems:(shared_ptr_09342520)arg1;
+ (_Bool)isAppRecordMsg:(id)arg1;
+ (_Bool)isTmpFile:(id)arg1;
+ (id)getSessionNickName:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType chatLogFilterCalCompletion; // @synthesize chatLogFilterCalCompletion=_chatLogFilterCalCompletion;
@property(copy, nonatomic) CDUnknownBlockType chatLogCalCompletion; // @synthesize chatLogCalCompletion=_chatLogCalCompletion;
@property(retain, nonatomic) ChatLogDataStat *stat; // @synthesize stat=_stat;
@property(retain, nonatomic) NSRecursiveLock *detailRecurciveLock; // @synthesize detailRecurciveLock=_detailRecurciveLock;
@property(nonatomic) unsigned int msgNewestTime; // @synthesize msgNewestTime=_msgNewestTime;
@property(nonatomic) unsigned int msgOldestTime; // @synthesize msgOldestTime=_msgOldestTime;
@property(nonatomic) _Bool filterDataEnd; // @synthesize filterDataEnd=_filterDataEnd;
@property(nonatomic) _Bool filteringData; // @synthesize filteringData=_filteringData;
@property(nonatomic) _Bool bGetDetailOfAggregationMsg; // @synthesize bGetDetailOfAggregationMsg=_bGetDetailOfAggregationMsg;
@property(nonatomic) _Bool bGetProgress; // @synthesize bGetProgress=_bGetProgress;
@property(retain, nonatomic) NSMutableArray *arrBrandSessionInfo; // @synthesize arrBrandSessionInfo=_arrBrandSessionInfo;
@property(nonatomic) unsigned long long allRecordCount; // @synthesize allRecordCount=_allRecordCount;
@property(nonatomic) unsigned long long allImageCount; // @synthesize allImageCount=_allImageCount;
@property(nonatomic) unsigned long long allFileCount; // @synthesize allFileCount=_allFileCount;
@property(nonatomic) unsigned long long allVideoCount; // @synthesize allVideoCount=_allVideoCount;
@property(nonatomic) map_94801aa5 sizeOfFileType; // @synthesize sizeOfFileType=_sizeOfFileType;
@property(nonatomic) unsigned long long allRawVideoCount; // @synthesize allRawVideoCount=_allRawVideoCount;
@property(nonatomic) unsigned long long allRawVideoSize; // @synthesize allRawVideoSize=_allRawVideoSize;
@property(nonatomic) unsigned long long allRawImageCount; // @synthesize allRawImageCount=_allRawImageCount;
@property(nonatomic) unsigned long long allRawImageSize; // @synthesize allRawImageSize=_allRawImageSize;
@property(nonatomic) unsigned long long allVideoThumbCount; // @synthesize allVideoThumbCount=_allVideoThumbCount;
@property(nonatomic) unsigned long long allVideoThumbSize; // @synthesize allVideoThumbSize=_allVideoThumbSize;
@property(nonatomic) unsigned long long allAppThumbCount; // @synthesize allAppThumbCount=_allAppThumbCount;
@property(nonatomic) unsigned long long allAppThumbSize; // @synthesize allAppThumbSize=_allAppThumbSize;
@property(nonatomic) unsigned long long allImgThumbCount; // @synthesize allImgThumbCount=_allImgThumbCount;
@property(nonatomic) unsigned long long allImgThumbSize; // @synthesize allImgThumbSize=_allImgThumbSize;
@property(nonatomic) unsigned long long allAudioCount; // @synthesize allAudioCount=_allAudioCount;
@property(nonatomic) unsigned long long allAudioSize; // @synthesize allAudioSize=_allAudioSize;
@property(nonatomic) unsigned long long allThumbFileCount; // @synthesize allThumbFileCount=_allThumbFileCount;
@property(nonatomic) unsigned long long allThumbFileSize; // @synthesize allThumbFileSize=_allThumbFileSize;
@property(nonatomic) unsigned long long allMessageCount; // @synthesize allMessageCount=_allMessageCount;
@property(nonatomic) unsigned long long allMsgSize; // @synthesize allMsgSize=_allMsgSize;
@property(nonatomic) unsigned long long allOtherFileSize; // @synthesize allOtherFileSize=_allOtherFileSize;
@property(nonatomic) unsigned long long allSessionSize; // @synthesize allSessionSize=_allSessionSize;
- (vector_d88869c6)getAllFilterDataItems;
- (vector_d88869c6)getAllDataItems;
- (void)asyncGetChatLogSizeOfSession:(id)arg1 afterTime:(unsigned int)arg2 endTime:(unsigned int)arg3;
- (void)asyncGetBackupChatLogSize;
- (id)getAllBackupSessionItem;
- (unsigned int)getMsgNewestTime;
- (unsigned int)getMsgOldestTime;
- (void)getFilterInfo:(shared_ptr_5102c92c)arg1 oneMsgSize:(unsigned long long)arg2 startTime:(unsigned int)arg3 endTime:(unsigned int)arg4;
- (void)reloadDataStartTime:(unsigned int)arg1 endTime:(unsigned int)arg2;
- (const void *)getFilterFileSessionItem;
- (const void *)getFilterVideoSessionItem;
- (const void *)getFilterImageSessionItem;
- (const void *)getAllFilterSessionItem;
- (void)innerDeleteDataItem:(void *)arg1;
- (void)p_removeDataItemInFilter:(const void *)arg1;
- (void)p_removeDataItemInFull:(const void *)arg1;
- (void)deleteDataItems:(const void *)arg1;
- (void)deleteFileItems:(const void *)arg1;
- (void)deleteVideoItems:(const void *)arg1;
- (void)deleteImageItems:(const void *)arg1;
- (void)deleteSessionDataItems:(const void *)arg1;
- (void)deleteSessionDataItems:(const void *)arg1 withType:(int)arg2;
- (void)deleteSessions:(const void *)arg1 startTime:(unsigned int)arg2 endTime:(unsigned int)arg3;
- (void)p_innerStopDownloadUploadTask:(const void *)arg1;
- (const void *)getFileSessionItem;
- (const void *)getVideoSessionItem;
- (const void *)getImageSessionItem;
- (const void *)getAllSessionItem;
- (shared_ptr_5102c92c)getSessionItemWithUserName:(id)arg1 bFilter:(_Bool)arg2;
- (shared_ptr_5102c92c)getSessionItemOfIndex:(unsigned long long)arg1;
- (unsigned long long)getCountOfSessionItem;
- (void)getDetailInfoForSessionInfo:(shared_ptr_5102c92c)arg1 oneMsgSize:(unsigned long long)arg2;
- (void)onLoadDataWithDBSize:(unsigned long long)arg1 usernames:(id)arg2;
- (void)completeAfterLoadDataFinish;
- (id)expandFullPathFromCacheKey:(id)arg1;
- (id)getCacheKeyFromFullPath:(id)arg1;
- (void)reanalyseOriginVideoAndImage:(void *)arg1;
- (void)analyseResDir:(id)arg1 dataType:(int)arg2 msgType:(int)arg3 sessionItem:(void *)arg4;
- (void)getFileSizeAndTimeForDataItem:(void *)arg1 with:(id)arg2 with:(unsigned long long)arg3;
- (void)setChatLogRecordDataForFolder:(id)arg1 sessionItem:(void *)arg2;
- (void)getRecordMsgInnerFileInfo:(id)arg1 localID:(unsigned int)arg2 forFiles:(id)arg3 inSessionItem:(void *)arg4 innerIndex:(id)arg5;
- (void)resetChatLogData:(int)arg1 msgType:(int)arg2 withFilePath:(id)arg3 withLocalID:(unsigned int)arg4 dataItem:(void *)arg5 sessionItem:(void *)arg6;
- (void)setChatLogData:(int)arg1 msgType:(int)arg2 withFilePath:(id)arg3 withLocalID:(unsigned int)arg4 dataItem:(void *)arg5 sessionItem:(void *)arg6;
- (unsigned int)parseMesLocalIdFromPath:(id)arg1;
- (id)getSessionName:(id)arg1;
- (_Bool)isAlreadyStartLoadData;
- (_Bool)isFilteringData;
- (_Bool)isDataLoadEnd;
- (unsigned int)getLoadDataCostTime;
- (void)stopLoadData;
- (void)startLoadDataWithDBSize:(unsigned long long)arg1 usernames:(id)arg2;
- (void)startLoadDataWithDBSize:(unsigned long long)arg1;
- (void)startLoadDataWithUsernames:(id)arg1;
- (void)startLoadData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

