//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDate, NSMutableDictionary, NSString;

@interface CertInfoMgr
{
    NSMutableDictionary *m_dicCertInfo;
    _Bool m_bUpdating;
    unsigned int m_uiUpdateCount;
    NSDate *m_tLastUpdate;
}

+ (id)GetPathOfIcon:(unsigned int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *m_tLastUpdate; // @synthesize m_tLastUpdate;
@property(retain, nonatomic) NSMutableDictionary *m_dicCertInfo; // @synthesize m_dicCertInfo;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)UpdateCertInfo:(unsigned int)arg1 Version:(unsigned int)arg2 Time:(unsigned int)arg3 Desc:(id)arg4 Icon:(id)arg5 HDIcon:(id)arg6;
- (void)SaveIcon:(id)arg1 Data:(id)arg2;
- (id)GetCertInfoByKey:(unsigned int)arg1 Update:(_Bool)arg2;
- (unsigned int)GetBitSet:(unsigned int)arg1;
- (id)GetCertIconByKey:(unsigned int)arg1;
- (void)CreateUpdateEvent;
- (unsigned int)GetCertInfoVersion;
- (void)UpdateInfoTime;
- (void)CheckUpdate;
- (void)SaveCertInfo;
- (void)LoadCertInfo;
- (void)dealloc;
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

