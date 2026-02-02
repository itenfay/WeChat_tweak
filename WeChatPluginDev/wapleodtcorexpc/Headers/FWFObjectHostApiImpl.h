//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FWFInstanceManager;

@interface FWFObjectHostApiImpl : NSObject
{
    FWFInstanceManager *_instanceManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FWFInstanceManager *instanceManager; // @synthesize instanceManager=_instanceManager;
- (void)disposeObjectWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)removeObserverForObjectWithIdentifier:(id)arg1 observerIdentifier:(id)arg2 keyPath:(id)arg3 error:(id *)arg4;
- (void)addObserverForObjectWithIdentifier:(id)arg1 observerIdentifier:(id)arg2 keyPath:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)objectForIdentifier:(id)arg1;
- (id)initWithInstanceManager:(id)arg1;

@end

