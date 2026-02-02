//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, NSString, UIButton;

@interface WCPayPhoneTextItem
{
    UIButton *m_tipBtn;
    MMUIViewController *m_viewController;
    NSString *m_nsTipTitle;
    NSString *m_nsTipContent;
}

- (void).cxx_destruct;
- (void)setTipContent:(id)arg1 Title:(id)arg2;
- (void)setTipBtnShowed:(_Bool)arg1;
- (void)setViewController:(id)arg1;
- (void)addTipBtnTarget:(id)arg1 sel:(SEL)arg2;
- (void)showPhoneTip;
- (void)initView:(struct CGRect)arg1;

@end

