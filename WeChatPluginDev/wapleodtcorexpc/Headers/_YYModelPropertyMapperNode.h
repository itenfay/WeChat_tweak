//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class _YYModelPropertyMeta;

@interface _YYModelPropertyMapperNode : NSObject
{
    void *_tag;
    _YYModelPropertyMeta *_propertyMeta;
    _Bool _isXmlAttribute;
    _YYModelPropertyMapperNode *_firstChildNode;
    _YYModelPropertyMapperNode *_nextSibling;
    CDUnknownBlockType _preProcess;
    CDUnknownBlockType _customFromXMLProcess;
    CDUnknownBlockType _customToXMLProcess;
    _YYModelPropertyMapperNode *_parentNode;
}

- (void).cxx_destruct;
@property(nonatomic) __weak _YYModelPropertyMapperNode *parentNode; // @synthesize parentNode=_parentNode;
- (void)dealloc;
- (id)init;

@end

