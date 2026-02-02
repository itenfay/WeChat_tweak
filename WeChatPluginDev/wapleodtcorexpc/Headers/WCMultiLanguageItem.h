//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCMultiLanguageItem : NSObject
{
    NSString *zh;
    NSString *tw;
    NSString *en;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *en; // @synthesize en;
@property(retain, nonatomic) NSString *tw; // @synthesize tw;
@property(retain, nonatomic) NSString *zh; // @synthesize zh;
- (_Bool)isValid;
- (id)currentLanguageText;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

