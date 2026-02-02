//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSProxy.h>

@class MMContext, NSLock;

@interface MMContextObject : NSProxy
{
    _Bool m_store;
    MMContext *m_context;
    id m_obj;
    NSLock *m_setLock;
    struct unordered_map<SEL *, NSMethodSignature *, std::hash<SEL *>, std::equal_to<SEL *>, std::allocator<std::pair<SEL *const, NSMethodSignature *>>> m_hookSet;
}

+ (id)contextObjectWithContext:(id)arg1 obj:(id)arg2 store:(_Bool)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)strongContextObjectIfExist;
- (id)strongContextObjectWithContext:(id)arg1;
- (id)strongContextObject;
- (id)weakContextObjectIfExist;
- (id)weakContextObjectWithContext:(id)arg1;
- (id)weakContextObject;
- (id)debugDescription;
- (id)description;
- (_Bool)isProxy;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (Class)class;
- (Class)superclass;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)returnNil;
- (void)dealloc;
- (id)initWithContext:(id)arg1 obj:(id)arg2 store:(_Bool)arg3;

@end

