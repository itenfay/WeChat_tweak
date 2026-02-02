//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFinderADReportCGI
{
    unsigned long long _actionType;
}

@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithTid:(id)arg1 scene:(unsigned long long)arg2 actionType:(unsigned long long)arg3 reportData:(id)arg4 adInfo:(id)arg5;

@end

