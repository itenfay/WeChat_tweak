//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, TPYYClassInfo;

@interface _TPYYModelMeta : NSObject
{
    TPYYClassInfo *_classInfo;
    NSDictionary *_mapper;
    NSArray *_allPropertyMetas;
    NSArray *_keyPathPropertyMetas;
    NSArray *_multiKeysPropertyMetas;
    unsigned long long _keyMappedCount;
    unsigned long long _nsType;
    _Bool _hasCustomWillTransformFromDictionary;
    _Bool _hasCustomTransformFromDictionary;
    _Bool _hasCustomTransformToDictionary;
    _Bool _hasCustomClassFromDictionary;
}

+ (id)metaWithClass:(Class)arg1;
- (void).cxx_destruct;
- (id)initWithClass:(Class)arg1;

@end

