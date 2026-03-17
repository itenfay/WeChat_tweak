//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandIAPPrepayRequestStruct, NSDictionary, NSString, SKProduct, iAPTransation;

@protocol IBrandIAPMgrExt

@optional
- (void)OnBrandIAPGetResult:(NSDictionary *)arg1 Error:(int)arg2;
- (void)OnBrandIAPPayFailForProduct:(NSString *)arg1;
- (void)OnBrandIAPPayCancelForProduct:(NSString *)arg1;
- (void)OnBrandIAPPaySuccessForProduct:(iAPTransation *)arg1;
- (void)OnBrandIAPPayRequestForProduct:(SKProduct *)arg1;
- (void)OnBrandIAPPrepay:(BrandIAPPrepayRequestStruct *)arg1 FailedWithError:(int)arg2;
- (void)OnBrandIAPPrepay:(BrandIAPPrepayRequestStruct *)arg1 GetProductID:(NSString *)arg2 ExtInfo:(NSString *)arg3;
@end

