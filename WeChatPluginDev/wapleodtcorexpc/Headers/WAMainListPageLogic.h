//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;
@protocol WAMainListPageLogicDelegate;

@interface WAMainListPageLogic
{
    _Bool _hasNoMore;
    _Bool _needStarData;
    _Bool _exposeUploaded;
    unsigned int _currentPageNum;
    unsigned int _previousPageUpdateTimeOfLastLoacalWAAppItem;
    unsigned int _currentUpdateTimeOfLastLocalWAAppItem;
    unsigned int _updateTimeOfLastRemoteWAAppItem;
    unsigned int _initTimeStamp;
    NSMutableArray *_historyItems;
    id <WAMainListPageLogicDelegate> _delegate;
    NSString *_openSession;
    NSMutableArray *_exposedItemDatas;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool exposeUploaded; // @synthesize exposeUploaded=_exposeUploaded;
@property(nonatomic) unsigned int initTimeStamp; // @synthesize initTimeStamp=_initTimeStamp;
@property(retain, nonatomic) NSMutableArray *exposedItemDatas; // @synthesize exposedItemDatas=_exposedItemDatas;
@property(nonatomic) unsigned int updateTimeOfLastRemoteWAAppItem; // @synthesize updateTimeOfLastRemoteWAAppItem=_updateTimeOfLastRemoteWAAppItem;
@property(nonatomic) unsigned int currentUpdateTimeOfLastLocalWAAppItem; // @synthesize currentUpdateTimeOfLastLocalWAAppItem=_currentUpdateTimeOfLastLocalWAAppItem;
@property(nonatomic) unsigned int previousPageUpdateTimeOfLastLoacalWAAppItem; // @synthesize previousPageUpdateTimeOfLastLoacalWAAppItem=_previousPageUpdateTimeOfLastLoacalWAAppItem;
@property(copy, nonatomic) NSString *openSession; // @synthesize openSession=_openSession;
@property(nonatomic) _Bool needStarData; // @synthesize needStarData=_needStarData;
@property(readonly, nonatomic) unsigned int currentPageNum; // @synthesize currentPageNum=_currentPageNum;
@property(readonly, nonatomic) _Bool hasNoMore; // @synthesize hasNoMore=_hasNoMore;
@property(nonatomic) __weak id <WAMainListPageLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *historyItems; // @synthesize historyItems=_historyItems;
- (void)onWeAppItemsInfoUpdatedErrorWithErrorCode:(int)arg1 scene:(unsigned int)arg2;
- (void)onWeAppItemsInfoUpdatedWithAPageItem:(id)arg1 localLastUpdateTime:(unsigned int)arg2 remoteLastUpdateTime:(unsigned int)arg3 hasMore:(_Bool)arg4 scene:(unsigned int)arg5;
- (void)fetchNextPageItems;
- (id)fetchNextPageLocalData;
- (_Bool)insertHistoryItemAtTop:(id)arg1;
- (void)uploadExposedByDissappearScene:(unsigned long long)arg1;
- (void)uploadExposedByClickIndex:(unsigned long long)arg1;
- (void)uploadExposedByLeaveListType:(unsigned long long)arg1 clickIndex:(unsigned long long)arg2 appid:(id)arg3 nickName:(id)arg4 isStar:(_Bool)arg5;
- (void)markItemExposed:(id)arg1;
- (_Bool)deleteHistoryItem:(id)arg1;
- (_Bool)removeHistoryItem:(id)arg1;
- (_Bool)hasHistoryData;
- (void)unregisterExtensions;
- (void)registerExtensions;
- (void)dealloc;
- (id)initWithNeedStarData:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

