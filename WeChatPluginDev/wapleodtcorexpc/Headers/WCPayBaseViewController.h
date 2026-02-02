//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCPayControlData;
@protocol WCPayBaseViewControllerDelegate, WCPayBaseViewControllerRemoveDelegate;

@interface WCPayBaseViewController
{
    WCPayControlData *m_data;
    id <WCPayBaseViewControllerDelegate> _payBaseDelegate;
    id <WCPayBaseViewControllerRemoveDelegate> _removeDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayBaseViewControllerRemoveDelegate> removeDelegate; // @synthesize removeDelegate=_removeDelegate;
- (void)refreshViewWithData:(id)arg1;
- (void)setupWithData:(id)arg1;
- (void)setPayBaseDelegate:(id)arg1;
- (void)OnBack;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)init;
- (id)data;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

