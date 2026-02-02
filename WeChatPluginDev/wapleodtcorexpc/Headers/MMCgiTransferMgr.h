//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSMutableArray, NSString;

@interface MMCgiTransferMgr
{
    unsigned int _tokenExpiredtime;
    NSString *_h5AuthToken;
    NSString *_pubKeyToken;
    NSMutableArray *_waitingAuthQueue;
    NSDictionary *_cgiRouteMap;
}

+ (_Bool)isCgiInfoInWhiteList:(id)arg1;
+ (_Bool)isCgiInfoValid:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *cgiRouteMap; // @synthesize cgiRouteMap=_cgiRouteMap;
@property(nonatomic) unsigned int tokenExpiredtime; // @synthesize tokenExpiredtime=_tokenExpiredtime;
@property(retain, nonatomic) NSMutableArray *waitingAuthQueue; // @synthesize waitingAuthQueue=_waitingAuthQueue;
@property(retain, nonatomic) NSString *pubKeyToken; // @synthesize pubKeyToken=_pubKeyToken;
@property(retain, nonatomic) NSString *h5AuthToken; // @synthesize h5AuthToken=_h5AuthToken;
- (void)handleErrorWithResp:(int)arg1 param:(id)arg2 resp:(id)arg3;
- (void)handleTransferResp:(id)arg1;
- (void)handleH5AuthResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)sendH5AuthReq:(id)arg1;
- (void)doCgiTransferReqWithParams:(id)arg1;
- (void)sendReqWithParams:(id)arg1;
- (void)startLiteAppWebTransferReq:(id)arg1;
- (void)startLiteAppExtTransferReq:(id)arg1;
- (void)startAppBrandWebTransferReq:(id)arg1;
- (void)startAppBrandExtTransferReq:(id)arg1;
- (void)startWebTransferReq:(id)arg1;
- (void)startExtTransferReq:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)updateCgiInfoArr:(id)arg1;
- (id)generateCGIWrapWithReqParam:(id)arg1;
- (unsigned int)cgiIdFromParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

