//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdCardBtnInfo;

@interface WCAdWeGameGiftTagInfo : NSObject
{
    NSString *_icon;
    NSString *_descText;
    NSString *_clickText;
    NSString *_clickTextColor;
    NSString *_clickTextColorDark;
    NSString *_clickIconLight;
    NSString *_clickIconDark;
    WCAdCardBtnInfo *_clickActionInfo;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdCardBtnInfo *clickActionInfo; // @synthesize clickActionInfo=_clickActionInfo;
@property(retain, nonatomic) NSString *clickIconDark; // @synthesize clickIconDark=_clickIconDark;
@property(retain, nonatomic) NSString *clickIconLight; // @synthesize clickIconLight=_clickIconLight;
@property(retain, nonatomic) NSString *clickTextColorDark; // @synthesize clickTextColorDark=_clickTextColorDark;
@property(retain, nonatomic) NSString *clickTextColor; // @synthesize clickTextColor=_clickTextColor;
@property(retain, nonatomic) NSString *clickText; // @synthesize clickText=_clickText;
@property(retain, nonatomic) NSString *descText; // @synthesize descText=_descText;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

