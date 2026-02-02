//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableString, NSString;

@interface MMXMLParser : NSObject
{
    _Bool _attributesAsStandaloneDic;
    _Bool _lowercaseMode;
    NSArray *_yymodelCustomContainerElement;
    NSMutableArray *_dictionaryStack;
    NSMutableString *_textInProgress;
    NSMutableString *_xml;
}

+ (id)xmlWithDic:(id)arg1 lowercaseMode:(_Bool)arg2;
+ (id)xmlWithDic:(id)arg1;
+ (id)dictionaryWithXMLString:(id)arg1;
+ (id)dictionaryWithXMLData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableString *xml; // @synthesize xml=_xml;
@property(retain, nonatomic) NSMutableString *textInProgress; // @synthesize textInProgress=_textInProgress;
@property(retain, nonatomic) NSMutableArray *dictionaryStack; // @synthesize dictionaryStack=_dictionaryStack;
@property(retain, nonatomic) NSArray *yymodelCustomContainerElement; // @synthesize yymodelCustomContainerElement=_yymodelCustomContainerElement;
@property(nonatomic) _Bool lowercaseMode; // @synthesize lowercaseMode=_lowercaseMode;
@property(nonatomic) _Bool attributesAsStandaloneDic; // @synthesize attributesAsStandaloneDic=_attributesAsStandaloneDic;
- (_Bool)isArrayOrDic:(id)arg1;
- (void)dfsVisitObject:(id)arg1 key:(id)arg2;
- (id)xmlWithDic:(id)arg1;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (id)dictionaryWithData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

