//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCompatibleCGIDB, NSString;

@interface MMCompatibleCGIMgr
{
    MMCompatibleCGIDB *m_compatibleCGIDB;
}

- (void).cxx_destruct;
- (_Bool)checkHadCompatibleCGIDataWithId:(id)arg1;
- (id)getPbUniqueIDPrefixWithCompatibleCGIType:(unsigned int)arg1;
- (unsigned int)getUiCgiWithCompatibleCGIType:(unsigned int)arg1;
- (id)getCompatibleCGIDataWithId:(id)arg1;
- (id)getPbUniqueIDWithCompatibleCGIType:(unsigned int)arg1 pbInfo:(id)arg2;
- (id)getPbUniqueIDWithPBCGIWrap:(id)arg1 andCompatibleCGIType:(unsigned int)arg2;
- (id)getPBResponseObject:(id)arg1;
- (id)getPBRequestObject:(id)arg1;
- (void)reloadCompatibleCGIDataWithId:(id)arg1 handleblock:(CDUnknownBlockType)arg2;
- (void)saveCompatibleCGIData:(id)arg1 compatibleCGIType:(unsigned int)arg2 pbUniqueID:(id)arg3;
- (void)saveCompatibleCGIData:(id)arg1 compatibleCGIType:(unsigned int)arg2;
- (void)dealloc;
- (void)onServiceClearData;
- (void)initData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

