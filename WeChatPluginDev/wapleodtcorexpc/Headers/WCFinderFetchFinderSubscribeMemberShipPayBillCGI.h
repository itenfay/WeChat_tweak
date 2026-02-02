//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WCFinderFetchFinderSubscribeMemberShipPayBillCGI
{
    NSString *_finderUsername;
    unsigned long long _monthCount;
    unsigned long long _subscriptionType;
    NSData *_subscriptionExtInfo;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    unsigned long long _entranceSource;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long entranceSource; // @synthesize entranceSource=_entranceSource;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(retain, nonatomic) NSData *subscriptionExtInfo; // @synthesize subscriptionExtInfo=_subscriptionExtInfo;
@property(nonatomic) unsigned long long subscriptionType; // @synthesize subscriptionType=_subscriptionType;
@property(nonatomic) unsigned long long monthCount; // @synthesize monthCount=_monthCount;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderUsername:(id)arg1 monthCount:(unsigned long long)arg2 subscriptionType:(unsigned long long)arg3 subscriptionExtInfo:(id)arg4 entranceSource:(unsigned long long)arg5 successful:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;

@end

