//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSRecursiveLock, NSString, WCFinderDataItem, WCFinderPostSessionModel;

@interface WCFinderTempSaveService
{
    WCFinderDataItem *_dataItemModel;
    WCFinderPostSessionModel *_postSession;
    NSRecursiveLock *_lock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) WCFinderPostSessionModel *postSession; // @synthesize postSession=_postSession;
@property(retain, nonatomic) WCFinderDataItem *dataItemModel; // @synthesize dataItemModel=_dataItemModel;
- (void)checkSingleFileDataTransfer;
- (void)removeOldReportPostStateModel:(id)arg1;
- (id)p_getReportPostStateModel;
- (void)setDataItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

