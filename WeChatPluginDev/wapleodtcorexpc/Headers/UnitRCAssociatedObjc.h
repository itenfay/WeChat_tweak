//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface UnitRCAssociatedObjc : NSObject
{
    struct recursive_mutex _mutex;
    shared_ptr_ec19df4a _strongCpp;
    weak_ptr_cef3ecd1 _weakCpp;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (weak_ptr_cef3ecd1)weakCpp;
- (shared_ptr_ec19df4a)strongCpp;
- (void)setWeakCpp:(const void *)arg1;
- (void)setStrongCpp:(const void *)arg1;
- (id)initWithWeakCpp:(const void *)arg1;
- (id)initWithStrongCpp:(const void *)arg1;

@end

