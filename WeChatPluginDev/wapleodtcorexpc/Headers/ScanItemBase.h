//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ScanItemBase : NSObject
{
    int _itemType;
    id _scanItem;
    NSString *_barcode;
}

+ (id)parseWeAppXML:(struct XmlReaderNode_t *)arg1;
+ (id)parseUrlXML:(struct XmlReaderNode_t *)arg1;
+ (id)parseUserXML:(struct XmlReaderNode_t *)arg1;
+ (id)parseNotFoundXML:(struct XmlReaderNode_t *)arg1;
+ (id)parseProductXML:(struct XmlReaderNode_t *)arg1;
+ (id)parseActionXML:(struct XmlReaderNode_t *)arg1;
+ (id)parseGirdActionXML:(struct XmlReaderNode_t *)arg1;
+ (id)parseCommonActionXML:(struct XmlReaderNode_t *)arg1;
+ (id)getBaseItemOfType:(int)arg1 rootNode:(struct XmlReaderNode_t *)arg2;
+ (id)getScanItemFromXml:(id)arg1 andType:(int)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *barcode; // @synthesize barcode=_barcode;
@property(retain, nonatomic) id scanItem; // @synthesize scanItem=_scanItem;
@property(nonatomic) int itemType; // @synthesize itemType=_itemType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

