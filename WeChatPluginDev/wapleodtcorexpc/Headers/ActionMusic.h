//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ActionMusic : NSObject
{
    NSString *_name;
    NSString *_desc;
    NSString *_wifiUrl;
    NSString *_wapUrl;
    NSString *_webUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;
@property(retain, nonatomic) NSString *wapUrl; // @synthesize wapUrl=_wapUrl;
@property(retain, nonatomic) NSString *wifiUrl; // @synthesize wifiUrl=_wifiUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)toXml;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

