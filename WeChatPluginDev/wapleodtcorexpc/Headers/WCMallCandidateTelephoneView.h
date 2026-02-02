//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImageView, UITableView;
@protocol WCMallCandidateTelephoneViewDelegate;

@interface WCMallCandidateTelephoneView
{
    UITableView *m_oTelFilterTableView;
    UIImageView *bgImageView;
    id <WCMallCandidateTelephoneViewDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCMallCandidateTelephoneViewDelegate> m_delegate; // @synthesize m_delegate;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)reloadTelFilterTableView;
- (void)reloadCandidateTelephoneView;
- (void)dealloc;
- (void)resetWCMallTelListTableViewHeight:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initView;
- (void)initTableView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

