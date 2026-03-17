//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface PayMenuRedDotHelper : NSObject
{
}

+ (void)clearRedDotAtMe;
+ (void)clearRedDotAtWalletWithReport:(_Bool)arg1;
+ (void)clearRedDotAtWallet;
+ (void)clearRedDotAtPayWallet;
+ (id)wordingAtWallet;
+ (_Bool)showRedDotAtMe;
+ (_Bool)showRedDotAtPay;
+ (_Bool)showRedDotAtPayWallet;
+ (void)clearPayMenuRedDotForName:(id)arg1;
+ (id)wordingAtName:(id)arg1;
+ (_Bool)showRedDotAtName:(id)arg1;
+ (id)getRedDotItemWithRedDotId:(id)arg1;
+ (id)getNewRedDotInfo;
+ (void)updateInfo:(id)arg1 withItem:(id)arg2;
+ (void)handleMsg:(id)arg1;

@end

