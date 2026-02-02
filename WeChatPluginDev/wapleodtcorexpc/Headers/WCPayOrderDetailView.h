//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UIView;
@protocol WCPayOrderDetailViewDelegate;

@interface WCPayOrderDetailView
{
    double m_fBodyViewHeight;
    UIButton *m_btnFold;
    UIButton *m_btnUnFold;
    UIView *m_BodyView;
    UIView *m_HeaderView;
    UIView *m_FooterView;
    id <WCPayOrderDetailViewDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)OnUnfold;
- (void)OnFold;
- (id)initWithFrame:(struct CGRect)arg1 Data:(id)arg2 delegate:(id)arg3;
- (void)setBodyHeight:(double)arg1;
- (double)getMinHeight;
- (void)onShowUserIntruction:(id)arg1;
- (void)initFooterView:(id)arg1 withBtn:(_Bool)arg2;
- (void)initHeaderView:(id)arg1 Data:(id)arg2;
- (void)initBodyView:(id)arg1;
- (id)getViewWithOrderDetail:(id)arg1 Data:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

