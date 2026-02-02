//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <StoreKit/SKStoreProductViewController.h>

@interface SKStoreProductViewController (SwizzleForCrashFix)
+ (void)initialize;
- (void)mmAppWillTerminate;
- (void)mmSceneDisconnected:(id)arg1;
@end

