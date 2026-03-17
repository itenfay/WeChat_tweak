//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QBJceObject : NSObject
{
}

+ (id)jceType;
+ (id)fromData:(id)arg1;
+ (id)object;
+ (id)jcePropertiesWithEncodedTypes;
+ (id)qb_objectWithAttributeData:(id)arg1;
+ (id)qb_objectWithName:(id)arg1 andType:(id)arg2 inAttributes:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)__unpack:(id)arg1;
- (void)__pack:(id)arg1;
- (id)jceType;
- (id)toData;
- (id)fromData:(id)arg1;
- (void)qb_setInAttributes:(id)arg1 withName:(id)arg2 andType:(id)arg3;

@end

