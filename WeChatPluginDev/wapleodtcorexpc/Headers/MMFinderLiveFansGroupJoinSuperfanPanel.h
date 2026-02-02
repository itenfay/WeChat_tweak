//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTask, MMFinderLiveTaskId, MMLiveHalfScreenTitleBarView, MMUIButton, NSString, UIImageView, UILabel, UIView;

@interface MMFinderLiveFansGroupJoinSuperfanPanel
{
    CDUnknownBlockType _onJoinSuperfanCallback;
    MMFinderLiveTaskId *_taskId;
    MMLiveHalfScreenTitleBarView *_titleBarView;
    MMUIButton *_introductionButton;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_priceDescLabel;
    UILabel *_rightsDetailLabel;
    UIImageView *_wecoinImageView;
    UIView *_lineView;
    MMUIButton *_joinButton;
    unsigned long long _openScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long openScene; // @synthesize openScene=_openScene;
@property(retain, nonatomic) MMUIButton *joinButton; // @synthesize joinButton=_joinButton;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *wecoinImageView; // @synthesize wecoinImageView=_wecoinImageView;
@property(retain, nonatomic) UILabel *rightsDetailLabel; // @synthesize rightsDetailLabel=_rightsDetailLabel;
@property(retain, nonatomic) UILabel *priceDescLabel; // @synthesize priceDescLabel=_priceDescLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMUIButton *introductionButton; // @synthesize introductionButton=_introductionButton;
@property(retain, nonatomic) MMLiveHalfScreenTitleBarView *titleBarView; // @synthesize titleBarView=_titleBarView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) CDUnknownBlockType onJoinSuperfanCallback; // @synthesize onJoinSuperfanCallback=_onJoinSuperfanCallback;
- (id)audienceLogReporter;
- (void)reportJoinButtonClick;
- (void)reportPanelExpose;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (void)gotoDetailPage;
- (void)onJoinButtonClicked;
- (void)onIntroductionButtonClicked;
- (void)pageSheetWillClose:(_Bool)arg1;
- (void)pageSheetWillAppear;
- (double)contentHeight;
- (double)contentWidth;
- (void)layoutSubviews;
- (void)initUI;
- (void)setupPageSheetConfig;
- (id)initWithTaskId:(id)arg1 openScene:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

