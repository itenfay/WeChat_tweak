//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_os_log;

@interface WALaunchTimeAxisMgr
{
    _Bool _allowKV;
    NSObject<OS_os_log> *_osLog;
    unsigned long long _signpostId;
    NSObject<OS_os_log> *_osLogGlobal;
    unsigned long long _signpostIdGlobal;
    NSObject<OS_os_log> *_osLogWebView;
    unsigned long long _signpostIdWebView;
    NSObject<OS_os_log> *_osLogService;
    unsigned long long _signpostIdService;
    NSObject<OS_os_log> *_osLogNative;
    unsigned long long _signpostIdNative;
    NSMutableDictionary *_instanceId2Nodes;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool allowKV; // @synthesize allowKV=_allowKV;
@property(retain, nonatomic) NSMutableDictionary *instanceId2Nodes; // @synthesize instanceId2Nodes=_instanceId2Nodes;
@property(nonatomic) unsigned long long signpostIdNative; // @synthesize signpostIdNative=_signpostIdNative;
@property(retain, nonatomic) NSObject<OS_os_log> *osLogNative; // @synthesize osLogNative=_osLogNative;
@property(nonatomic) unsigned long long signpostIdService; // @synthesize signpostIdService=_signpostIdService;
@property(retain, nonatomic) NSObject<OS_os_log> *osLogService; // @synthesize osLogService=_osLogService;
@property(nonatomic) unsigned long long signpostIdWebView; // @synthesize signpostIdWebView=_signpostIdWebView;
@property(retain, nonatomic) NSObject<OS_os_log> *osLogWebView; // @synthesize osLogWebView=_osLogWebView;
@property(nonatomic) unsigned long long signpostIdGlobal; // @synthesize signpostIdGlobal=_signpostIdGlobal;
@property(retain, nonatomic) NSObject<OS_os_log> *osLogGlobal; // @synthesize osLogGlobal=_osLogGlobal;
@property(nonatomic) unsigned long long signpostId; // @synthesize signpostId=_signpostId;
@property(retain, nonatomic) NSObject<OS_os_log> *osLog; // @synthesize osLog=_osLog;
- (void)markLaunchTimeAxisEventWithAppid:(id)arg1 parent:(id)arg2 children:(id)arg3 inCategory:(unsigned long long)arg4 eventType:(unsigned long long)arg5 option:(unsigned int)arg6 timeStamp:(unsigned long long)arg7;
- (void)markLaunchTimeAxisEvent:(id)arg1;
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

