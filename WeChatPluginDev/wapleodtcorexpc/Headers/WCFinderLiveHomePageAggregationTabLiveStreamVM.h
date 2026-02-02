//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveSquareStyleInfo, NSMutableDictionary, NSString, WCFinderFeedFlowView, WCFinderLiveHomePageTabLiveStreamSectionViewModel, WCFinderLiveTabInfo;
@protocol WCFinderLiveHomePageAggregationTabLiveStreamVMDelegate;

@interface WCFinderLiveHomePageAggregationTabLiveStreamVM : NSObject
{
    _Bool _skipFeedsReport;
    _Bool _showLocationAuthorized;
    id <WCFinderLiveHomePageAggregationTabLiveStreamVMDelegate> _delegate;
    unsigned long long _state;
    unsigned long long _refreshTime;
    WCFinderLiveTabInfo *_tabInfo;
    WCFinderLiveTabInfo *_jumpToTabInfo;
    WCFinderFeedFlowView *_feedFlowView;
    unsigned long long _selectTabId;
    WCFinderLiveHomePageTabLiveStreamSectionViewModel *_sectionVM;
    NSMutableDictionary *_dataModels;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dataModels; // @synthesize dataModels=_dataModels;
@property(nonatomic) _Bool showLocationAuthorized; // @synthesize showLocationAuthorized=_showLocationAuthorized;
@property(nonatomic) __weak WCFinderLiveHomePageTabLiveStreamSectionViewModel *sectionVM; // @synthesize sectionVM=_sectionVM;
@property(nonatomic) _Bool skipFeedsReport; // @synthesize skipFeedsReport=_skipFeedsReport;
@property(nonatomic) unsigned long long selectTabId; // @synthesize selectTabId=_selectTabId;
@property(nonatomic) __weak WCFinderFeedFlowView *feedFlowView; // @synthesize feedFlowView=_feedFlowView;
@property(retain, nonatomic) WCFinderLiveTabInfo *jumpToTabInfo; // @synthesize jumpToTabInfo=_jumpToTabInfo;
@property(retain, nonatomic) WCFinderLiveTabInfo *tabInfo; // @synthesize tabInfo=_tabInfo;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <WCFinderLiveHomePageAggregationTabLiveStreamVMDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resetExposeSession;
- (void)removeDataWithTid:(id)arg1;
- (unsigned long long)indexOfTid:(id)arg1;
- (void)selectSubTab:(id)arg1 isToggle:(_Bool)arg2 willSwitchBlock:(CDUnknownBlockType)arg3;
- (id)currentContainerReadIds;
- (id)currentContainerLastBuffer;
- (id)feedVMAtIndexPath:(id)arg1;
- (void)updateState;
- (id)requestTabInfoWithDataModel:(id)arg1;
@property(readonly, nonatomic) _Bool isFetchingData;
@property(readonly, nonatomic) _Bool hasFetchData;
@property(readonly, nonatomic) _Bool continueFlag;
- (id)createFeedVMWithModel:(id)arg1 isSkeleton:(_Bool)arg2;
- (void)fetchMoreDataWithPullType:(unsigned long long)arg1;
- (void)refreshDataFromTop;
- (void)fetchMoreData;
- (void)initSubTabDataModelWithTabInfo:(id)arg1;
- (void)initTabDataModelWithTabInfo:(id)arg1;
@property(readonly, nonatomic) WCFinderLiveTabInfo *selectTabInfo;
- (id)currentDataModel;
- (unsigned long long)numberOfSkeletonItems;
- (unsigned long long)numberOfItems;
- (_Bool)hasNoData;
- (void)cancelAllCgi;
@property(readonly, nonatomic) FinderLiveSquareStyleInfo *globalStyleInfo;
- (void)makeBottomSkeletonData;
- (void)initDataModelIfNeeded;
- (id)initWithSectionVM:(id)arg1 tabInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

