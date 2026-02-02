//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCPayRealnameRouteCgi
{
    int _fromScene;
    int _payScene;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _failureBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) int payScene; // @synthesize payScene=_payScene;
@property(nonatomic) int fromScene; // @synthesize fromScene=_fromScene;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startWithCompletion:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)init;

@end

