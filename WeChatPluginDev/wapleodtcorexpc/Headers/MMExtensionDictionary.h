//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMExtensionDictionary : NSObject
{
    struct os_unfair_lock_s m_lock;
    void *m_dict;
    void *m_observerToKeys;
    _Bool m_needCleanUp;
    _Bool m_needDeepClean;
}

- (id)existExtensionObject;
- (void)cleanUp;
- (void)testNeedsCleanUp;
- (void *)getKeyExtensionList:(unsigned long long)arg1;
- (_Bool)unregisterAllKeyExtension:(id)arg1;
- (_Bool)unregisterExtension:(id)arg1 forKey:(unsigned long long)arg2;
- (_Bool)registerExtension:(id)arg1 forKey:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithKeyExtension:(_Bool)arg1;

@end

