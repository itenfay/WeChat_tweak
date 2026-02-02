//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NewLifePostParameter, UIViewController;

@interface NewLifePostRouter : NSObject
{
    NewLifePostParameter *_parameter;
    NSString *_finderUsername;
    UIViewController *_fromViewContrller;
    NewLifePostRouter *_router;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NewLifePostRouter *router; // @synthesize router=_router;
@property(retain, nonatomic) UIViewController *fromViewContrller; // @synthesize fromViewContrller=_fromViewContrller;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) NewLifePostParameter *parameter; // @synthesize parameter=_parameter;
- (void)onCancelSelectAssets:(id)arg1;
- (void)onFinishSelectAssets:(id)arg1 assets:(id)arg2;
- (id)draftKvName;
- (id)draft;
- (_Bool)routeFromViewController:(id)arg1;
- (id)initWithFinderUsername:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

