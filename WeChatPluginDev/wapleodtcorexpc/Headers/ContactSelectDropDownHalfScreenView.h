//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, MMUIView, NSArray, NSMutableDictionary, NSString;
@protocol ContactSelectDropDownHalfScreenViewDelegate;

@interface ContactSelectDropDownHalfScreenView
{
    MMTableView *m_tableView;
    MMUIView *m_contentView;
    NSMutableDictionary *m_dicMultiSelect;
    NSArray *m_arrAllContact;
    id <ContactSelectDropDownHalfScreenViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ContactSelectDropDownHalfScreenViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 contact:(id)arg2 tableView:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)getDetailViewAnimateInitTop;
- (double)getMixedViewHeight;
- (id)getContactWithIndexPath:(id)arg1;
- (_Bool)isSelected:(id)arg1;
- (void)hideHalfScreenExpandViewWithAnimated:(_Bool)arg1;
- (void)showHalfScreenExpandViewWithAnimated:(_Bool)arg1;
- (void)layoutTableView;
- (void)layoutContentView;
- (void)layoutView;
- (void)setArrAllSelectContact:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 navigationBarHeight:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

