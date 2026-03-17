//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface NSObject (ObjcRuntime)
- (void)removeAssociatedObjects;
- (void)detachObjectForKey:(id)arg1;
- (id)getAttachedWeakObjectForKey:(id)arg1;
- (void)attachWeakObject:(id)arg1 forKey:(id)arg2;
- (id)getAttachedCopyObjectForKey:(id)arg1;
- (void)attachCopyObject:(id)arg1 forKey:(id)arg2;
- (id)getAttachedObjectForKey:(id)arg1;
- (void)attachObject:(id)arg1 forKey:(id)arg2;
- (const void *)computeKeyFromString:(id)arg1;
@end

