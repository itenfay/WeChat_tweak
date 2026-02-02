//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCPayBindCardConfirmViewControllerDelegate;

@interface WCPayBindCardConfirmViewController
{
    id <WCPayBindCardConfirmViewControllerDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property __weak id <WCPayBindCardConfirmViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)onWCPayBindCardConfirmViewConfirm:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)reloadTableView;
- (id)navigationBarBackgroundColor;
- (void)onBack;
- (_Bool)shouldInteractivePop;
- (void)viewWillBePresented:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)setDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

