//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WCFinderGetFoldListCGI
{
    NSString *_targetUsername;
    NSString *_tid;
    NSString *_nonceid;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    NSData *_lastBuff;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(copy, nonatomic) NSString *nonceid; // @synthesize nonceid=_nonceid;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(copy, nonatomic) NSString *targetUsername; // @synthesize targetUsername=_targetUsername;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithLastBuff:(id)arg1 friendUsername:(id)arg2 objectID:(id)arg3 nonceID:(id)arg4 successful:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;

@end

