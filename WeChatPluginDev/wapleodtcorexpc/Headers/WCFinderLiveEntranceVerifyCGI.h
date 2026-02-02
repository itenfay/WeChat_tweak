//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCFinderLiveEntranceVerifyCGI
{
    CDUnknownBlockType _completionBlock;
    long long _status;
}

- (void).cxx_destruct;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)initWithNewEntranceStatus:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

