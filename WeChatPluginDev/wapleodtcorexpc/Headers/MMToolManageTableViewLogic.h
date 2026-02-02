//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTableView, NSIndexPath, NSMutableArray, NSString;

@interface MMToolManageTableViewLogic : NSObject
{
    _Bool _isEdited;
    NSMutableArray *_addedArray;
    MMTableView *_tableView;
    NSString *_sectionStr0;
    NSString *_sectionStr1;
    unsigned long long _maxAddedArrayCount;
    CDUnknownBlockType _onCannotAddedBlock;
    NSMutableArray *_moreArray;
    NSIndexPath *_lastMovedToIndex;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *lastMovedToIndex; // @synthesize lastMovedToIndex=_lastMovedToIndex;
@property(retain, nonatomic) NSMutableArray *moreArray; // @synthesize moreArray=_moreArray;
@property(copy, nonatomic) CDUnknownBlockType onCannotAddedBlock; // @synthesize onCannotAddedBlock=_onCannotAddedBlock;
@property(nonatomic) unsigned long long maxAddedArrayCount; // @synthesize maxAddedArrayCount=_maxAddedArrayCount;
@property(copy, nonatomic) NSString *sectionStr1; // @synthesize sectionStr1=_sectionStr1;
@property(copy, nonatomic) NSString *sectionStr0; // @synthesize sectionStr0=_sectionStr0;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isEdited; // @synthesize isEdited=_isEdited;
@property(retain, nonatomic) NSMutableArray *addedArray; // @synthesize addedArray=_addedArray;
- (_Bool)isAllCellinSection1;
- (void)setOpocityOfCellsInSection1:(double)arg1;
- (void)onAccessibilityMoveForCell:(id)arg1 isUp:(_Bool)arg2;
- (void)onClickEditButtonForCell:(id)arg1 isAdded:(_Bool)arg2;
- (void)onReorderEnd;
- (id)tableView:(id)arg1 draggingViewForIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldStartResortAtPos:(struct CGPoint)arg2 inCell:(id)arg3 atIndexPath:(id)arg4;
- (_Bool)tableView:(id)arg1 reorderFromIndex:(id)arg2 toIndex:(id)arg3;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)loadData:(id)arg1 moreArray:(id)arg2;
- (void)initLogic;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

