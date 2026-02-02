//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TPYYClassPropertyInfo : NSObject
{
    struct objc_property *_property;
    NSString *_name;
    unsigned long long _type;
    NSString *_typeEncoding;
    NSString *_ivarName;
    Class _cls;
    NSArray *_protocols;
    SEL _getter;
    SEL _setter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SEL setter; // @synthesize setter=_setter;
@property(readonly, nonatomic) SEL getter; // @synthesize getter=_getter;
@property(readonly, nonatomic) NSArray *protocols; // @synthesize protocols=_protocols;
@property(readonly, nonatomic) Class cls; // @synthesize cls=_cls;
@property(readonly, nonatomic) NSString *ivarName; // @synthesize ivarName=_ivarName;
@property(readonly, nonatomic) NSString *typeEncoding; // @synthesize typeEncoding=_typeEncoding;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) struct objc_property *property; // @synthesize property=_property;
- (id)initWithProperty:(struct objc_property *)arg1;

@end

