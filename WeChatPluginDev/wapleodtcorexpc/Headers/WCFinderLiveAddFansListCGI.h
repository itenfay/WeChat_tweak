//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderLiveAddFansListCGI
{
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    unsigned long long _liveID;
    NSString *_finderUsername;
    unsigned long long _maxFansId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long maxFansId; // @synthesize maxFansId=_maxFansId;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) unsigned long long liveID; // @synthesize liveID=_liveID;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLiveID:(unsigned long long)arg1 maxFansId:(unsigned long long)arg2 finderUsername:(id)arg3 successful:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;

@end

