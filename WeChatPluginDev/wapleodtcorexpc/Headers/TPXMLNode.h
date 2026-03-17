//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TPXMLNode : NSObject
{
    struct _xmlNode *xmlNode_;
    _Bool shouldFreeXMLNode_;
    NSString *cachedName_;
    NSArray *cachedChildren_;
    NSArray *cachedAttributes_;
}

+ (id)prefixForName:(id)arg1;
+ (id)localNameForName:(id)arg1;
+ (id)nodeBorrowingXMLNode:(struct _xmlNode *)arg1;
+ (id)nodeConsumingXMLNode:(struct _xmlNode *)arg1;
+ (id)namespaceWithName:(id)arg1 stringValue:(id)arg2;
+ (id)textWithStringValue:(id)arg1;
+ (id)attributeWithName:(id)arg1 URI:(id)arg2 stringValue:(id)arg3;
+ (id)attributeWithName:(id)arg1 stringValue:(id)arg2;
+ (id)elementWithName:(id)arg1 URI:(id)arg2;
+ (id)elementWithName:(id)arg1 stringValue:(id)arg2;
+ (id)elementWithName:(id)arg1;
+ (void)load;
- (void)setShouldFreeXMLNode:(_Bool)arg1;
- (_Bool)shouldFreeXMLNode;
- (struct _xmlNode *)XMLNode;
- (struct _xmlNode *)XMLNodeCopy;
- (id)methodSignatureForSelector:(SEL)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)nodesForXPath:(id)arg1 namespaces:(id)arg2 error:(id *)arg3;
- (id)nodesForXPath:(id)arg1 error:(id *)arg2;
- (unsigned long long)kind;
- (id)childAtIndex:(unsigned int)arg1;
- (id)children;
- (unsigned long long)childCount;
- (id)name;
- (id)qualifiedName;
- (id)URI;
- (id)prefix;
- (id)localName;
- (id)XMLString;
- (id)stringValue;
- (void)setStringValue:(id)arg1;
- (void)dealloc;
- (id)stringFromXMLString:(const char *)arg1;
- (void)releaseCachedValues;
- (id)initBorrowingXMLNode:(struct _xmlNode *)arg1;
- (id)initConsumingXMLNode:(struct _xmlNode *)arg1;

@end

