//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, MMUILabel, NSString, UIButton, UIScreenEdgePanGestureRecognizer, VoicePrintDigitView, VoicePrintHeaderView, VoicePrintLoadingView, VoicePrintRecordButton, WCSheetView;

@interface VoicePrintBaseViewController
{
    WCSheetView *_sheetView;
    VoicePrintHeaderView *_headerView;
    VoicePrintLoadingView *_loadingView;
    VoicePrintDigitView *_digitView;
    MMUILabel *_errorLabel;
    VoicePrintRecordButton *_recordButton;
    UIButton *_footerWeakButton;
    MMUIButton *_footerLinkButton;
    UIScreenEdgePanGestureRecognizer *_screenEdgePanGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *screenEdgePanGesture; // @synthesize screenEdgePanGesture=_screenEdgePanGesture;
@property(retain, nonatomic) MMUIButton *footerLinkButton; // @synthesize footerLinkButton=_footerLinkButton;
@property(retain, nonatomic) UIButton *footerWeakButton; // @synthesize footerWeakButton=_footerWeakButton;
@property(retain, nonatomic) VoicePrintRecordButton *recordButton; // @synthesize recordButton=_recordButton;
@property(retain, nonatomic) MMUILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) VoicePrintDigitView *digitView; // @synthesize digitView=_digitView;
@property(retain, nonatomic) VoicePrintLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) VoicePrintHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) WCSheetView *sheetView; // @synthesize sheetView=_sheetView;
- (void)onVoiceRecordButtonTouchUp:(id)arg1;
- (void)onVoiceRecordButtonTouchDown:(id)arg1;
- (void)onClose;
- (void)initNavigationBar;
- (void)initView;
- (_Bool)shouldInteractiveDismiss;
- (id)navigationBarBackgroundColor;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

