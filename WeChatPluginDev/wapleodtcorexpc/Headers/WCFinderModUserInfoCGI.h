//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderModUserInfoParams;

@interface WCFinderModUserInfoCGI
{
    NSString *_username;
    WCFinderModUserInfoParams *_params;
    CDUnknownBlockType _successfulBlock;
    CDUnknownBlockType _failureBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successfulBlock; // @synthesize successfulBlock=_successfulBlock;
@property(retain, nonatomic) WCFinderModUserInfoParams *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithUsername:(id)arg1 params:(id)arg2 successful:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;

@end

