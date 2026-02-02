//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface TPXMLElement
{
}

+ (void)fixUpNamespacesForNode:(struct _xmlNode *)arg1 graftingToTreeNode:(struct _xmlNode *)arg2;
+ (void)fixUpNamespacesForNode:(struct _xmlNode *)arg1 graftingToTreeNode:(struct _xmlNode *)arg2 namespaceSubstitutionMap:(id)arg3;
+ (void)fixDuplicateNamespacesForNode:(struct _xmlNode *)arg1 graftingToTreeNode:(struct _xmlNode *)arg2 namespaceSubstitutionMap:(id)arg3;
+ (void)fixQualifiedNamesForNode:(struct _xmlNode *)arg1 graftingToTreeNode:(struct _xmlNode *)arg2;
+ (void)deleteNamespacePtr:(struct _xmlNs *)arg1 fromXMLNode:(struct _xmlNode *)arg2;
- (id)resolvePrefixForNamespaceURI:(id)arg1;
- (id)attributeForLocalName:(id)arg1 URI:(id)arg2;
- (id)attributeForName:(id)arg1;
- (id)attributeForXMLNode:(struct _xmlAttr *)arg1;
- (void)addAttribute:(id)arg1;
- (id)attributes;
- (id)elementsForLocalName:(id)arg1 URI:(id)arg2;
- (id)elementsForName:(id)arg1;
- (void)removeChild:(id)arg1;
- (void)addChild:(id)arg1;
- (void)addNamespace:(id)arg1;
- (void)setNamespaces:(id)arg1;
- (id)namespaces;
- (id)initWithXMLString:(id)arg1 error:(id *)arg2;

@end

