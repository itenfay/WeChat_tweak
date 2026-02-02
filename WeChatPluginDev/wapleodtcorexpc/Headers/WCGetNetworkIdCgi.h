//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetNetworkInfoReq, NSString;

@interface WCGetNetworkIdCgi
{
    GetNetworkInfoReq *getNetworkInfoReq;
    NSString *_localNetId;
    NSString *_localCtx;
    NSString *_localClientIp;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *localClientIp; // @synthesize localClientIp=_localClientIp;
@property(copy, nonatomic) NSString *localCtx; // @synthesize localCtx=_localCtx;
@property(copy, nonatomic) NSString *localNetId; // @synthesize localNetId=_localNetId;
@property(retain, nonatomic) GetNetworkInfoReq *getNetworkInfoReq; // @synthesize getNetworkInfoReq;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (_Bool)isRequesting;
- (void)getLocalNetworkId;
- (void)startRequest;
- (id)init;

@end

