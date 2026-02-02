//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCPLabel, MMFinderLiveReserveViewModel, MMPageSheetAdapter, MMUIButton, MMUILabel, NSMutableArray, NSString, UIButton, UIImageView, UIScrollView, UIView, WCFinderAuthInfoIconView, WCFinderHeadImageView;

@interface MMFinderLiveReservePageSheet
{
    CDUnknownBlockType _jsapiSuccessBlock;
    UIView *_backgroundView;
    UIScrollView *_containerScrollView;
    UIScrollView *_landsacpeDescContentScrollView;
    MMUIButton *_closeButton;
    WCFinderHeadImageView *_headerView;
    MMCPLabel *_finderNameLabel;
    WCFinderAuthInfoIconView *_proofIconView;
    UIView *_sourceView;
    MMUILabel *_sourceLabel;
    UIImageView *_sourceIcon;
    MMCPLabel *_reserveTimeLabel;
    MMCPLabel *_introductionLabel;
    UIButton *_actionButton;
    MMPageSheetAdapter *_pageSheetAdapter;
    NSMutableArray *_viewList;
    MMFinderLiveReserveViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveReserveViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) NSMutableArray *viewList; // @synthesize viewList=_viewList;
@property(retain, nonatomic) MMPageSheetAdapter *pageSheetAdapter; // @synthesize pageSheetAdapter=_pageSheetAdapter;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MMCPLabel *introductionLabel; // @synthesize introductionLabel=_introductionLabel;
@property(retain, nonatomic) MMCPLabel *reserveTimeLabel; // @synthesize reserveTimeLabel=_reserveTimeLabel;
@property(retain, nonatomic) UIImageView *sourceIcon; // @synthesize sourceIcon=_sourceIcon;
@property(retain, nonatomic) MMUILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) WCFinderAuthInfoIconView *proofIconView; // @synthesize proofIconView=_proofIconView;
@property(retain, nonatomic) MMCPLabel *finderNameLabel; // @synthesize finderNameLabel=_finderNameLabel;
@property(retain, nonatomic) WCFinderHeadImageView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIScrollView *landsacpeDescContentScrollView; // @synthesize landsacpeDescContentScrollView=_landsacpeDescContentScrollView;
@property(retain, nonatomic) UIScrollView *containerScrollView; // @synthesize containerScrollView=_containerScrollView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) CDUnknownBlockType jsapiSuccessBlock; // @synthesize jsapiSuccessBlock=_jsapiSuccessBlock;
- (void)onViewModelWorkFinished;
- (void)onNeedDismissView;
- (void)pageSheetDidAppear:(id)arg1;
- (void)pageSheetDidDisappear:(id)arg1;
- (void)onTappedCloseButton;
- (void)onTappedLiveActionButton;
- (void)onTappedCloseView;
- (id)provideButtonWithReserveStatus:(unsigned long long)arg1;
- (void)closeWithAnimation:(_Bool)arg1;
- (void)openWithAnimation:(_Bool)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)layoutActionButtonWithType:(unsigned long long)arg1;
- (void)layoutHalfScreenContentView;
- (_Bool)isLandscape;
- (void)layoutLandscapeContentViews;
- (void)layoutContentViews;
- (void)layoutSubviews;
- (void)setReportCommentScene:(id)arg1 sceneNote:(id)arg2 noticeBussinessDic:(id)arg3;
- (id)initWithGetLiveNoticeResponse:(id)arg1 frame:(struct CGRect)arg2 fromVC:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

