//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderPremovieAdReportCGI
{
    NSString *_reportData;
    NSString *_reportBypData;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) NSString *reportBypData; // @synthesize reportBypData=_reportBypData;
@property(copy, nonatomic) NSString *reportData; // @synthesize reportData=_reportData;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (_Bool)needADDeviceInfo;
- (void)createRequest;
- (id)initWithTid:(id)arg1 scene:(int)arg2 ReportData:(id)arg3 reportBypData:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;

@end

