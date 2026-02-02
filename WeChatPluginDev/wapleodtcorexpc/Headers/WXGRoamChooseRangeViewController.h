//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUINavigationBar, NSMutableArray, NSString, UINavigationItem, UITableView;

@interface WXGRoamChooseRangeViewController
{
    double m_addButtonHeight;
    _Bool _isUpadte;
    UINavigationItem *_customNavigationItem;
    MMUINavigationBar *_customNavigationBar;
    NSMutableArray *_cellHeightArr;
    UITableView *_sheetView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITableView *sheetView; // @synthesize sheetView=_sheetView;
@property(retain, nonatomic) NSMutableArray *cellHeightArr; // @synthesize cellHeightArr=_cellHeightArr;
@property(retain, nonatomic) MMUINavigationBar *customNavigationBar; // @synthesize customNavigationBar=_customNavigationBar;
@property(retain, nonatomic) UINavigationItem *customNavigationItem; // @synthesize customNavigationItem=_customNavigationItem;
@property(nonatomic) _Bool isUpadte; // @synthesize isUpadte=_isUpadte;
- (void)onRoamBackupPackageServiceChooseRangeDetailComplete;
- (void)updateView;
- (void)onCreate;
- (void)onCancel;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)makeAddButtonCellWithWidth:(double)arg1;
- (void)setupNavBar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

