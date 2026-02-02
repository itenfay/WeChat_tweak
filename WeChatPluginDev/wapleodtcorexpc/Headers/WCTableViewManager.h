//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTableView, NSMutableArray, NSString;
@protocol MMTableViewInfoDelegate;

@interface WCTableViewManager : NSObject
{
    _Bool _disableAutoDeselectRows;
    _Bool _disableEditingStyle;
    MMTableView *_tableView;
    id <MMTableViewInfoDelegate> _delegate;
    Class _customizedCellType;
    NSMutableArray *_sections;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) Class customizedCellType; // @synthesize customizedCellType=_customizedCellType;
@property(nonatomic) _Bool disableEditingStyle; // @synthesize disableEditingStyle=_disableEditingStyle;
@property(nonatomic) _Bool disableAutoDeselectRows; // @synthesize disableAutoDeselectRows=_disableAutoDeselectRows;
@property(nonatomic) __weak id <MMTableViewInfoDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (void)mmTableView:(id)arg1 touchesCancelled:(id)arg2 withEvent:(id)arg3;
- (void)mmTableView:(id)arg1 touchesEnded:(id)arg2 withEvent:(id)arg3;
- (void)mmTableView:(id)arg1 touchesMoved:(id)arg2 withEvent:(id)arg3;
- (void)mmTableView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)drawSeparatorFor:(id)arg1 AtIndexPath:(id)arg2 mode:(unsigned long long)arg3;
- (id)getSeparator;
- (id)visibleCellForInfo:(id)arg1;
- (id)indexPathForCellInfo:(id)arg1;
- (id)cellInfoAtIndexPath:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadTableView;
- (void)clearAllSection;
- (id)getAllSections;
- (void)removeCellAt:(id)arg1;
- (void)removeSectionAt:(unsigned long long)arg1;
- (id)getSectionAt:(unsigned long long)arg1;
- (unsigned long long)getSectionCount;
- (void)insertSection:(id)arg1 At:(unsigned int)arg2;
- (void)addSection:(id)arg1;
- (void)addTableViewToSuperViewWithoutResetTableViewFrame:(id)arg1;
- (void)addTableViewToSuperView:(id)arg1;
- (id)getTableView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 usedTableViewClass:(Class)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

