//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderCreateLiveWarnPageCommon, MMFinderCreateLiveSpamCheckReportSession, MMFinderLiveTaskId, MMUILabel, MMWebImageView, NSString, RichTextView, UIButton, UIScrollView;
@protocol MMFinderCreateLiveSpamCheckWarnPageVCDelegate;

@interface MMFinderCreateLiveSpamCheckWarnPageViewController
{
    _Bool _hasVerified;
    int _warnType;
    id <MMFinderCreateLiveSpamCheckWarnPageVCDelegate> _delegate;
    MMFinderLiveTaskId *_taskId;
    MMWebImageView *_logoView;
    MMUILabel *_titleView;
    RichTextView *_contentRichTextView;
    UIScrollView *_spamScrollView;
    FinderCreateLiveWarnPageCommon *_warnPage;
    UIButton *_actionButton;
    RichTextView *_appealLinkTV;
    MMFinderCreateLiveSpamCheckReportSession *_reportSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderCreateLiveSpamCheckReportSession *reportSession; // @synthesize reportSession=_reportSession;
@property(nonatomic) _Bool hasVerified; // @synthesize hasVerified=_hasVerified;
@property(nonatomic) int warnType; // @synthesize warnType=_warnType;
@property(retain, nonatomic) RichTextView *appealLinkTV; // @synthesize appealLinkTV=_appealLinkTV;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) FinderCreateLiveWarnPageCommon *warnPage; // @synthesize warnPage=_warnPage;
@property(retain, nonatomic) UIScrollView *spamScrollView; // @synthesize spamScrollView=_spamScrollView;
@property(retain, nonatomic) RichTextView *contentRichTextView; // @synthesize contentRichTextView=_contentRichTextView;
@property(retain, nonatomic) MMUILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) MMWebImageView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMFinderCreateLiveSpamCheckWarnPageVCDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onFaceVerifySucceeded;
- (void)onBackButtonClicked:(id)arg1;
- (void)webViewReturn:(id)arg1;
- (void)onWebViewCloseAndGoNext:(id)arg1 webVC:(id)arg2 customClose:(_Bool *)arg3;
- (void)onActionButtonClicked;
- (void)registerYReportSdk;
- (int)commentSceneWithWarnType:(int)arg1;
- (void)layoutUI;
- (void)checkSetIsVerifying:(_Bool)arg1;
- (void)dealloc;
- (long long)getCurrentOrientation;
- (id)navigationBarBackgroundColor;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)reportExposeElement;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reloadData;
- (void)viewDidLoad;
- (id)initWithLiveTaskId:(id)arg1 warnPage:(id)arg2 warnType:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

