//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FindContactSearchViewCellInfo, MMTableView, NSArray, NSString, UIView;

@interface SearchContactViewController
{
    UIView *m_headerSearchView;
    FindContactSearchViewCellInfo *m_searchInfo;
    NSArray *m_resultArray;
    NSString *m_searchText;
    MMTableView *m_tableView;
}

- (void).cxx_destruct;
- (void)onMainWindowFrameChanged;
- (_Bool)isSeachActive;
- (void)onCancelSearch;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithResultArray:(id)arg1 searchText:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

