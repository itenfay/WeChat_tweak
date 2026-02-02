//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCTDatabase, WCTTable;

@interface MagicSclFrameSetInfoDBService
{
    WCTDatabase *_db;
    WCTTable *_frameSetInfoTable;
}

- (void).cxx_destruct;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (void)reInit;
- (int)getHeightForBizName:(id)arg1 frameSetName:(id)arg2 path:(id)arg3;
- (_Bool)updateHeightForBizName:(id)arg1 frameSetName:(id)arg2 path:(id)arg3 newHeight:(int)arg4;
- (void)onServiceTerminate;
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

