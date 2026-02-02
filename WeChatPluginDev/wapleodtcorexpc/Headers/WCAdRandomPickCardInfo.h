//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdRandomPickCardItemsInfo;

@interface WCAdRandomPickCardInfo : NSObject
{
    NSString *_title;
    NSString *_introduceTitle;
    NSString *_titleIconUrl;
    NSString *_titleColor;
    NSString *_desc;
    NSString *_descColor;
    NSString *_descColorDark;
    NSString *_doneTitle;
    NSString *_doneTitleColor;
    WCAdRandomPickCardItemsInfo *_cardsInfo;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdRandomPickCardItemsInfo *cardsInfo; // @synthesize cardsInfo=_cardsInfo;
@property(retain, nonatomic) NSString *doneTitleColor; // @synthesize doneTitleColor=_doneTitleColor;
@property(retain, nonatomic) NSString *doneTitle; // @synthesize doneTitle=_doneTitle;
@property(retain, nonatomic) NSString *descColorDark; // @synthesize descColorDark=_descColorDark;
@property(retain, nonatomic) NSString *descColor; // @synthesize descColor=_descColor;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSString *titleIconUrl; // @synthesize titleIconUrl=_titleIconUrl;
@property(retain, nonatomic) NSString *introduceTitle; // @synthesize introduceTitle=_introduceTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

