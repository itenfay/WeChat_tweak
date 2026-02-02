//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPXMLDocument : NSObject
{
    struct _xmlDoc *xmlDoc_;
}

- (id)nodesForXPath:(id)arg1 namespaces:(id)arg2 error:(id *)arg3;
- (id)nodesForXPath:(id)arg1 error:(id *)arg2;
- (void)setCharacterEncoding:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)XMLData;
- (id)rootElement;
- (void)dealloc;
- (id)description;
- (void)addStringsCacheToDoc;
- (id)initWithRootElement:(id)arg1;
- (id)initWithData:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (id)initWithXMLString:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;

@end

