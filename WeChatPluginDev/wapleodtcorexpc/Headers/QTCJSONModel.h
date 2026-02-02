//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QTCJSONModel : NSObject
{
    NSString *_description;
}

+ (_Bool)supportsSecureCoding;
+ (Class)classForCollectionProperty:(id)arg1;
+ (id)protocolForArrayProperty:(id)arg1;
+ (_Bool)propertyIsQTCIgnored:(id)arg1;
+ (_Bool)propertyIsQTCOptional:(id)arg1;
+ (void)setGlobalKeyMapper:(id)arg1;
+ (id)keyMapper;
+ (id)dictionaryOfDictionariesFromModels:(id)arg1;
+ (id)arrayOfDictionariesFromModels:(id)arg1 propertyNamesToExport:(id)arg2;
+ (id)arrayOfDictionariesFromModels:(id)arg1;
+ (id)dictionaryOfModelsFromDictionary:(id)arg1 error:(id *)arg2;
+ (id)dictionaryOfModelsFromData:(id)arg1 error:(id *)arg2;
+ (id)dictionaryOfModelsFromString:(id)arg1 error:(id *)arg2;
+ (id)arrayOfModelsFromDictionaries:(id)arg1 error:(id *)arg2;
+ (id)arrayOfModelsFromString:(id)arg1 error:(id *)arg2;
+ (id)arrayOfModelsFromData:(id)arg1 error:(id *)arg2;
+ (id)arrayOfModelsFromDictionaries:(id)arg1;
+ (void)load;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)mergeFromDictionary:(id)arg1 useKeyMapping:(_Bool)arg2 error:(id *)arg3;
- (void)mergeFromDictionary:(id)arg1 useKeyMapping:(_Bool)arg2;
- (id)description;
- (_Bool)validate:(id *)arg1;
- (unsigned long long)hash;
- (long long)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)indexPropertyName;
- (id)toJSONStringWithKeys:(id)arg1;
- (id)toJSONDataWithKeys:(id)arg1;
- (id)toDictionaryWithKeys:(id)arg1;
- (id)toJSONData;
- (id)toJSONString;
- (id)toDictionary;
- (void)__createDictionariesForKeyPath:(id)arg1 inDictionary:(id *)arg2;
- (_Bool)__customGetValue:(id *)arg1 forProperty:(id)arg2;
- (_Bool)__customSetValue:(id)arg1 forProperty:(id)arg2;
- (id)__reverseTransform:(id)arg1 forProperty:(id)arg2;
- (id)__transform:(id)arg1 forProperty:(id)arg2 error:(id *)arg3;
- (void)__inspectProperties;
- (id)__properties__;
- (id)__requiredPropertyNames;
- (_Bool)__isQTCJSONModelSubClass:(Class)arg1;
- (_Bool)__importDictionary:(id)arg1 withKeyMapper:(id)arg2 validation:(_Bool)arg3 error:(id *)arg4;
- (id)__mapString:(id)arg1 withKeyMapper:(id)arg2;
- (_Bool)__doesDictionary:(id)arg1 matchModelWithKeyMapper:(id)arg2 error:(id *)arg3;
- (id)__keyMapper;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)initWithString:(id)arg1 usingEncoding:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithString:(id)arg1 error:(id *)arg2;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)init;
- (void)__setup__;

@end

