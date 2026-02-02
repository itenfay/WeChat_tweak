//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdLiteAppInfo : NSObject
{
    NSString *_appId;
    NSString *_page;
    NSString *_query;
    NSString *_minVersion;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *minVersion; // @synthesize minVersion=_minVersion;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *page; // @synthesize page=_page;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)description;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

