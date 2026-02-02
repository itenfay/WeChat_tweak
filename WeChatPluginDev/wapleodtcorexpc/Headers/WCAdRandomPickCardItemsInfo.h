//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCAdRandomPickCardItemsInfo : NSObject
{
    NSString *_titleColorAvailable;
    NSString *_titleColorAvailableDark;
    NSString *_titleColorPicked;
    NSString *_titleColorPickedDark;
    NSString *_backgroundImageUrl;
    NSArray *_cardItems;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *cardItems; // @synthesize cardItems=_cardItems;
@property(retain, nonatomic) NSString *backgroundImageUrl; // @synthesize backgroundImageUrl=_backgroundImageUrl;
@property(retain, nonatomic) NSString *titleColorPickedDark; // @synthesize titleColorPickedDark=_titleColorPickedDark;
@property(retain, nonatomic) NSString *titleColorPicked; // @synthesize titleColorPicked=_titleColorPicked;
@property(retain, nonatomic) NSString *titleColorAvailableDark; // @synthesize titleColorAvailableDark=_titleColorAvailableDark;
@property(retain, nonatomic) NSString *titleColorAvailable; // @synthesize titleColorAvailable=_titleColorAvailable;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

