//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveEcGetLiveConfigResponse_ShowAnimation_HotSellingOptions, NSMutableArray, NSString, WCFinderFeedFlowView, WCFinderLiveFeedGenericAutoPlayModel, WCFinderLiveStreamContainerModel;
@protocol WCFinderLiveTopicTemplatePageManagerDelegate;

@interface WCFinderLiveTopicTemplatePageManager : NSObject
{
    _Bool _fromSceneIsTilingSwitch;
    _Bool _isRequesting;
    id <WCFinderLiveTopicTemplatePageManagerDelegate> _delegate;
    WCFinderFeedFlowView *_feedFlowView;
    unsigned long long _pageIndex;
    NSString *_topicId;
    NSString *_topicTitle;
    NSString *_themeTagId;
    WCFinderLiveStreamContainerModel *_containerModel;
    WCFinderLiveFeedGenericAutoPlayModel *_autoPlayModel;
    NSMutableArray *_feedVMs;
    FinderLiveEcGetLiveConfigResponse_ShowAnimation_HotSellingOptions *_hotSellingOptions;
    NSString *_contentVMSessionExtraKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *contentVMSessionExtraKey; // @synthesize contentVMSessionExtraKey=_contentVMSessionExtraKey;
@property(retain, nonatomic) FinderLiveEcGetLiveConfigResponse_ShowAnimation_HotSellingOptions *hotSellingOptions; // @synthesize hotSellingOptions=_hotSellingOptions;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(retain, nonatomic) NSMutableArray *feedVMs; // @synthesize feedVMs=_feedVMs;
@property(retain, nonatomic) WCFinderLiveFeedGenericAutoPlayModel *autoPlayModel; // @synthesize autoPlayModel=_autoPlayModel;
@property(nonatomic) _Bool fromSceneIsTilingSwitch; // @synthesize fromSceneIsTilingSwitch=_fromSceneIsTilingSwitch;
@property(retain, nonatomic) WCFinderLiveStreamContainerModel *containerModel; // @synthesize containerModel=_containerModel;
@property(retain, nonatomic) NSString *themeTagId; // @synthesize themeTagId=_themeTagId;
@property(retain, nonatomic) NSString *topicTitle; // @synthesize topicTitle=_topicTitle;
@property(retain, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
@property(nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(retain, nonatomic) WCFinderFeedFlowView *feedFlowView; // @synthesize feedFlowView=_feedFlowView;
@property(nonatomic) __weak id <WCFinderLiveTopicTemplatePageManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getReportChannelExtraStringWithFeedVM:(id)arg1;
- (id)getReportChannelExtraMutableDictWithFeedVM:(id)arg1;
- (id)getCommentSceneStr;
- (void)reportProductClick:(id)arg1 feedVM:(id)arg2;
- (void)reportProductExposeIfNeeded:(id)arg1;
- (void)reportAutoPlayStateChange:(id)arg1 isPlaying:(_Bool)arg2;
- (void)reportValidExposeChanged:(id)arg1 isExpose:(_Bool)arg2 index:(unsigned long long)arg3;
- (void)setupCellExposeReportLogic:(id)arg1 indexPath:(id)arg2 feedVM:(id)arg3;
- (id)containerReadIds;
- (id)finderFeedFlowView:(id)arg1 reportParametersAtIndexPath:(id)arg2;
- (void)pushToProfileWithContact:(id)arg1 feedVM:(id)arg2;
- (id)createFeedVMFromElementModel:(id)arg1;
- (void)recreateFeedVMArray;
- (int)getContainerType;
- (id)defaultStyleInfo;
- (void)updateWatchContext;
- (void)gotoLiveRoomWithFeedVM:(id)arg1 product:(id)arg2;
- (int)getCommentScene;
- (id)hotSalePAGFileForTopicTemplateCell:(id)arg1;
- (void)topicTemplateCell:(id)arg1 didClickProduct:(id)arg2 feedVM:(id)arg3;
- (void)topicTemplateCell:(id)arg1 didClickContact:(id)arg2 feedVM:(id)arg3;
- (void)onPlayStateChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)onClickCoverContact:(id)arg1 feedVM:(id)arg2;
- (struct CGRect)liveMorphDismissTargetFrameOnScreenForCustomKey:(id)arg1 videoSize:(struct CGSize)arg2;
- (_Bool)shouldLiveUseMorphDismissForCustomKey:(id)arg1;
- (void)finderFeedFlowViewDidScroll:(id)arg1;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (_Bool)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (void)liveStreamStopWithIndexPath:(id)arg1;
- (_Bool)doPlayCell:(id)arg1 indexPath:(id)arg2;
- (_Bool)liveStreamStartPlayWithIndexPath:(id)arg1;
- (void)finderFeedFlowViewDidEndScrolling:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (struct CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (struct UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (unsigned long long)finderFeedFlowView:(id)arg1 columnCountAtSection:(unsigned long long)arg2;
- (_Bool)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (void)updateHotSellingOptions:(id)arg1;
- (void)handleProductShowcaseUpdated:(id)arg1 objectId:(unsigned long long)arg2;
- (_Bool)canHandleProductShowcase;
- (id)getVisibleStreamElementModels;
- (void)autoPlayLiveIfCan;
- (void)stopPlayingLive;
- (void)initDataIfNeeded;
- (id)initWithContainerModel:(id)arg1 feedFlowView:(id)arg2 contentVMSessionExtraKey:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

