//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ImageController, MMInputToolView, MMLoadingView, MMTableView, MassSendHighlightedView, NSArray, NSMutableArray, NSString, RecordController, StreamVoiceInputViewController, UIBarButtonItem, UIView, UIWindow;

@interface MMMassSendWriteMessageViewController
{
    MMTableView *_tableView;
    MassSendHighlightedView *_receiverView;
    MMInputToolView *_inputToolView;
    NSMutableArray *_arrContacts;
    ImageController *_imageController;
    RecordController *_recordController;
    MMLoadingView *_loadingView;
    unsigned int _uiTmpRecordID;
    unsigned int _iFromSendAgain;
    unsigned int m_currentRecordFormat;
    StreamVoiceInputViewController *m_streamVoiceInputViewController;
    UIWindow *m_coverWindow;
    UIView *m_topBarView;
    UIBarButtonItem *m_voiceStreamCacheLeftBtnItem;
    UIBarButtonItem *m_voiceStreamCacheRightBtnItem;
    NSString *m_voiceStreamTitle;
    NSString *m_voiceStreamSavedText;
    _Bool _cancelSendRecording;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool cancelSendRecording; // @synthesize cancelSendRecording=_cancelSendRecording;
@property(nonatomic) unsigned int iFromSendAgain; // @synthesize iFromSendAgain=_iFromSendAgain;
@property(retain, nonatomic) MMInputToolView *toolView; // @synthesize toolView=_inputToolView;
@property(retain, nonatomic) NSArray *arrContacts; // @synthesize arrContacts=_arrContacts;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)finderFeedPickerViewController:(id)arg1 didSelectDataItem:(id)arg2;
- (void)cancelUploadAudioMsg;
- (_Bool)ShouldShowKeyboardAnimation;
- (void)willDisappear;
- (void)PopBack;
- (void)OnMassSendOK;
- (void)OnMassSendFail:(unsigned int)arg1 WithErrorMsg:(id)arg2;
- (void)stopLoadingAndShowError:(id)arg1 duration:(double)arg2;
- (void)mmTableView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (id)GetContactName;
- (struct CGPoint)CheckVoiceBtnPressLocation;
- (_Bool)onRecordCountRemain:(long long)arg1;
- (void)SetPeakPower:(float)arg1;
- (void)ShowTooLongTips;
- (void)ShowStartFailTips:(id)arg1;
- (void)ShowTooShortTips;
- (void)SetVoiceEnabled:(_Bool)arg1;
- (void)HideRecordTips;
- (void)ShowRecording;
- (_Bool)CanDragSelect;
- (_Bool)CanSendVideoMsg;
- (_Bool)CanSendOriginalImage;
- (_Bool)CanSendOriginalVideo;
- (_Bool)CanSendMultiImage;
- (_Bool)isMassSend;
- (id)getNavigationController;
- (id)getViewController;
- (void)CameraControllerDidTakeSightImage:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)CameraControllerDidTakeVideo:(id)arg1;
- (void)processInsertedImage:(id)arg1 withData:(id)arg2 ImageInfo:(id)arg3;
- (void)processInsertedAsset:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)shouldForbidVoiceTrans;
- (void)openCameraController;
- (void)openMediaBrowser;
- (void)hideToolViewAnimated:(_Bool)arg1;
- (void)showStreamVoiceInputMaskView:(_Bool)arg1;
- (void)onSendTextMsg:(id)arg1;
- (void)editStreamVoiceTxtReturn;
- (void)streamVoiceInputFullScreenExit;
- (void)streamVoiceInputFullScreenEnter;
- (void)streamVoiceInputBoardWillHideWithText:(id)arg1;
- (void)streamVoiceInputBoardDidHide;
- (void)streamVoiceInputBoardDidShow;
- (double)getInputToolViewHeight;
- (_Bool)shouldHideToolViewOnKeyboardHide;
- (void)SendFinderMessage:(id)arg1;
- (void)SendEmoticonMesssageToolView:(id)arg1;
- (void)onOpenFinderPicker;
- (id)chatUserNameForSightStatistics;
- (id)getMsgSendOpEntry;
- (id)getCurrentChatName;
- (void)onStreamVoiceInputButtonClick;
- (_Bool)IsRecording;
- (void)CancelRecording;
- (void)StopRecording;
- (void)SendRecording;
- (void)scrollTableToBottomAnimated:(_Bool)arg1 init:(_Bool)arg2;
- (_Bool)StartRecording:(id)arg1;
- (void)sendCaptruedImage:(id)arg1;
- (_Bool)canSendCaptureImage;
- (void)SendEmojiArtMessageToolView:(id)arg1;
- (void)SendTextMessageToolView:(id)arg1;
- (void)onPositionModeChangeTo:(unsigned long long)arg1 Animated:(_Bool)arg2;
- (void)ToolViewPositionDidChanged:(_Bool)arg1 animated:(_Bool)arg2;
- (id)GetCurrentViewController;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)initLoadingView;
- (void)initReceiverView;
- (void)viewDidLayoutSubviews;
- (void)adjustSubviewRects;
- (void)initToolView;
- (void)initTableView;
- (void)MassSendWithConfirmView:(id)arg1;
- (void)MassSend:(id)arg1;
- (id)getAllUsrName;
- (void)viewDidTransitionToNewSize;
- (void)onBack:(id)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

