//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImage, UIImageView, WCFinderMusicSelectView, WCFinderTemplateMusicSelectEntranceView, WCFinderTemplateVideoEditViewModel;
@protocol WCFinderTemplateVideoEditVCDelegate;

@interface WCFinderTemplateVideoEditViewController
{
    _Bool _exporting;
    id <WCFinderTemplateVideoEditVCDelegate> _delegate;
    NSString *_templateId;
    UIImage *_backGroundThumbImg;
    WCFinderTemplateVideoEditViewModel *_viewModel;
    NSString *_selectedMusicId;
    WCFinderTemplateMusicSelectEntranceView *_musicEntranceView;
    WCFinderMusicSelectView *_musicView;
    UIImageView *_backgroundImgView;
    unsigned long long _enterTime;
    NSString *_traceId;
    unsigned long long _eventId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long eventId; // @synthesize eventId=_eventId;
@property(copy, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(nonatomic, getter=isExporting) _Bool exporting; // @synthesize exporting=_exporting;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) UIImageView *backgroundImgView; // @synthesize backgroundImgView=_backgroundImgView;
@property(retain, nonatomic) WCFinderMusicSelectView *musicView; // @synthesize musicView=_musicView;
@property(retain, nonatomic) WCFinderTemplateMusicSelectEntranceView *musicEntranceView; // @synthesize musicEntranceView=_musicEntranceView;
@property(copy, nonatomic) NSString *selectedMusicId; // @synthesize selectedMusicId=_selectedMusicId;
@property(retain, nonatomic) WCFinderTemplateVideoEditViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIImage *backGroundThumbImg; // @synthesize backGroundThumbImg=_backGroundThumbImg;
@property(copy, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(nonatomic) __weak id <WCFinderTemplateVideoEditVCDelegate> delegate; // @synthesize delegate=_delegate;
- (void)registerYReportSdk;
- (unsigned long long)feedViewerScene;
- (int)feedViewControllerScene;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)removeObserverForForegroundNotification;
- (void)addObserverForForegroundNotification;
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
- (void)finderTemplateMusicSelectEntranceViewDidClick;
- (void)updateOptions;
- (void)onCancel;
- (void)onDone;
- (void)setupNavigationUI;
- (void)setupCancelBtn;
- (void)updateMusicUI;
- (double)getMusicViewBottom;
- (double)getMusicEntranceViewBottom;
- (void)setupMusicUI;
- (void)setupBackGroundImage;
- (void)setupBackGroundView;
- (void)createTemplateVideo;
- (_Bool)useTransparentNavibar;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)getReportExtInfoWithTemplateId:(id)arg1;
- (void)viewDidLoad;
- (id)initWithAssetInfos:(id)arg1 templateId:(id)arg2 musicId:(id)arg3 eventId:(unsigned long long)arg4 firstVideoPath:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

