//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMImagePickerManagerOptionObj, NSString, WCFinderCameraViewModel;
@protocol WCFinderCameraViewControllerDelegate;

@interface WCFinderCameraViewController
{
    WCFinderCameraViewModel *_viewModel;
    id <WCFinderCameraViewControllerDelegate> _cameraDelegate;
    MMImagePickerManagerOptionObj *_optionObj;
    unsigned long long _enterTime;
    NSString *_traceId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) MMImagePickerManagerOptionObj *optionObj; // @synthesize optionObj=_optionObj;
@property(nonatomic) __weak id <WCFinderCameraViewControllerDelegate> cameraDelegate; // @synthesize cameraDelegate=_cameraDelegate;
@property(retain, nonatomic) WCFinderCameraViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)registerYReportSdk;
- (void)reportFinderExtStatsReportByAction:(id)arg1;
- (void)onCameraBtnPress;
- (void)onTemplateStartPress;
- (void)onShortVideoToolBtnClick:(unsigned long long)arg1;
- (id)shortVideoToolBarGetTemplateFollowFeedId;
- (unsigned long long)getFinderPostEnterScene;
- (void)onShortVideoShootBtnClicked:(_Bool)arg1;
- (id)shortVideoToolBarGetMusicSongId;
- (void)close;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)changeCameraCaptureSessionToRun:(_Bool)arg1;
- (_Bool)useTransparentNavibar;
- (void)showImagePicker;
- (_Bool)hidesStatusBar;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewWillPresentQuickReplySession:(id)arg1;
- (void)viewDidPresent:(_Bool)arg1;
- (void)viewDidPush:(_Bool)arg1;
- (id)getReportExtInfoDismissState:(_Bool)arg1 eventCode:(long long)arg2;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillBePushOrPresent:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)handleDefaultCameraFrontBackDevice;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

