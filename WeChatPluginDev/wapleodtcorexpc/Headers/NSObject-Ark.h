//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface NSObject (Ark)
+ (const char *)getTypeNameWithPBFieldInfo:(CDStruct_c15bdbc8)arg1;
+ (void)addProperyWithPBFieldInfo:(CDStruct_c15bdbc8)arg1;
+ (const char *)getMemoryAttributeWithType:(unsigned long long)arg1;
+ (void)addBasicWithTypeName:(const char *)arg1 propertyName:(const char *)arg2;
+ (void)addClassWithTypeClass:(Class)arg1 memoryType:(unsigned long long)arg2 propertyName:(const char *)arg3;
+ (void)addClassWithTypeClassName:(const char *)arg1 memoryType:(unsigned long long)arg2 propertyName:(const char *)arg3;
@end

