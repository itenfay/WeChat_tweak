//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class TranslateLinkParameter;

@interface TranslateLinkCgiHandler
{
    TranslateLinkParameter *_parameter;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _asyncCompletion;
    TranslateLinkCgiHandler *_selfRetain;
}

+ (id)getCachedResultWithParam:(id)arg1;
+ (void)cacheResult:(id)arg1 withParam:(id)arg2;
+ (id)genCacheKeyWithParam:(id)arg1;
+ (void)removeCachedResultWithParam:(id)arg1;
+ (void)reportRequestTranslateLinkAsync:(_Bool)arg1;
+ (void)requestWithParamter:(id)arg1 completion:(CDUnknownBlockType)arg2 asyncCompletion:(CDUnknownBlockType)arg3;
+ (void)requestWithParamter:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) TranslateLinkCgiHandler *selfRetain; // @synthesize selfRetain=_selfRetain;
@property(copy, nonatomic) CDUnknownBlockType asyncCompletion; // @synthesize asyncCompletion=_asyncCompletion;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) TranslateLinkParameter *parameter; // @synthesize parameter=_parameter;
- (void)reportReceiveResponse:(id)arg1 resp:(id)arg2;
- (void)reportSendRequest:(id)arg1;
- (void)reportTranslateLinkSuccWithResult:(id)arg1;
- (void)reportTranslateLinkFailWithResult:(id)arg1;
- (void)onTranslateLinkResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)sendRequest;
- (void)callbackCompleteSuccessWithResult:(id)arg1;
- (void)callbackCompleteFail:(id)arg1 error:(id)arg2;
- (void)asyncReleaseSelf;
- (void)dealloc;
- (id)initWithParameter:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

