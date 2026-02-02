//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdOpenWeGameHalfScreenInfo : NSObject
{
    NSString *_gameIcon;
    NSString *_gameTitle;
    NSString *_giftName;
    NSString *_tipWording;
    NSString *_giftCode;
    NSString *_buttonTitle;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) NSString *giftCode; // @synthesize giftCode=_giftCode;
@property(retain, nonatomic) NSString *tipWording; // @synthesize tipWording=_tipWording;
@property(retain, nonatomic) NSString *giftName; // @synthesize giftName=_giftName;
@property(retain, nonatomic) NSString *gameTitle; // @synthesize gameTitle=_gameTitle;
@property(retain, nonatomic) NSString *gameIcon; // @synthesize gameIcon=_gameIcon;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

