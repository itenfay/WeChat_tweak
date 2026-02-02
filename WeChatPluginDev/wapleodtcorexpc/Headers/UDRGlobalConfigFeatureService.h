//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface UDRGlobalConfigFeatureService
{
    NSMutableDictionary *_allProjectClass;
    NSMutableDictionary *_allClassName;
    NSMutableDictionary *_universalReportMap;
    NSMutableDictionary *_universalCleanMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *universalCleanMap; // @synthesize universalCleanMap=_universalCleanMap;
@property(retain, nonatomic) NSMutableDictionary *universalReportMap; // @synthesize universalReportMap=_universalReportMap;
@property(retain, nonatomic) NSMutableDictionary *allClassName; // @synthesize allClassName=_allClassName;
@property(retain, nonatomic) NSMutableDictionary *allProjectClass; // @synthesize allProjectClass=_allProjectClass;
- (void)buildUdrSubBizConfig:(Class)arg1;
- (void)buildAllBiz;
- (int)getCleanInterval:(id)arg1 name:(id)arg2;
- (float)getReportSample:(id)arg1 name:(id)arg2;
- (id)getUDRProjectClass:(id)arg1;
- (id)getAllUDRProjectClassMap;
- (id)getMMKV:(id)arg1;
- (void)registerProjectId:(id)arg1 className:(id)arg2;
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

