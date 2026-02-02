//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderFetchFinderMemberStatusCGI
{
    _Bool _needSubscriptionType;
    NSString *_finderUsername;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool needSubscriptionType; // @synthesize needSubscriptionType=_needSubscriptionType;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderUsername:(id)arg1 needSubscriptionType:(_Bool)arg2 successful:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;

@end

