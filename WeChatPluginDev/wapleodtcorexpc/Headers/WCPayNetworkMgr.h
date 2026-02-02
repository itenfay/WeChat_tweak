//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString;

@interface WCPayNetworkMgr
{
    NSMutableDictionary *_startedTimeDic;
    NSMutableDictionary *_callbacks;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *callbacks; // @synthesize callbacks=_callbacks;
- (void)debugPrintRequestWithCGIWrap:(id)arg1;
- (void)debugPrintResponseWithCGIWrap:(id)arg1;
- (void)cleanForKey:(id)arg1;
- (void)handleErrorAndClean:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleCommonErrorAndCleanForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned int)sendRequestWithTimeout:(id)arg1 cgi:(unsigned int)arg2 timeout:(double)arg3 routeInfo:(unsigned char)arg4 completion:(CDUnknownBlockType)arg5;
- (unsigned int)sendRequest:(id)arg1 cgi:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (unsigned int)getIAPOrderDetailWithOrderID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned int)commonQueryCmdIDWithTimeout:(unsigned int)arg1 bizParams:(id)arg2 wxParams:(id)arg3 timeout:(double)arg4 routeInfo:(unsigned char)arg5 completion:(CDUnknownBlockType)arg6;
- (unsigned int)commonQueryCmdID:(unsigned int)arg1 bizParams:(id)arg2 wxParams:(id)arg3 routeInfo:(unsigned char)arg4 completion:(CDUnknownBlockType)arg5;
- (unsigned int)commonQueryCmdID:(unsigned int)arg1 bizParams:(id)arg2 wxParams:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

