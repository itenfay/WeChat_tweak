//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class JSEvent, NSString;

@interface WebviewJSEventHandler_getBrandIAPPayRequest
{
    JSEvent *jsEvent;
    NSString *productExtInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *productExtInfo; // @synthesize productExtInfo;
@property(retain, nonatomic) JSEvent *jsEvent; // @synthesize jsEvent;
- (void)OnBrandIAPGetResult:(id)arg1 Error:(int)arg2;
- (void)OnBrandIAPPayFailForProduct:(id)arg1;
- (void)OnBrandIAPPayCancelForProduct:(id)arg1;
- (void)OnBrandIAPPaySuccessForProduct:(id)arg1;
- (void)OnBrandIAPPayRequestForProduct:(id)arg1;
- (void)OnBrandIAPPrepay:(id)arg1 FailedWithError:(int)arg2;
- (void)OnBrandIAPPrepay:(id)arg1 GetProductID:(id)arg2 ExtInfo:(id)arg3;
- (void)stopLoading:(_Bool)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

@end

