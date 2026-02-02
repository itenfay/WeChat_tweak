//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderMembershipPaymentNoticeDetailView;

@interface WCFinderMembershipPaymentNoticeView
{
    WCFinderMembershipPaymentNoticeDetailView *_panelDetailView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMembershipPaymentNoticeDetailView *panelDetailView; // @synthesize panelDetailView=_panelDetailView;
- (void)panelDidClickLink:(id)arg1;
- (void)panelLayoutFinished;
- (double)contentFooterHeight;
- (double)contentHeaderHeight;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

