//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, SKStoreProductViewController, UIViewController, WCSKAdNetworkItem;

@interface MMProductController : NSObject
{
    NSString *_productId;
    WCSKAdNetworkItem *_skAdItem;
    NSString *_callbackUrl;
    UIViewController *_pushViewController;
    SKStoreProductViewController *_productViewController;
}

+ (void)dismissProductController;
+ (id)sharedControllerWithProductId:(id)arg1 skAdItem:(id)arg2 callbackUrl:(id)arg3;
+ (id)sharedControllerWithProductId:(id)arg1 callbackUrl:(id)arg2;
+ (_Bool)isAvailable;
- (void).cxx_destruct;
@property(retain, nonatomic) SKStoreProductViewController *productViewController; // @synthesize productViewController=_productViewController;
@property(retain, nonatomic) UIViewController *pushViewController; // @synthesize pushViewController=_pushViewController;
@property(copy, nonatomic) NSString *callbackUrl; // @synthesize callbackUrl=_callbackUrl;
@property(copy, nonatomic) WCSKAdNetworkItem *skAdItem; // @synthesize skAdItem=_skAdItem;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)openProductViewController;
- (void)showInViewController:(id)arg1;
- (id)initWithProductId:(id)arg1 skAdItem:(id)arg2 callbackUrl:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

