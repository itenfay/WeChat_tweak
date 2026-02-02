//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface EmoticonSecurityInfoList : NSObject
{
    NSArray *_items;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)fromEditImageAttr:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (_Bool)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)toXML;
- (_Bool)mergeFromItems:(id)arg1;

@end

