//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, OrderedDictionary;

@interface EmoticonCustomManageDataLogic
{
    _Bool _startMultiSelectStatus;
    unsigned long long _type;
    unsigned long long _status;
    OrderedDictionary *_wrapList;
    NSMutableArray *_md5ListIncludeMoving;
    OrderedDictionary *_markedWrapList;
    NSMutableArray *_originIndexesOfMovingWrap;
    NSMutableArray *_insertedIndexesOfMovingWrap;
    NSMutableArray *_needAnimateMd5List;
    long long _placeHolderIndex;
    unsigned long long _startMultiSelectIndex;
    unsigned long long _lastMultiSelectIndex;
    unsigned long long _startMultiSelectMarkedCount;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool startMultiSelectStatus; // @synthesize startMultiSelectStatus=_startMultiSelectStatus;
@property(nonatomic) unsigned long long startMultiSelectMarkedCount; // @synthesize startMultiSelectMarkedCount=_startMultiSelectMarkedCount;
@property(nonatomic) unsigned long long lastMultiSelectIndex; // @synthesize lastMultiSelectIndex=_lastMultiSelectIndex;
@property(nonatomic) unsigned long long startMultiSelectIndex; // @synthesize startMultiSelectIndex=_startMultiSelectIndex;
@property(nonatomic) long long placeHolderIndex; // @synthesize placeHolderIndex=_placeHolderIndex;
@property(retain, nonatomic) NSMutableArray *needAnimateMd5List; // @synthesize needAnimateMd5List=_needAnimateMd5List;
@property(retain, nonatomic) NSMutableArray *insertedIndexesOfMovingWrap; // @synthesize insertedIndexesOfMovingWrap=_insertedIndexesOfMovingWrap;
@property(retain, nonatomic) NSMutableArray *originIndexesOfMovingWrap; // @synthesize originIndexesOfMovingWrap=_originIndexesOfMovingWrap;
@property(retain, nonatomic) OrderedDictionary *markedWrapList; // @synthesize markedWrapList=_markedWrapList;
@property(retain, nonatomic) NSMutableArray *md5ListIncludeMoving; // @synthesize md5ListIncludeMoving=_md5ListIncludeMoving;
@property(retain, nonatomic) OrderedDictionary *wrapList; // @synthesize wrapList=_wrapList;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)updateWrapForAnimationWithStatus:(unsigned long long)arg1;
- (id)getDataForMove:(id)arg1;
- (id)restoreDataForSelectAfterInsert:(id)arg1;
- (id)restoreDataForSelect:(id)arg1;
- (void)updateSelectStatus:(id)arg1;
- (void)updateCustomAddWrapIn:(id)arg1 forMode:(unsigned long long)arg2;
- (id)reloadDataWithType:(unsigned long long)arg1;
- (id)getMergedEmoticonList:(unsigned long long)arg1;
- (id)getLocalEmoticonList:(unsigned long long)arg1;
- (_Bool)needForbiddenFirstWrap;
- (void)endMultiSelect;
- (void)moveMultiSelectWithIndex:(unsigned long long)arg1;
- (void)startMultiSelectWithIndex:(unsigned long long)arg1;
- (void)getInsertIndexWithSucBlock:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2;
- (void)insertPlaceHolderAt:(long long)arg1 WithRemovePreviousInsertBlock:(CDUnknownBlockType)arg2 onlyInsertBlock:(CDUnknownBlockType)arg3;
- (_Bool)shouldInsertPlaceHolderAt:(long long)arg1;
- (void)cleanInsert;
- (void)cleanInsertWithSucBlock:(CDUnknownBlockType)arg1;
- (void)clearAllAnimatedWraps;
- (void)clearAllSelectAndPrepareAnimation;
- (void)checkNeedAnimateList;
- (void)clearMoveStatus;
- (void)clearAllMark;
- (void)changeMarkStateWithWrap:(id)arg1;
- (id)emoticonManageWrapForMd5:(id)arg1;
- (void)commitInsertPlaceWithIndex:(unsigned long long)arg1;
- (id)md5ListForMarkItems;
- (id)indexesOfRemovedWrapForMoveFinish;
- (id)indexesOfInsertedWrapForMoveFinish;
- (id)indexesOfMovingWrap;
- (id)emoticonManageWrapAtIndex:(unsigned long long)arg1;
- (unsigned long long)totalShowingItemsWithoutInsertPlaceHolder:(_Bool)arg1;
- (unsigned long long)totalShowingItems;
- (unsigned long long)totalEmoticonCountShowed;
- (unsigned long long)totalEmoticonCountIncludeRecoverFailed;
- (id)recoverMgr;
- (id)init;
- (id)initWithType:(unsigned long long)arg1;

@end

