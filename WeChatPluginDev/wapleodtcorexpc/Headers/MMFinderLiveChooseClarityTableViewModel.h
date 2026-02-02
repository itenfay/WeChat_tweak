//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UITableView;
@protocol MMFinderLiveChooseClarityTableDataDelegate;

@interface MMFinderLiveChooseClarityTableViewModel : NSObject
{
    NSMutableArray *_clarityMethodDataArray;
    UITableView *_tableView;
    id <MMFinderLiveChooseClarityTableDataDelegate> _dataDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMFinderLiveChooseClarityTableDataDelegate> dataDelegate; // @synthesize dataDelegate=_dataDelegate;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) NSMutableArray *clarityMethodDataArray;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)getClarityTableHeight;
- (void)appendClarityMethodData:(id)arg1;
- (id)initWithTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

