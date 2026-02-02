//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMFinderLiveMinimizeLogic
{
}

+ (id)getDataItemFromTaskData:(id)arg1;
+ (void)enterMMFinderLiveWithDataItems:(id)arg1 selectIndex:(id)arg2;
+ (id)generateTaskDataWithDataItem:(id)arg1;
+ (void)updateRecentUserdRecordWithDataItem:(id)arg1;
+ (void)updateRecentUserdRecordWithLiveTask:(id)arg1;
- (void)onOutContentTask:(id)arg1 replacedByAnotherTaskData:(id)arg2;
- (void)onEnterRecentUsedTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

