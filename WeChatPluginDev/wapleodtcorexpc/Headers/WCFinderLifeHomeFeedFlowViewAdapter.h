//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController, NSString, WCFinderExtStatsReporter, WCFinderFeedFlowView;
@protocol WCFinderFeedBaseViewControllerProtocol, WCFinderLifeHomeFeedFlowViewDatas;

@interface WCFinderLifeHomeFeedFlowViewAdapter : NSObject
{
    int _commentScene;
    WCFinderFeedFlowView *_feedFlowView;
    id <WCFinderLifeHomeFeedFlowViewDatas> _datas;
    WCFinderExtStatsReporter *_extStatsReporter;
    MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *_viewControler;
}

+ (void)setupCollectionView:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *viewControler; // @synthesize viewControler=_viewControler;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) WCFinderExtStatsReporter *extStatsReporter; // @synthesize extStatsReporter=_extStatsReporter;
@property(retain, nonatomic) id <WCFinderLifeHomeFeedFlowViewDatas> datas; // @synthesize datas=_datas;
@property(retain, nonatomic) WCFinderFeedFlowView *feedFlowView; // @synthesize feedFlowView=_feedFlowView;
- (void)onFeedDetailAbnormalFeedWithContentVM:(id)arg1;
- (void)onFeedDetailDislikeFeedWithContentVM:(id)arg1;
- (void)onNearbyRelatedTriggerUnLikeAction:(id)arg1;
- (id)findViewController;
- (void)clickRecommendUrl:(id)arg1;
- (void)onClickCoverContact:(id)arg1 contentVM:(id)arg2;
- (id)liveCellStyleInfo;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (_Bool)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (unsigned long long)finderFeedFlowViewPrefetchRemainCount:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 reportParametersAtIndexPath:(id)arg2;
- (id)finderFeedFlowViewAutoPlayParams:(id)arg1;
- (void)didSelectLiveFeedWithContentVM:(id)arg1 atIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 reportExtStatsReportAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (_Bool)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (double)finderFeedFlowView:(id)arg1 heightForCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (id)finderFeedFlowView:(id)arg1 customSupplementaryViewOfKind:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)finderFeedFlowView:(id)arg1 isCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)arg1;
- (void)onPageViewModelScrollToTop:(id)arg1;
- (void)onPageViewModelStateChanged:(id)arg1;
- (void)onPageViewModel:(id)arg1 dataChanged:(id)arg2;
- (void)onPageViewModel:(id)arg1 requestDataFinish:(_Bool)arg2;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (id)initWithCommentScene:(int)arg1 viewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

