//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController, NSMutableSet, NSString, WCFinderFeedFlowView, WCFinderStreamLoadingState;
@protocol WCFinderFeedBaseViewControllerProtocol, WCFinderFeedFlowAdapterFeedVisitor, WCFinderFeedFlowViewAdapterDataSource><WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewAdapterDeleagte;

@interface WCFinderFeedFlowViewAdapter : NSObject
{
    _Bool _allowTopRefresh;
    _Bool _allowPrefetch;
    int _listVCScene;
    id <WCFinderFeedFlowViewAdapterDeleagte> _delegate;
    WCFinderFeedFlowView *_feedFlowView;
    NSObject *_dataSource;
    WCFinderStreamLoadingState *_loadingState;
    unsigned long long _state;
    unsigned long long _refreshTime;
    id <WCFinderFeedFlowAdapterFeedVisitor> _feedVisitor;
    CDUnknownBlockType _fetchMoreData;
    NSString *_noMoreTips;
    NSString *_emptyTips;
    struct WCFinderFeedFlowViewCellMenuComponment _menuComponment;
    MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *_vc;
    id <WCFinderFeedFlowViewAdapterDataSource><WCFinderFeedFlowViewDataSource> _dataWrapper;
    NSMutableSet *_registerViews;
    struct WCFinderFeedFlowViewHeaderComponment _headerComponment;
}

+ (id)adapterWithVC:(id)arg1 listVCScene:(int)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) int listVCScene; // @synthesize listVCScene=_listVCScene;
@property(retain, nonatomic) NSMutableSet *registerViews; // @synthesize registerViews=_registerViews;
@property(retain, nonatomic) id <WCFinderFeedFlowViewAdapterDataSource><WCFinderFeedFlowViewDataSource> dataWrapper; // @synthesize dataWrapper=_dataWrapper;
@property(nonatomic) __weak MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *vc; // @synthesize vc=_vc;
@property(nonatomic) struct WCFinderFeedFlowViewCellMenuComponment menuComponment; // @synthesize menuComponment=_menuComponment;
@property(nonatomic) struct WCFinderFeedFlowViewHeaderComponment headerComponment; // @synthesize headerComponment=_headerComponment;
@property(retain, nonatomic) NSString *emptyTips; // @synthesize emptyTips=_emptyTips;
@property(retain, nonatomic) NSString *noMoreTips; // @synthesize noMoreTips=_noMoreTips;
@property(copy, nonatomic) CDUnknownBlockType fetchMoreData; // @synthesize fetchMoreData=_fetchMoreData;
@property(retain, nonatomic) id <WCFinderFeedFlowAdapterFeedVisitor> feedVisitor; // @synthesize feedVisitor=_feedVisitor;
@property(nonatomic) _Bool allowPrefetch; // @synthesize allowPrefetch=_allowPrefetch;
@property(nonatomic) _Bool allowTopRefresh; // @synthesize allowTopRefresh=_allowTopRefresh;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) WCFinderStreamLoadingState *loadingState; // @synthesize loadingState=_loadingState;
@property(retain, nonatomic) NSObject *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) WCFinderFeedFlowView *feedFlowView; // @synthesize feedFlowView=_feedFlowView;
@property(nonatomic) __weak id <WCFinderFeedFlowViewAdapterDeleagte> delegate; // @synthesize delegate=_delegate;
- (void)collectionView:(id)arg1 insets:(out struct UIEdgeInsets *)arg2 forSection:(long long)arg3;
- (void)handleMenuItem:(id)arg1;
- (_Bool)onStaticCoverCellShowMenu:(id)arg1 gesture:(id)arg2;
- (void)ensureSupplementaryView:(Class)arg1 kind:(id)arg2;
- (struct WCFinderFeedFlowViewCellMenuComponment *)getMenuComponment;
- (struct WCFinderFeedFlowViewHeaderComponment *)getHeaderComponment;
- (void)updateFooterView;
- (id)getCollectionView;
- (_Bool)coverCellShouldHandleMenuGesgture:(id)arg1 gesture:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (id)cellConfigForFeed:(id)arg1;
- (void)finderFeedFlowViewDidScroll:(id)arg1;
- (_Bool)finderFeedFlowView:(id)arg1 layout:(id)arg2 pinHeaderToVisibleBoundsAtSection:(unsigned long long)arg3;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (_Bool)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (void)onLoadingStateChanged:(id)arg1;
- (unsigned long long)_genFlowViewState;
- (void)_updateLoadingState;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

