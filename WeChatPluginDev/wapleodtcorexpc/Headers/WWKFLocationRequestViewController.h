//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSString, WWKFLocationRequestView;

@interface WWKFLocationRequestViewController
{
    CContact *_contact;
    WWKFLocationRequestView *_contentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WWKFLocationRequestView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
- (void)onSetAllowReportLocation:(id)arg1 allowReport:(_Bool)arg2 success:(_Bool)arg3;
- (void)onWWKFLocationRequestLearnMore;
- (void)onWWKFLocationRequestApprove;
- (void)onWWKFLocationRequestReject;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

