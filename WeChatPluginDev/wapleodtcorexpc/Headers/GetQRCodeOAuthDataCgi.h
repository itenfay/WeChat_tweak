//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class OpenSDKOAuthRequest;

@interface GetQRCodeOAuthDataCgi
{
    _Bool _hasHandleEcdhRollback;
    OpenSDKOAuthRequest *_authReq;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) OpenSDKOAuthRequest *authReq; // @synthesize authReq=_authReq;
@property(nonatomic) _Bool hasHandleEcdhRollback; // @synthesize hasHandleEcdhRollback=_hasHandleEcdhRollback;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)startWithCompletion:(CDUnknownBlockType)arg1;
- (void)createRequest;
- (id)initWithAuthReq:(id)arg1;

@end
