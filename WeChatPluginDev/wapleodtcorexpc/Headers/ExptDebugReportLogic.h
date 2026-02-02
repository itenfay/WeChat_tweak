//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface ExptDebugReportLogic
{
}

- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)sendToSvr:(id)arg1 byKey:(unsigned int)arg2 scene:(unsigned int)arg3 type:(unsigned int)arg4;
- (void)sendSvrPushXML:(id)arg1 usrName:(id)arg2 withType:(id)arg3;
- (void)sendSession:(id)arg1;
- (void)sendPageDisappear:(id)arg1;
- (void)sendPageAppear:(id)arg1;
- (void)sendKV:(unsigned int)arg1 value:(id)arg2;
- (void)stopMonitorKV:(id)arg1;
- (void)sendStartMonitorKV:(id)arg1;
- (void)dealloc;

@end

