//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFinderLiveActivityInitTorchCgi
{
    unsigned long long _torchSource;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) unsigned long long torchSource; // @synthesize torchSource=_torchSource;
- (void)finderLiveActivityCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetFinderLiveActivityCgiResponse:(id)arg1;
- (id)responseFromBuffer:(id)arg1;
- (void)createRequest;
- (id)initWithLiveTaskId:(id)arg1 torchSource:(unsigned long long)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;

@end

