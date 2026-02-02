//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIView, NSString, UITableView;
@protocol WCMallOldTelephoneViewDelegate;

@interface WCMallOldTelephoneView
{
    UITableView *m_oTelFilterTableView;
    id <WCMallOldTelephoneViewDelegate> m_delegate;
    unsigned int _historyCount;
    MMUIView *_backgroundView;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int historyCount; // @synthesize historyCount=_historyCount;
@property(retain, nonatomic) MMUIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <WCMallOldTelephoneViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)tapGesture;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)reloadTelFilterTableView;
- (void)resetWCMallTelListTableViewHeight;
- (void)initTableView;
- (void)initView;
- (id)initOldTelphoneViewWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

