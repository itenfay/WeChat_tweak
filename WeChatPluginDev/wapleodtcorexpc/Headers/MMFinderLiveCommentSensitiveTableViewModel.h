//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveSensitiveTableView, NSMutableArray, NSString;

@interface MMFinderLiveCommentSensitiveTableViewModel : NSObject
{
    CDUnknownBlockType _onSensitiveDataItemAddCallback;
    CDUnknownBlockType _onSensitiveDataItemDeleteCallback;
    MMFinderLiveSensitiveTableView *_tableView;
    NSMutableArray *_sensitiveSrcDataItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *sensitiveSrcDataItems; // @synthesize sensitiveSrcDataItems=_sensitiveSrcDataItems;
@property(retain, nonatomic) MMFinderLiveSensitiveTableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType onSensitiveDataItemDeleteCallback; // @synthesize onSensitiveDataItemDeleteCallback=_onSensitiveDataItemDeleteCallback;
@property(copy, nonatomic) CDUnknownBlockType onSensitiveDataItemAddCallback; // @synthesize onSensitiveDataItemAddCallback=_onSensitiveDataItemAddCallback;
- (void)handleTableViewPanGesture:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (unsigned long long)checkEnableAddSensitiveDataItem:(id)arg1;
- (void)reloadData;
- (void)deleteSensitiveDataItemAtIndex:(unsigned long long)arg1;
- (void)addSensitiveWord:(id)arg1;
- (id)getVisibleEditTableViewCell;
- (void)deleteSensitiveDataItem:(id)arg1;
- (id)currSensitiveDataItems;
- (void)updateSensitiveDataItems:(id)arg1;
- (id)initWithTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

