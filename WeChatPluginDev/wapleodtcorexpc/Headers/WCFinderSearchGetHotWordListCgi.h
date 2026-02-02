//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFinderSearchGetHotWordListCgi
{
    NSString *_searchRequestId;
    CDUnknownBlockType _successful;
    CDUnknownBlockType _failure;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType successful; // @synthesize successful=_successful;
@property(retain, nonatomic) NSString *searchRequestId; // @synthesize searchRequestId=_searchRequestId;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest:(id)arg1 objHotwordInfoBuffer:(id)arg2;
- (id)initWithHotWordListBuffer:(id)arg1 objHotwordInfoBuffer:(id)arg2 requestId:(id)arg3 successful:(CDUnknownBlockType)arg4 failedBlock:(CDUnknownBlockType)arg5;

@end

