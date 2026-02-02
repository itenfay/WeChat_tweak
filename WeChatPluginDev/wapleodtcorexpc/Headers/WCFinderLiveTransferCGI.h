//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WXPBGeneratedMessage;

@interface WCFinderLiveTransferCGI
{
    WXPBGeneratedMessage *_requestObject;
    WXPBGeneratedMessage *_responseObject;
    Class _responseObjectClass;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(nonatomic) Class responseObjectClass; // @synthesize responseObjectClass=_responseObjectClass;
@property(retain, nonatomic) WXPBGeneratedMessage *responseObject; // @synthesize responseObject=_responseObject;
@property(retain, nonatomic) WXPBGeneratedMessage *requestObject; // @synthesize requestObject=_requestObject;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (id)createTransferRequest;
- (id)initWithLiveTaskId:(id)arg1 cgiNumber:(unsigned int)arg2 requestObject:(id)arg3 responseObjectClass:(Class)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;

@end

