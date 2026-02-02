//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface BrandOverseaPrivacyConfirmHelper
{
}

+ (id)getOverseaPrivacyConfirmLogic;
+ (void)setOverseaPrivacyConfirmLogic:(id)arg1;
+ (void)requestCloseOverseaPrivacyAuthorizationWithCloseBlock:(CDUnknownBlockType)arg1;
+ (void)requestOpenOverseaPrivacyAuthorizationWithOpenBlock:(CDUnknownBlockType)arg1;
+ (_Bool)shouldShowCloseOverseaPrivacyConfirm;
+ (_Bool)isNeedOverseaPrivacyConfirm;

@end

