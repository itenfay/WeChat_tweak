//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMGCRootsTracingGraphConfiguration, NSArray, NSString;

@interface MMGCRootsTracingGraphElement : NSObject
{
    _Bool _isAppSymbol;
    NSArray *_namePath;
    id _object;
    MMGCRootsTracingGraphConfiguration *_configuration;
    NSString *_lastClassName;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isAppSymbol; // @synthesize isAppSymbol=_isAppSymbol;
@property(retain, nonatomic) NSString *lastClassName; // @synthesize lastClassName=_lastClassName;
@property(readonly, nonatomic) MMGCRootsTracingGraphConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id object; // @synthesize object=_object;
@property(readonly, copy, nonatomic) NSArray *namePath; // @synthesize namePath=_namePath;
- (Class)objectClass;
- (id)classNameOrNull;
- (unsigned long long)objectAddress;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)allRetainedObjects;
- (id)initWithObject:(id)arg1 configuration:(id)arg2 namePath:(id)arg3;
- (id)initWithObject:(id)arg1 configuration:(id)arg2;
- (id)initWithObject:(id)arg1;

@end

