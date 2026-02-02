//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayPayResultShowInfoValueAttr : NSObject
{
    unsigned long long _link_type;
    NSString *_link_weapp;
    NSString *_link_addr;
    NSString *_link_url;
    unsigned long long _text_attr;
}

+ (id)genFromXml:(struct XmlReaderNode_t *)arg1;
+ (id)GenFromDictionary:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long text_attr; // @synthesize text_attr=_text_attr;
@property(retain, nonatomic) NSString *link_url; // @synthesize link_url=_link_url;
@property(retain, nonatomic) NSString *link_addr; // @synthesize link_addr=_link_addr;
@property(retain, nonatomic) NSString *link_weapp; // @synthesize link_weapp=_link_weapp;
@property(nonatomic) unsigned long long link_type; // @synthesize link_type=_link_type;
- (id)readChildText:(const char *)arg1 inNode:(struct XmlReaderNode_t *)arg2;
- (id)initWithDic:(id)arg1;

@end

