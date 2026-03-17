//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCPayOverseaMainWalletIdKeyReport : NSObject
{
}

+ (void)reportClickSwitchWallet;
+ (void)reportClickActionSheetItemWithOutUrl;
+ (void)reportClickActionSheetItem;
+ (void)reportClickOperation;
+ (void)reportClickGrayItemWithOutUrl;
+ (void)reportClickGrayItem;
+ (void)reportClickPayFunctionItemWithOutUrl;
+ (void)reportClickPayFunctionItem;
+ (void)reportIBGGetWalletReturnError;
+ (void)reportIBGGetWalletReturnOK;
+ (void)reportPayFunctionListReturnError;
+ (void)reportPayFunctionListReturnOK;
+ (void)reportEnterOverseaMainWallet;

@end

