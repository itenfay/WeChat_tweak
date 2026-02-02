//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdBrandProfileInfo : NSObject
{
    _Bool _openVideoTab;
    NSString *_brandUsername;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool openVideoTab; // @synthesize openVideoTab=_openVideoTab;
@property(retain, nonatomic) NSString *brandUsername; // @synthesize brandUsername=_brandUsername;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

