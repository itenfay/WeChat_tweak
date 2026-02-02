//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFinderGetCurLocationCGI
{
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _failedBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;

@end

