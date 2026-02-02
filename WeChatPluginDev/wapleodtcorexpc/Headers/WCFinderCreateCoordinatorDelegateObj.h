//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderCreateCoordinator;

@interface WCFinderCreateCoordinatorDelegateObj : NSObject
{
    id _delegateHost;
    WCFinderCreateCoordinator *_createCoordinator;
}

+ (id)bindDelegateObjWithHost:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
@property(nonatomic) __weak id delegateHost; // @synthesize delegateHost=_delegateHost;
- (void)finderCreateAccountCancel:(id)arg1;
- (void)finderCreateCoordinatorStartCreateUserComplete;
- (void)unBindSelf;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

