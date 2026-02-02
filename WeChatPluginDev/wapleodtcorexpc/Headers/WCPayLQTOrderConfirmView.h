//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIView, NSString, WCPayTenpayPasswordCtrlItem;
@protocol WCPayLQTOrderConfirmViewDelegate;

@interface WCPayLQTOrderConfirmView
{
    unsigned int _money;
    id <WCPayLQTOrderConfirmViewDelegate> _delegate;
    MMUIView *_contentView;
    WCPayTenpayPasswordCtrlItem *_pwdTextFieldItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayTenpayPasswordCtrlItem *pwdTextFieldItem; // @synthesize pwdTextFieldItem=_pwdTextFieldItem;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) unsigned int money; // @synthesize money=_money;
@property(nonatomic) __weak id <WCPayLQTOrderConfirmViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onPayBtnClick;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)cancelBtnClick;
- (void)hideView;
- (void)showView;
- (void)setupContentView;
- (void)setupSubView;
- (id)initLQTConfirmViewWithFrame:(struct CGRect)arg1 money:(unsigned int)arg2 delegate:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

