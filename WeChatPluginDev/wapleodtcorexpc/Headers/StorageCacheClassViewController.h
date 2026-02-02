//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSString, UIButton, UILabel, UIView;
@protocol StorageCacheClassDelegate;

@interface StorageCacheClassViewController
{
    _Bool _isFoldingWeAppInfo;
    id <StorageCacheClassDelegate> _delegate;
    NSMutableArray *_dataArray;
    MMTableView *_tableView;
    UIView *_footerView;
    UIButton *_selectAllButton;
    UIButton *_deleteButton;
    UILabel *_sizeLabel;
    UILabel *_emptyLabel;
    NSMutableArray *_weAppDataArray;
    NSMutableArray *_selectedClassification;
    NSMutableArray *_selectedWeAppClassification;
}

+ (id)arrageTheWeAppChildClass:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *selectedWeAppClassification; // @synthesize selectedWeAppClassification=_selectedWeAppClassification;
@property(retain, nonatomic) NSMutableArray *selectedClassification; // @synthesize selectedClassification=_selectedClassification;
@property(retain, nonatomic) NSMutableArray *weAppDataArray; // @synthesize weAppDataArray=_weAppDataArray;
@property(nonatomic) _Bool isFoldingWeAppInfo; // @synthesize isFoldingWeAppInfo=_isFoldingWeAppInfo;
@property(retain, nonatomic) UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIButton *selectAllButton; // @synthesize selectAllButton=_selectAllButton;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) __weak id <StorageCacheClassDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (unsigned long long)p_getDeleteCacheSize;
- (_Bool)p_isDataAllSelect;
- (_Bool)p_isSelectEmpty;
- (void)onDeleteSelectedData;
- (void)onSelecteAll;
- (void)onReturn;
- (void)reloadData;
- (void)initFooterPannelView;
- (void)updateFooterPannelView;
- (void)initTableView;
- (void)initEmptyView;
- (struct CGRect)getTableViewFrame;
- (void)viewDidLayoutSubviews;
- (void)updateVisible;
- (void)viewDidLoad;
- (id)initWithClassification:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

