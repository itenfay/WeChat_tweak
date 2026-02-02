//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WCFinderGetFansListCGI
{
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    unsigned long long _lastFansMaxId;
    NSData *_lastBuf;
    NSString *_finderUsername;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) NSData *lastBuf; // @synthesize lastBuf=_lastBuf;
@property(nonatomic) unsigned long long lastFansMaxId; // @synthesize lastFansMaxId=_lastFansMaxId;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLastFansMaxId:(unsigned long long)arg1 lastBuf:(id)arg2 finderUsername:(id)arg3 successful:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;

@end

