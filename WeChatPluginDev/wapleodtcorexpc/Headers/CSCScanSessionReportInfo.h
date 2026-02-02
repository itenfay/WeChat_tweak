//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface CSCScanSessionReportInfo
{
    long long _enterCombineFlowCount;
    long long _skipFromWorkingCount;
    long long _skipFromStrangyCount;
    long long _ffeHandleCount;
    long long _ffeFailedCount;
    long long _ffeSuccessCount;
    long long _ffeFirstSuccessFrame;
    long long _svrHandleCount;
    long long _svrFailedCount;
    long long _svrSuccessCount;
    long long _svrFirstSuccessFrame;
}

@property(nonatomic) long long svrFirstSuccessFrame; // @synthesize svrFirstSuccessFrame=_svrFirstSuccessFrame;
@property(nonatomic) long long svrSuccessCount; // @synthesize svrSuccessCount=_svrSuccessCount;
@property(nonatomic) long long svrFailedCount; // @synthesize svrFailedCount=_svrFailedCount;
@property(nonatomic) long long svrHandleCount; // @synthesize svrHandleCount=_svrHandleCount;
@property(nonatomic) long long ffeFirstSuccessFrame; // @synthesize ffeFirstSuccessFrame=_ffeFirstSuccessFrame;
@property(nonatomic) long long ffeSuccessCount; // @synthesize ffeSuccessCount=_ffeSuccessCount;
@property(nonatomic) long long ffeFailedCount; // @synthesize ffeFailedCount=_ffeFailedCount;
@property(nonatomic) long long ffeHandleCount; // @synthesize ffeHandleCount=_ffeHandleCount;
@property(nonatomic) long long skipFromStrangyCount; // @synthesize skipFromStrangyCount=_skipFromStrangyCount;
@property(nonatomic) long long skipFromWorkingCount; // @synthesize skipFromWorkingCount=_skipFromWorkingCount;
@property(nonatomic) long long enterCombineFlowCount; // @synthesize enterCombineFlowCount=_enterCombineFlowCount;

@end

