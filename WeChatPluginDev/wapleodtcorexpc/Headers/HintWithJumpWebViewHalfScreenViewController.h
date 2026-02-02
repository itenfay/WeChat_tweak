//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, OrientationSafePageSheetContainer;

@interface HintWithJumpWebViewHalfScreenViewController
{
    NSString *_title;
    NSString *_url;
    NSString *_confirmWording;
    NSString *_cancelWording;
    CDUnknownBlockType _urlClickCallabck;
    CDUnknownBlockType _confirmCallback;
    CDUnknownBlockType _cancelCallback;
    unsigned long long _supportedOrientationMask;
    OrientationSafePageSheetContainer *container;
}

- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)viewDidLoad;
- (id)pageSheetContainer;
- (id)initWithTitle:(id)arg1 withBottomUrl:(id)arg2 withConfirmCallback:(CDUnknownBlockType)arg3 withCancelCallback:(CDUnknownBlockType)arg4 withBottomUrlClickCallback:(CDUnknownBlockType)arg5 withConfirmWording:(id)arg6 wtihCancelWording:(id)arg7 withSupportedOrientationMask:(unsigned long long)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

