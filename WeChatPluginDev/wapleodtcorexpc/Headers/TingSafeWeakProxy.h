//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSProxy.h>

@interface TingSafeWeakProxy : NSProxy
{
    id _object;
    id _innerWeakContextObject;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id innerWeakContextObject; // @synthesize innerWeakContextObject=_innerWeakContextObject;
@property(nonatomic) __weak id object; // @synthesize object=_object;
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
- (id)returnNil;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)obj;
- (_Bool)isValidStatus;
- (id)initWithObject:(id)arg1;

@end

