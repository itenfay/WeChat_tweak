//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdPagInfo : NSObject
{
    NSString *_pagUrl;
    NSString *_pagMD5;
    double _width;
    double _height;
    NSString *_pagThumbUrl;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *pagThumbUrl; // @synthesize pagThumbUrl=_pagThumbUrl;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) NSString *pagMD5; // @synthesize pagMD5=_pagMD5;
@property(retain, nonatomic) NSString *pagUrl; // @synthesize pagUrl=_pagUrl;
- (_Bool)isValidWithThumb;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

