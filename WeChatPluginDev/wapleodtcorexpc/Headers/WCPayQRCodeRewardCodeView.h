//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UIImageView, UITextField, WCPayControlData, WCPayWebImageView;
@protocol WCPayQRCodeRewardCodeViewDelegate;

@interface WCPayQRCodeRewardCodeView
{
    id <WCPayQRCodeRewardCodeViewDelegate> _delegate;
    WCPayControlData *_controlData;
    long long _currentCodeDisplayMode;
    NSString *_inputContent;
    WCPayWebImageView *_codeImageView;
    UIImageView *_headImgView;
    UITextField *_textField;
    UIButton *_photoHitButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *photoHitButton; // @synthesize photoHitButton=_photoHitButton;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UIImageView *headImgView; // @synthesize headImgView=_headImgView;
@property(retain, nonatomic) WCPayWebImageView *codeImageView; // @synthesize codeImageView=_codeImageView;
@property(retain, nonatomic) NSString *inputContent; // @synthesize inputContent=_inputContent;
@property(nonatomic) long long currentCodeDisplayMode; // @synthesize currentCodeDisplayMode=_currentCodeDisplayMode;
@property(retain, nonatomic) WCPayControlData *controlData; // @synthesize controlData=_controlData;
@property(nonatomic) __weak id <WCPayQRCodeRewardCodeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)confirmChangeToInputMode;
- (void)confirmChangeToHeadImgMode;
- (void)codeViewRemoveWordingFail;
- (void)codeViewRemovewordingSucc;
- (void)codeViewSetWordingFail;
- (void)codeViewSetWordingSucc;
- (void)changeToInputMode;
- (void)changeToHeadImgMode;
- (void)photoHitBtnClick;
- (_Bool)loadCacheCodeViewIfExist;
- (id)getSelfHeaderImageViewWithImgLen:(double)arg1;
- (void)updateAccessibility;
- (void)setupContentView;
- (id)initWithFrame:(struct CGRect)arg1 codeDelegate:(id)arg2 controlData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

