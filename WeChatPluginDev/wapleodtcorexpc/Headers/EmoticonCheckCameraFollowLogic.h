//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, StoreEmotionExchangeEmotionPackCgi;

@interface EmoticonCheckCameraFollowLogic : NSObject
{
    NSString *_loadingText;
    CDUnknownBlockType _getVcBlock;
    CDUnknownBlockType _finishBlock;
    StoreEmotionExchangeEmotionPackCgi *_exchangePackCgi;
    NSString *_productId;
    NSString *_emoticonMd5;
}

+ (_Bool)shouldCheck:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *emoticonMd5; // @synthesize emoticonMd5=_emoticonMd5;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) StoreEmotionExchangeEmotionPackCgi *exchangePackCgi; // @synthesize exchangePackCgi=_exchangePackCgi;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(copy, nonatomic) CDUnknownBlockType getVcBlock; // @synthesize getVcBlock=_getVcBlock;
@property(retain, nonatomic) NSString *loadingText; // @synthesize loadingText=_loadingText;
- (void)onExchangeEmotionPackCgiFailedWithPid:(id)arg1 AndRet:(int)arg2 ErroMsg:(id)arg3;
- (void)onExchangeEmotionPackCgiFailedForNoResponseWithPid:(id)arg1;
- (void)onExchangeEmotionPackCgiOkWithPid:(id)arg1 DownloadInfo:(id)arg2;
- (void)showComfirmTipsWithWording:(id)arg1;
- (void)startCheck:(id)arg1 emoticonMd5:(id)arg2 getVcBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

