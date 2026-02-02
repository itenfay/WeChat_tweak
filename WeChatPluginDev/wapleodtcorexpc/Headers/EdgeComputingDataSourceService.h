//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface EdgeComputingDataSourceService
{
}

- (void)onSendDataReportSDKData:(id)arg1;
- (void)onSendDataReportSDKUBAData:(id)arg1;
- (void)onSendSessionUBAAll:(id)arg1;
- (void)onSendSessionSingleAll:(id)arg1;
- (void)onSendSessionUBA:(id)arg1;
- (void)onSendSessionPageMerge:(id)arg1;
- (void)onSendSessionPageSingle:(id)arg1 withReportID:(unsigned int)arg2;
- (void)onSendSessionMerge:(id)arg1;
- (void)onSendSessionSingle:(id)arg1;
- (void)onSendForeBack:(id)arg1;
- (void)onSendKV:(id)arg1 withReportID:(unsigned int)arg2;
- (void)initAutoTestSwitch;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

