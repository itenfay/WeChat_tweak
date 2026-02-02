//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSString, UIImage, UIImageView, UIViewController, WCFinderMusicSelectView, WCFinderTemplateChooseView, WCFinderTemplateMusicSelectEntranceView, WCFinderTemplateProcessVCParams, WCFinderTemplateVideoEditViewModel;
@protocol WCFinderTemplateProcessViewControllerDelegate;

@interface WCFinderTemplateProcessViewController
{
    _Bool _exporting;
    id <WCFinderTemplateProcessViewControllerDelegate> _delegate;
    UIImage *_backgroundThumbImg;
    unsigned long long _enterScene;
    UIViewController *_nextPushViewController;
    WCFinderTemplateVideoEditViewModel *_viewModel;
    WCFinderTemplateChooseView *_templateChooseView;
    WCFinderTemplateProcessVCParams *_params;
    WCFinderTemplateMusicSelectEntranceView *_musicEntranceView;
    WCFinderMusicSelectView *_musicView;
    UIImageView *_backgroundImgView;
    MMUIButton *_doneBtn;
    MMUIButton *_cancelBtn;
    unsigned long long _enterTime;
    NSString *_preSelectedTemplateID;
    NSString *_traceId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(copy, nonatomic) NSString *preSelectedTemplateID; // @synthesize preSelectedTemplateID=_preSelectedTemplateID;
@property(nonatomic, getter=isExporting) _Bool exporting; // @synthesize exporting=_exporting;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) MMUIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) MMUIButton *doneBtn; // @synthesize doneBtn=_doneBtn;
@property(retain, nonatomic) UIImageView *backgroundImgView; // @synthesize backgroundImgView=_backgroundImgView;
@property(retain, nonatomic) WCFinderMusicSelectView *musicView; // @synthesize musicView=_musicView;
@property(retain, nonatomic) WCFinderTemplateMusicSelectEntranceView *musicEntranceView; // @synthesize musicEntranceView=_musicEntranceView;
@property(retain, nonatomic) WCFinderTemplateProcessVCParams *params; // @synthesize params=_params;
@property(retain, nonatomic) WCFinderTemplateChooseView *templateChooseView; // @synthesize templateChooseView=_templateChooseView;
@property(retain, nonatomic) WCFinderTemplateVideoEditViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIViewController *nextPushViewController; // @synthesize nextPushViewController=_nextPushViewController;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) UIImage *backgroundThumbImg; // @synthesize backgroundThumbImg=_backgroundThumbImg;
@property(nonatomic) __weak id <WCFinderTemplateProcessViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)finderEditImageVCDidClickCancelBtn;
- (void)finderEditImageVCDidClickDoneBtn;
- (void)finderEditVideoVCDidClickCancelBtn:(id)arg1;
- (void)finderEditVideoVCDidClickDoneBtn;
- (void)finderTemplateMusicSelectEntranceViewDidClick;
- (_Bool)isOSTMuted;
- (id)musicDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)musicCount;
- (void)finderTemplateMusicViewDidAddMusicFromSearchModel:(id)arg1;
- (void)finderTemplateMusicViewDidCancelSearchMusic;
- (void)finderTemplateMusicViewDidStartSearchMusic;
- (id)finderTemplateMuiscViewGetViewController;
- (void)finderTemplateMuiscViewDidChangeToANewIndex:(unsigned long long)arg1;
- (void)finderTemplateMuiscViewDidClickMusic;
- (void)finderTemplateMuiscViewDidClickOstBtn;
- (void)finderTemplateMuiscViewDidClickCloseBtn;
- (id)getExposeAndClickExtInfo;
- (void)finderTemplateChooseView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3;
- (void)finderTemplateChooseView:(id)arg1 didSelectTemplateAtIndex:(unsigned long long)arg2;
- (_Bool)finderTemplateChooseView:(id)arg1 canSelectTemplateAtIndex:(unsigned long long)arg2;
- (id)finderTemplateChooseViewGetViewModel;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)removeObserverForForegroundNotification;
- (void)addObserverForForegroundNotification;
- (void)onCancel;
- (void)onDone;
- (void)updateOptions;
- (void)updateMusicEntranceViewUI;
- (void)returnToThisVC;
- (void)createVideoAndFetchReccommendTemplates;
- (void)createVideoWithAppointTemplates;
- (void)setTopViewHidden:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (_Bool)useTransparentNavibar;
- (_Bool)hidesStatusBar;
- (unsigned long long)musicSelectViewOption;
- (void)_setupBackGroundImage:(id)arg1;
- (void)setupBackGroundImg;
- (void)setupSubViews;
- (double)templateViewBottom;
- (double)musicViewBottom;
- (void)disableNavigationUI;
- (void)enableNavigationUI;
- (void)setupNavigationUI;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)getReportExtInfoWithTemplateId:(id)arg1;
- (void)viewDidLoad;
- (id)initWithAssetInfos:(id)arg1 firstVideoPath:(id)arg2 optionalParams:(id)arg3;
- (id)initWithAssetInfos:(id)arg1 firstVideoPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

