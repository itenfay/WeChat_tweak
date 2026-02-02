//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AuthorizeCheckBox, FaceRecogPrivateVerifyHandler, MMURLHandler, NSString, OpenSdkFaceDetectInfo, RichTextView, UIButton, UILabel, UITextField, UIView;
@protocol OpenSDKAuthNeedFaceDetectViewControllerDelegate;

@interface OpenSDKAuthNeedFaceDetectViewController
{
    id <OpenSDKAuthNeedFaceDetectViewControllerDelegate> _delegate;
    OpenSdkFaceDetectInfo *_faceDetectInfo;
    UIView *_errorTipsBar;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_confirmButton;
    RichTextView *_richTextView;
    UITextField *_nameTextField;
    UITextField *_idNumberTextFiled;
    UILabel *_nameLabel;
    UILabel *_idNumberLabel;
    UIView *_upperSeperatorLine;
    UIView *_middleSeperatorLine;
    UIView *_bottomSeperatorLine;
    AuthorizeCheckBox *_checkBox;
    MMURLHandler *_urlHandler;
    FaceRecogPrivateVerifyHandler *_faceHandler;
}

+ (_Bool)isFaceDetectInfoValid:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FaceRecogPrivateVerifyHandler *faceHandler; // @synthesize faceHandler=_faceHandler;
@property(retain, nonatomic) MMURLHandler *urlHandler; // @synthesize urlHandler=_urlHandler;
@property(retain, nonatomic) AuthorizeCheckBox *checkBox; // @synthesize checkBox=_checkBox;
@property(retain, nonatomic) UIView *bottomSeperatorLine; // @synthesize bottomSeperatorLine=_bottomSeperatorLine;
@property(retain, nonatomic) UIView *middleSeperatorLine; // @synthesize middleSeperatorLine=_middleSeperatorLine;
@property(retain, nonatomic) UIView *upperSeperatorLine; // @synthesize upperSeperatorLine=_upperSeperatorLine;
@property(retain, nonatomic) UILabel *idNumberLabel; // @synthesize idNumberLabel=_idNumberLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UITextField *idNumberTextFiled; // @synthesize idNumberTextFiled=_idNumberTextFiled;
@property(retain, nonatomic) UITextField *nameTextField; // @synthesize nameTextField=_nameTextField;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *errorTipsBar; // @synthesize errorTipsBar=_errorTipsBar;
@property(retain, nonatomic) OpenSdkFaceDetectInfo *faceDetectInfo; // @synthesize faceDetectInfo=_faceDetectInfo;
@property(nonatomic) __weak id <OpenSDKAuthNeedFaceDetectViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)hideErrorTipsBar;
- (void)showErrorTipsBar:(id)arg1;
- (_Bool)checkIDCardNumberValid:(id)arg1;
- (_Bool)checkParamsValidAndShowTipsIfInvalid;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)onNavigationBackButtonClicked;
- (id)genSeperatorLine;
- (id)genTextField;
- (id)genCommonLabel;
- (void)configureLayout;
- (_Bool)shouldInteractivePop;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (void)faceRecogDidFinishWithCode:(int)arg1 msg:(id)arg2 verifyResult:(id)arg3;
- (void)onStartFaceDetect;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)addKeyboardObserver;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

