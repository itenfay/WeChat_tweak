//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAuthorizeGameInfoHalfScreenViewModel, MMTableView, NSString, UIView;
@protocol MMAuthorizeGameInfoHalfScreenViewDelegate;

@interface MMAuthorizeGameInfoHalfScreenView
{
    id <MMAuthorizeGameInfoHalfScreenViewDelegate> _delegate;
    MMAuthorizeGameInfoHalfScreenViewModel *_halfScreenViewModel;
    MMTableView *_tableView;
    UIView *_tableFooterView;
    UIView *_footerViewSeperator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *footerViewSeperator; // @synthesize footerViewSeperator=_footerViewSeperator;
@property(retain, nonatomic) UIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMAuthorizeGameInfoHalfScreenViewModel *halfScreenViewModel; // @synthesize halfScreenViewModel=_halfScreenViewModel;
@property(nonatomic) __weak id <MMAuthorizeGameInfoHalfScreenViewDelegate> delegate; // @synthesize delegate=_delegate;
- (double)calDetailViewHeight;
- (double)pageSheetContentWidth;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)layoutSubviews;
- (void)changeHeight;
- (void)setupTableView;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

