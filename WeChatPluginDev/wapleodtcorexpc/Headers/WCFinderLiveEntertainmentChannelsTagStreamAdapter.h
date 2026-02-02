//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController, NSString, WCFinderFeedFlowView, WCFinderLiveEntertainmentChannelsTagStreamVM, WCFinderLiveFeedGenericAutoPlayModel;
@protocol WCFinderFeedBaseViewControllerProtocol, WCFinderLiveEntertainmentChannelsTagStreamAdapterDelegate;

@interface WCFinderLiveEntertainmentChannelsTagStreamAdapter : NSObject
{
    id <WCFinderLiveEntertainmentChannelsTagStreamAdapterDelegate> _delegate;
    WCFinderFeedFlowView *_feedFlowView;
    NSString *_tag;
    MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *_currentViewController;
    WCFinderLiveEntertainmentChannelsTagStreamVM *_vm;
    WCFinderLiveFeedGenericAutoPlayModel *_autoPlayCtx;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveFeedGenericAutoPlayModel *autoPlayCtx; // @synthesize autoPlayCtx=_autoPlayCtx;
@property(retain, nonatomic) WCFinderLiveEntertainmentChannelsTagStreamVM *vm; // @synthesize vm=_vm;
@property(nonatomic) __weak MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) WCFinderFeedFlowView *feedFlowView; // @synthesize feedFlowView=_feedFlowView;
@property(nonatomic) __weak id <WCFinderLiveEntertainmentChannelsTagStreamAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onEntertainmentAudioRoomCellTeamUpListClickUnoccupiedSeat:(id)arg1;
- (void)onClickCoverContact:(id)arg1 feedVM:(id)arg2;
- (void)onLiveEntertainmentChannelsTagStreamFetchFailWithErrorCode:(int)arg1;
- (void)onLiveEntertainmentChannelsTagStreamNoMoreData;
- (void)onLiveEntertainmentChannelsTagStreamAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)onLiveEntertainmentChannelsTagStreamReloadAllData:(id)arg1;
- (double)finderFeedFlowViewFlowSectionBottomFooterInset:(id)arg1;
- (unsigned long long)finderFeedFlowView:(id)arg1 columnCountAtSection:(unsigned long long)arg2;
- (struct UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (struct CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (void)finderFeedFlowView:(id)arg1 reportExtStatsReportAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 reportParametersAtIndexPath:(id)arg2;
- (void)finderFeedFlowViewDidScrollToTop:(id)arg1;
- (void)finderFeedFlowViewDidScroll:(id)arg1;
- (void)finderFeedFlowViewWillBeginDragging:(id)arg1 atIndexPath:(id)arg2;
- (void)finderFeedFlowViewDidEndScrolling:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedFlowView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (_Bool)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (double)finderFeedFlowView:(id)arg1 heightForCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (id)finderFeedFlowView:(id)arg1 customSupplementaryViewOfKind:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)finderFeedFlowView:(id)arg1 isCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (void)goToSettingLocationAuthorization:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (_Bool)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)arg1;
- (void)stopPlayWithIndexPath:(id)arg1;
- (void)startPlayWithIndexPath:(id)arg1;
- (void)stopAutoPlay;
- (_Bool)checkAutoPlay;
- (id)visibleElementModels;
- (void)scrollToTop;
- (void)deleteTid:(id)arg1;
- (void)finishFirstPageRequest:(id)arg1;
- (void)appear;
- (void)disappear;
- (id)initWithTag:(id)arg1 view:(id)arg2 InViewController:(id)arg3 delegate:(id)arg4 vm:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

