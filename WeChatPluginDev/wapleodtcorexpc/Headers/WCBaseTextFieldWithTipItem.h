//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, NSString, UIButton;

@interface WCBaseTextFieldWithTipItem
{
    UIButton *m_tipBtn;
    MMUIViewController *m_viewController;
    NSString *m_nsTipTitle;
    NSString *m_nsTipContent;
    NSString *_cancelTitle;
    id _target;
    SEL _action;
}

- (void).cxx_destruct;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(copy, nonatomic) NSString *cancelTitle; // @synthesize cancelTitle=_cancelTitle;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)addCancelTitle:(id)arg1 target:(id)arg2 sel:(SEL)arg3;
- (void)setTipContent:(id)arg1 Title:(id)arg2;
- (void)setTipBtnShowed:(_Bool)arg1;
- (void)setViewController:(id)arg1;
- (void)addTipBtnTarget:(id)arg1 sel:(SEL)arg2;
- (void)showPhoneTip;
- (void)initView:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

