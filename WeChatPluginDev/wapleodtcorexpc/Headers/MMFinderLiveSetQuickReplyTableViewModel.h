//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UITableView;
@protocol MMFinderLiveSetQuickReplyTableDataDelegate;

@interface MMFinderLiveSetQuickReplyTableViewModel : NSObject
{
    UITableView *_tableView;
    id <MMFinderLiveSetQuickReplyTableDataDelegate> _dataDelegate;
    NSMutableArray *_dataArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) __weak id <MMFinderLiveSetQuickReplyTableDataDelegate> dataDelegate; // @synthesize dataDelegate=_dataDelegate;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)quickReplyTableCleanButtonClick:(id)arg1 dataArray:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)addButtonClick;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)getTableHeight;
- (id)getCurrrentDataArray;
- (void)makeFirstResponder:(long long)arg1;
- (void)updateData:(id)arg1;
- (id)initWithTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

