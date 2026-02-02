//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class SpeedTestReportReq;

@interface WCSpeedTestReportCgi
{
    SpeedTestReportReq *speedTestReportRequest;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SpeedTestReportReq *speedTestReportRequest; // @synthesize speedTestReportRequest;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)startRequest:(id)arg1 connectionTime:(unsigned int)arg2 connectionRetCode:(unsigned int)arg3 tranTime:(unsigned int)arg4 transRetCode:(unsigned int)arg5 clinetIp:(id)arg6 clientPort:(unsigned int)arg7 serverIp:(id)arg8 serverPort:(unsigned int)arg9 localStack:(unsigned int)arg10;
- (id)init;

@end

