//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderJumpInfo, MMLiveTaskId, NSData, NSMutableArray, NSString, UICollectionView;
@protocol MMLivePreviewRelatedViewModelDelegate;

@interface MMLivePreviewRelatedViewModel : NSObject
{
    _Bool _isFetchingNextPage;
    _Bool _isStarted;
    _Bool _canHandleTransform;
    _Bool _isInClickScrollingAnimation;
    _Bool _needChangeIndexOnUpdate;
    _Bool _nextEnterLiveReportWithClick;
    _Bool _nextScrollLiveWithClick;
    _Bool _needReportOnDisplay;
    _Bool _isDataItemsRemoving;
    _Bool _isDataItemsAppending;
    _Bool _isDataItemsPrepending;
    _Bool _isDataItemsPrependSettingOffset;
    _Bool _isDataItemsReplacing;
    unsigned int _activityId;
    id <MMLivePreviewRelatedViewModelDelegate> _vmDelegate;
    long long _viewModelId;
    UICollectionView *_collectionView;
    NSMutableArray *_specialLiveContentVMList;
    NSMutableArray *_savedNormalStateLiveContentVMList;
    NSMutableArray *_relatedItemControllers;
    NSMutableArray *_displayPRContentVMs;
    long long _normalStateIndex;
    unsigned long long _currentPlayingIndex;
    FinderJumpInfo *_bannerInfo;
    NSData *_preivewRelatedLastBuffer;
    unsigned long long _enterTime;
    unsigned long long _initialLiveId;
    MMLiveTaskId *_taskId;
}

+ (id)specialCollectionViewLayout;
- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) _Bool isDataItemsReplacing; // @synthesize isDataItemsReplacing=_isDataItemsReplacing;
@property(nonatomic) _Bool isDataItemsPrependSettingOffset; // @synthesize isDataItemsPrependSettingOffset=_isDataItemsPrependSettingOffset;
@property(nonatomic) _Bool isDataItemsPrepending; // @synthesize isDataItemsPrepending=_isDataItemsPrepending;
@property(nonatomic) _Bool isDataItemsAppending; // @synthesize isDataItemsAppending=_isDataItemsAppending;
@property(nonatomic) _Bool isDataItemsRemoving; // @synthesize isDataItemsRemoving=_isDataItemsRemoving;
@property(nonatomic) _Bool needReportOnDisplay; // @synthesize needReportOnDisplay=_needReportOnDisplay;
@property(nonatomic) _Bool nextScrollLiveWithClick; // @synthesize nextScrollLiveWithClick=_nextScrollLiveWithClick;
@property(nonatomic) _Bool nextEnterLiveReportWithClick; // @synthesize nextEnterLiveReportWithClick=_nextEnterLiveReportWithClick;
@property(nonatomic) _Bool needChangeIndexOnUpdate; // @synthesize needChangeIndexOnUpdate=_needChangeIndexOnUpdate;
@property(nonatomic) _Bool isInClickScrollingAnimation; // @synthesize isInClickScrollingAnimation=_isInClickScrollingAnimation;
@property(nonatomic) _Bool canHandleTransform; // @synthesize canHandleTransform=_canHandleTransform;
@property(nonatomic) _Bool isStarted; // @synthesize isStarted=_isStarted;
@property(nonatomic) _Bool isFetchingNextPage; // @synthesize isFetchingNextPage=_isFetchingNextPage;
@property(nonatomic) unsigned long long initialLiveId; // @synthesize initialLiveId=_initialLiveId;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(nonatomic) unsigned int activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) NSData *preivewRelatedLastBuffer; // @synthesize preivewRelatedLastBuffer=_preivewRelatedLastBuffer;
@property(retain, nonatomic) FinderJumpInfo *bannerInfo; // @synthesize bannerInfo=_bannerInfo;
@property(nonatomic) unsigned long long currentPlayingIndex; // @synthesize currentPlayingIndex=_currentPlayingIndex;
@property(nonatomic) long long normalStateIndex; // @synthesize normalStateIndex=_normalStateIndex;
@property(retain, nonatomic) NSMutableArray *displayPRContentVMs; // @synthesize displayPRContentVMs=_displayPRContentVMs;
@property(retain) NSMutableArray *relatedItemControllers; // @synthesize relatedItemControllers=_relatedItemControllers;
@property(retain, nonatomic) NSMutableArray *savedNormalStateLiveContentVMList; // @synthesize savedNormalStateLiveContentVMList=_savedNormalStateLiveContentVMList;
@property(retain, nonatomic) NSMutableArray *specialLiveContentVMList; // @synthesize specialLiveContentVMList=_specialLiveContentVMList;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) long long viewModelId; // @synthesize viewModelId=_viewModelId;
@property(nonatomic) __weak id <MMLivePreviewRelatedViewModelDelegate> vmDelegate; // @synthesize vmDelegate=_vmDelegate;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)reportOnDisplayWithType:(unsigned long long)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)adjustCollectionViewContentOffsetWithAnimate;
- (void)updateEnterTime;
- (void)replaceDataItemAtNormalStateIndex;
- (void)saveDataItemsWithArray:(id)arg1 index:(long long)arg2;
- (void)cleanBannerInfos;
- (void)OnReloadData;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

