//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandServiceStorage, NSString;

@interface BrandServiceMgr
{
    BrandServiceStorage *m_serviceStorage;
}

- (void).cxx_destruct;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)saveStorage;
- (void)loadStorage;
- (id)pathForStorage;
- (void)ResetLocationForUser:(id)arg1;
- (_Bool)HasSetLocationForUser:(id)arg1;
- (void)MarkHasSetLocationForUser:(id)arg1;
- (long long)GetContinueLocationReportInterval;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

