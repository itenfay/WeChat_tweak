//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, SendPatWrap;

@interface SendPatCgi
{
    SendPatWrap *_sendPatWrap;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) SendPatWrap *sendPatWrap; // @synthesize sendPatWrap=_sendPatWrap;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (_Bool)isRetrievePatSuffix;
@property(readonly, nonatomic) NSString *chatUserName;
@property(readonly, nonatomic) NSString *pattedUserName;
@property(readonly, nonatomic) NSString *fromUserName;
- (void)retrievePatSuffixWithSuccessBlock:(CDUnknownBlockType)arg1;
- (void)sendPatWithSuccessBlock:(CDUnknownBlockType)arg1 andFailureBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

