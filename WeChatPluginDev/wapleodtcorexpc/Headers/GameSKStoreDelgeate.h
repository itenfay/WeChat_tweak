//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, SKStoreProductViewController, UIViewController;

@interface GameSKStoreDelgeate : NSObject
{
    _Bool _storePageShow;
    _Bool _popWhenDismiss;
    CDUnknownBlockType _onCloseBlock;
    SKStoreProductViewController *_storeVc;
    UIViewController *_hostVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *hostVC; // @synthesize hostVC=_hostVC;
@property(nonatomic) _Bool popWhenDismiss; // @synthesize popWhenDismiss=_popWhenDismiss;
@property(nonatomic) __weak SKStoreProductViewController *storeVc; // @synthesize storeVc=_storeVc;
@property(copy, nonatomic) CDUnknownBlockType onCloseBlock; // @synthesize onCloseBlock=_onCloseBlock;
@property(nonatomic) _Bool storePageShow; // @synthesize storePageShow=_storePageShow;
- (void)onClose;
- (void)popTopViewController;
- (void)dismissCurrentStorePage;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)dealloc;
- (id)initWithOnCloseBlock:(CDUnknownBlockType)arg1 storeVc:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

