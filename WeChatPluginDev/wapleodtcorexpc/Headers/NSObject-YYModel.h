//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface NSObject (YYModel)
+ (id)yy_modelWithXmlReaderNode:(struct XmlReaderNode_t *)arg1 configTag:(id)arg2;
+ (id)yy_modelWithXmlReaderNode:(struct XmlReaderNode_t *)arg1;
+ (id)yy_modelWithXmlString:(id)arg1 rootTag:(id)arg2 configTag:(id)arg3;
+ (id)yy_modelWithXmlString:(id)arg1 rootTag:(id)arg2;
+ (id)yy_modelWithXmlReaderNode:(struct XmlReaderNode_t *)arg1 tagPath:(id)arg2;
+ (id)yy_modelWithXmlString:(id)arg1 tagPath:(id)arg2;
+ (id)yy_modelWithUnderlineDictionary:(id)arg1;
+ (id)yy_modelWithDictionary:(id)arg1 configTag:(id)arg2;
+ (id)yy_modelWithDictionary:(id)arg1;
+ (id)yy_modelWithUnderlineJSON:(id)arg1;
+ (id)yy_modelWithJSON:(id)arg1 configTag:(id)arg2;
+ (id)yy_modelWithJSON:(id)arg1;
+ (id)_yy_dictionaryWithJSON:(id)arg1;
- (id)yy_modelToXmlStringWithRootTag:(id)arg1 configTag:(id)arg2;
- (id)yy_modelToXmlStringWithRootTag:(id)arg1;
- (void)yy_modelSetWithXmlReaderNode:(struct XmlReaderNode_t *)arg1 configTag:(id)arg2;
- (void)yy_modelSetWithXmlReaderNode:(struct XmlReaderNode_t *)arg1;
- (_Bool)yy_modelSetWithXmlString:(id)arg1 rootTag:(id)arg2 configTag:(id)arg3;
- (_Bool)yy_modelSetWithXmlString:(id)arg1 rootTag:(id)arg2;
- (id)yy_modelDescriptionWithConfigTag:(id)arg1;
- (id)yy_modelDescription;
- (_Bool)yy_modelIsEqual:(id)arg1 configTag:(id)arg2;
- (_Bool)yy_modelIsEqual:(id)arg1;
- (unsigned long long)yy_modelHashWithConfigTag:(id)arg1;
- (unsigned long long)yy_modelHash;
- (id)yy_modelInitWithCoder:(id)arg1 configTag:(id)arg2;
- (id)yy_modelInitWithCoder:(id)arg1;
- (void)yy_modelEncodeWithCoder:(id)arg1 configTag:(id)arg2;
- (void)yy_modelEncodeWithCoder:(id)arg1;
- (id)yy_modelDeepCopyWithConfigTag:(id)arg1;
- (id)yy_modelDeepCopy;
- (id)yy_modelCopyWithConfigTag:(id)arg1;
- (id)yy_modelCopy;
- (id)yy_modelToJSONStringWithConfigTag:(id)arg1;
- (id)yy_modelToReportJSONString;
- (id)yy_modelToJSONString;
- (id)yy_modelToJSONDataWithConfigTag:(id)arg1;
- (id)yy_modelToJSONData;
- (id)yy_modelToJSONObjectWithConfigTag:(id)arg1;
- (id)yy_modelToJSONObject;
- (_Bool)yy_modelSetWithDictionary:(id)arg1 configTag:(id)arg2;
- (_Bool)yy_modelSetWithUnderLineDictionary:(id)arg1;
- (_Bool)yy_modelSetWithDictionary:(id)arg1;
- (_Bool)yy_modelSetWithUnderlineJSON:(id)arg1;
- (_Bool)yy_modelSetWithJSON:(id)arg1 configTag:(id)arg2;
- (_Bool)yy_modelSetWithJSON:(id)arg1;
@end

