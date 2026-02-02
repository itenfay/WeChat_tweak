//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSString;
@protocol MailContactFilterViewDelegate;

@interface MailContactFilterView
{
    MMTableView *m_tableView;
    NSMutableArray *m_filterArray;
    id <MailContactFilterViewDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MailContactFilterViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSMutableArray *m_filterArray; // @synthesize m_filterArray;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)initView;
- (void)initData;
- (void)resetOffset;
- (void)reloadTableView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

