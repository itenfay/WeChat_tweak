//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSMutableArray, NSString, UIScrollView, ZZFLEXAngel, ZZFLEXAngelIndexPathChainModel, ZZFLEXAngelViewBatchEditChainModel, ZZFLEXAngelViewEditChainModel;

@interface ZZFLEXTableViewController
{
    long long _tableViewStyle;
    MMTableView *_tableView;
    ZZFLEXAngel *_angel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ZZFLEXAngel *angel; // @synthesize angel=_angel;
@property(readonly, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long tableViewStyle; // @synthesize tableViewStyle=_tableViewStyle;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *data;
@property(readonly, nonatomic) __weak UIScrollView *hostView;
@property(readonly, copy, nonatomic) ZZFLEXAngelIndexPathChainModel *indexPath;
@property(readonly, copy, nonatomic) ZZFLEXAngelViewBatchEditChainModel *dataModelArray;
@property(readonly, copy, nonatomic) ZZFLEXAngelViewEditChainModel *dataModel;
@property(readonly, copy, nonatomic) ZZFLEXAngelViewEditChainModel *hasCell;
@property(readonly, copy, nonatomic) ZZFLEXAngelViewBatchEditChainModel *updateCells;
@property(readonly, copy, nonatomic) ZZFLEXAngelViewEditChainModel *updateCell;
@property(readonly, copy, nonatomic) ZZFLEXAngelViewBatchEditChainModel *deleteCells;
@property(readonly, copy, nonatomic) ZZFLEXAngelViewEditChainModel *deleteCell;
@property(readonly, copy, nonatomic) CDUnknownBlockType insertXibCells;
@property(readonly, copy, nonatomic) CDUnknownBlockType insertCells;
@property(readonly, copy, nonatomic) CDUnknownBlockType insertXibCell;
@property(readonly, copy, nonatomic) CDUnknownBlockType insertCell;
@property(readonly, copy, nonatomic) CDUnknownBlockType addSeperatorCell;
@property(readonly, copy, nonatomic) CDUnknownBlockType addXibCells;
@property(readonly, copy, nonatomic) CDUnknownBlockType addCells;
@property(readonly, copy, nonatomic) CDUnknownBlockType addXibCell;
@property(readonly, copy, nonatomic) CDUnknownBlockType addCell;
@property(readonly, copy, nonatomic) CDUnknownBlockType setXibFooter;
@property(readonly, copy, nonatomic) CDUnknownBlockType setFooter;
@property(readonly, copy, nonatomic) CDUnknownBlockType setXibHeader;
@property(readonly, copy, nonatomic) CDUnknownBlockType setHeader;
@property(readonly, copy, nonatomic) CDUnknownBlockType hasSection;
@property(readonly, copy, nonatomic) CDUnknownBlockType deleteSection;
@property(readonly, copy, nonatomic) CDUnknownBlockType sectionForTag;
@property(readonly, copy, nonatomic) CDUnknownBlockType insertSection;
@property(readonly, copy, nonatomic) CDUnknownBlockType addSection;
@property(readonly, copy, nonatomic) CDUnknownBlockType isEmpty;
@property(readonly, copy, nonatomic) CDUnknownBlockType updateAllCells;
@property(readonly, copy, nonatomic) CDUnknownBlockType updateAllItems;
@property(readonly, copy, nonatomic) CDUnknownBlockType update;
@property(readonly, copy, nonatomic) CDUnknownBlockType clearAllCells;
@property(readonly, copy, nonatomic) CDUnknownBlockType clearAllItems;
@property(readonly, copy, nonatomic) CDUnknownBlockType clear;
@property(readonly, copy, nonatomic) CDUnknownBlockType reload;
- (void)reloadView;
- (void)dealloc;
- (void)viewDidTransitionToNewSize;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

