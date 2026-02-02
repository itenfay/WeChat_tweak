//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIButton, UIImageView, UITextField, UIWindow;
@protocol GraphicVerifyWindowDelegate;

@interface GraphicVerifyWindow
{
    UIImageView *m_codeImageView;
    UIButton *m_changeImgBtn;
    UIButton *m_verifyBtn;
    UIButton *m_cancelBtn;
    UITextField *m_textFieldCode;
    id <GraphicVerifyWindowDelegate> m_delegate;
    UIWindow *oldKeyWindow;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *m_codeImageView; // @synthesize m_codeImageView;
@property(retain, nonatomic) UIWindow *oldKeyWindow; // @synthesize oldKeyWindow;
- (void)resignKeyWindow;
- (void)makeKeyAndVisible;
- (void)textFieldDidEndOnExit:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)onNext;
- (void)onGraphicVerifyBack;
- (void)onGraphicVerifyChangeImage;
- (void)initHeaderView;
- (void)internalInit;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

