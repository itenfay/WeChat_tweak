//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdFireworkCheerGuideHalfScreenInfo : NSObject
{
    NSString *_icon;
    NSString *_iconDark;
    NSString *_title;
    NSString *_desc;
    NSString *_buttonTitle;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *iconDark; // @synthesize iconDark=_iconDark;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

