//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class ContactsDataLogic, MMTableView, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;
@protocol OpenIMContactSelectViewDelegate;

@interface OpenIMContactSelectView : UIView
{
    ContactsDataLogic *m_contactsDataLogic;
    NSMutableArray *m_sectionKeyArray;
    NSDictionary *m_allOpenIMContactsDic;
    NSString *m_weWorkOpenImAcctType;
    _Bool m_bMultiSelect;
    id <OpenIMContactSelectViewDelegate> m_delegate;
    NSDictionary *m_dicExistContact;
    NSMutableDictionary *m_dicMultiSelect;
    MMTableView *m_tableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView;
@property(nonatomic) _Bool m_bMultiSelect; // @synthesize m_bMultiSelect;
@property(retain, nonatomic) NSMutableDictionary *m_dicMultiSelect; // @synthesize m_dicMultiSelect;
@property(retain, nonatomic) NSDictionary *m_dicExistContact; // @synthesize m_dicExistContact;
@property(nonatomic) __weak id <OpenIMContactSelectViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)onContactAsynSearchSectionResultChanged:(id)arg1 sectionTitles:(id)arg2 sectionResults:(id)arg3;
- (id)getDicSelectedContacts;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)cancelSearch;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onContactsDataChange;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)getTableView;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 ForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (void)makeCell:(id)arg1 contact:(id)arg2 multiSelect:(_Bool)arg3;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadTableView;
- (void)updateMultiSelectView;
- (_Bool)updateMultiSelect:(id)arg1;
- (void)addSelect:(id)arg1;
- (id)getCellImage:(id)arg1;
- (_Bool)isSelected:(id)arg1;
- (_Bool)isExisted:(id)arg1;
- (void)removeSelect:(id)arg1;
- (unsigned long long)getTotalSelectCount;
- (void)dealloc;
- (void)initTableView;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

