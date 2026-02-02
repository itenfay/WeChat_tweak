//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface UDRCheckListener
{
    NSMutableArray *_projectIdArray;
    NSMutableDictionary *_paramsMap;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)updateProjectIdArray;
- (void)doCleanUDR;
- (void)doUpdateUDR;
- (void)repeatCheckUDRUpdate;
- (void)checkUDRUpdate;
- (void)dealloc;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

