//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCEmoticonItem : NSObject
{
    NSString *_emoticonMd5;
    NSString *_emoticonSearchKey;
}

+ (id)_getStringFromCharSeq:(const char *)arg1;
+ (id)_getChildStringForKey:(const char *)arg1 fromXmlNode:(struct XmlReaderNode_t *)arg2;
+ (id)_getNameFromXmlNode:(struct XmlReaderNode_t *)arg1;
+ (id)fromXmlNode:(struct XmlReaderNode_t *)arg1;
+ (id)genListXmlFromItemList:(id)arg1;
+ (id)genItemListFromListXmlNode:(struct XmlReaderNode_t *)arg1;
+ (id)genListXmlFromEditImageAttr:(id)arg1;
+ (id)genItemListFromEditImageAttr:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_emoticonSearchKey;
+ (void)PBArrayAdd_emoticonMd5;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *emoticonSearchKey; // @synthesize emoticonSearchKey=_emoticonSearchKey;
@property(retain, nonatomic) NSString *emoticonMd5; // @synthesize emoticonMd5=_emoticonMd5;
- (id)toXml;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

