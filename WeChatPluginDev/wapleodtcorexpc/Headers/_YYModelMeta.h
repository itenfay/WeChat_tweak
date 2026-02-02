//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, YYClassInfo, _YYModelPropertyMapperNode;

@interface _YYModelMeta : NSObject
{
    YYClassInfo *_classInfo;
    NSDictionary *_mapper;
    NSArray *_allPropertyMetas;
    _YYModelPropertyMapperNode *_mapperNode;
    NSArray *_keyPathPropertyMetas;
    NSArray *_multiKeysPropertyMetas;
    unsigned long long _keyMappedCount;
    unsigned long long _nsType;
    _Bool _hasCustomWillTransformFromDictionary;
    _Bool _hasCustomTransformFromDictionary;
    _Bool _hasCustomTransformToDictionary;
    _Bool _hasCustomClassFromDictionary;
}

+ (id)metaWithClass:(Class)arg1 configTag:(id)arg2;
- (void).cxx_destruct;
- (id)genPropertyMapperByDic:(id)arg1;
- (id)getParentDicOfPath:(id)arg1 inDic:(id)arg2 needGenerate:(_Bool)arg3;
- (id)initWithClass:(Class)arg1 configTag:(id)arg2;

@end

