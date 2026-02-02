//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_queue;

@interface FWFInstanceManager : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSMapTable *_identifiersToInstances;
    NSMapTable *_instancesToIdentifiers;
}

- (void).cxx_destruct;
@property(retain) NSMapTable *instancesToIdentifiers; // @synthesize instancesToIdentifiers=_instancesToIdentifiers;
@property(retain) NSMapTable *identifiersToInstances; // @synthesize identifiersToInstances=_identifiersToInstances;
@property(retain) NSObject<OS_dispatch_queue> *lockQueue; // @synthesize lockQueue=_lockQueue;
- (long long)identifierForInstance:(id)arg1;
- (id)instanceForIdentifier:(long long)arg1;
- (long long)removeInstance:(id)arg1;
- (id)removeInstanceWithIdentifier:(long long)arg1;
- (void)addInstance:(id)arg1 withIdentifier:(long long)arg2;
- (id)init;

@end

