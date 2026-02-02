//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FWFInstanceManager;

@interface FWFNavigationDelegateHostApiImpl : NSObject
{
    FWFInstanceManager *_instanceManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FWFInstanceManager *instanceManager; // @synthesize instanceManager=_instanceManager;
- (void)setDidFinishNavigationForDelegateWithIdentifier:(id)arg1 functionIdentifier:(id)arg2 error:(id *)arg3;
- (void)createWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)navigationDelegateForIdentifier:(id)arg1;
- (id)initWithInstanceManager:(id)arg1;

@end

