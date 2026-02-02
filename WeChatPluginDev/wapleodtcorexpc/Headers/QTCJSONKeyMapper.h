//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QTCJSONKeyMapper : NSObject
{
    CDUnknownBlockType _modelToJSONKeyBlock;
}

+ (id)baseMapper:(id)arg1 withModelToJSONExceptions:(id)arg2;
+ (id)mapper:(id)arg1 withExceptions:(id)arg2;
+ (id)mapperFromUpperCaseToLowerCase;
+ (id)mapperForTitleCase;
+ (id)mapperForSnakeCase;
+ (id)mapperFromUnderscoreCaseToCamelCase;
+ (id)swapKeysAndValuesInDictionary:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType modelToJSONKeyBlock; // @synthesize modelToJSONKeyBlock=_modelToJSONKeyBlock;
- (id)convertValue:(id)arg1;
- (id)convertValue:(id)arg1 isImportingToModel:(_Bool)arg2;
@property(readonly, nonatomic) CDUnknownBlockType JSONToModelKeyBlock;
- (id)initWithModelToJSONDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithModelToJSONBlock:(CDUnknownBlockType)arg1;
- (id)initWithJSONToModelBlock:(CDUnknownBlockType)arg1 modelToJSONBlock:(CDUnknownBlockType)arg2;

@end

