//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData;

@interface WCFinderFetchSelfCGI
{
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
    NSData *_syncBuffer;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *syncBuffer; // @synthesize syncBuffer=_syncBuffer;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithSyncBuffer:(id)arg1 successful:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

@end

