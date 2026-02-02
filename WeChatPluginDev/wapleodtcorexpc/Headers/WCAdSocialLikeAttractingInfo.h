//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdSocialLikeAttractingInfo : NSObject
{
    unsigned long long _interval;
    NSString *_pagUrl;
    NSString *_pagMD5;
    double _offsetY;
    NSString *_iconPagUrl;
    NSString *_iconPagMD5;
    NSString *_iconPagDarkUrl;
    NSString *_iconPagDarkMD5;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *iconPagDarkMD5; // @synthesize iconPagDarkMD5=_iconPagDarkMD5;
@property(retain, nonatomic) NSString *iconPagDarkUrl; // @synthesize iconPagDarkUrl=_iconPagDarkUrl;
@property(retain, nonatomic) NSString *iconPagMD5; // @synthesize iconPagMD5=_iconPagMD5;
@property(retain, nonatomic) NSString *iconPagUrl; // @synthesize iconPagUrl=_iconPagUrl;
@property(nonatomic) double offsetY; // @synthesize offsetY=_offsetY;
@property(retain, nonatomic) NSString *pagMD5; // @synthesize pagMD5=_pagMD5;
@property(retain, nonatomic) NSString *pagUrl; // @synthesize pagUrl=_pagUrl;
@property(nonatomic) unsigned long long interval; // @synthesize interval=_interval;
- (_Bool)fetchIconPagUrl:(id *)arg1 pagMD5:(id *)arg2;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

