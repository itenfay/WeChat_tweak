//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface JSONModelClassProperty : NSObject
{
    _Bool _isIndex;
    _Bool _isOptional;
    _Bool _isStandardJSONType;
    _Bool _isMutable;
    NSString *_name;
    Class _type;
    NSString *_structName;
    NSString *_protocol;
    SEL _customGetter;
    NSMutableDictionary *_customSetters;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *customSetters; // @synthesize customSetters=_customSetters;
@property(nonatomic) SEL customGetter; // @synthesize customGetter=_customGetter;
@property(nonatomic) _Bool isMutable; // @synthesize isMutable=_isMutable;
@property(nonatomic) _Bool isStandardJSONType; // @synthesize isStandardJSONType=_isStandardJSONType;
@property(nonatomic) _Bool isOptional; // @synthesize isOptional=_isOptional;
@property(copy, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) NSString *structName; // @synthesize structName=_structName;
@property(nonatomic) Class type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool isIndex; // @synthesize isIndex=_isIndex;
- (id)description;

@end

