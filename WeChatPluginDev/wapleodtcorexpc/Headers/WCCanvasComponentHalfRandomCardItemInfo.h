//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCCanvasComponentItem;

@interface WCCanvasComponentHalfRandomCardItemInfo
{
    _Bool _isDefaultCard;
    NSString *_cardId;
    NSString *_preTitle;
    NSString *_title;
    NSString *_desc;
    WCCanvasComponentItem *_contentItem;
    WCCanvasComponentItem *_buttonItem;
    long long _bulletCommentsType;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1 withSizeType:(long long)arg2 basicWidth:(int)arg3 basicRootFontSize:(int)arg4 widthRoundingType:(long long)arg5 heightRoundingType:(long long)arg6;
- (void).cxx_destruct;
@property(nonatomic) long long bulletCommentsType; // @synthesize bulletCommentsType=_bulletCommentsType;
@property(retain, nonatomic) WCCanvasComponentItem *buttonItem; // @synthesize buttonItem=_buttonItem;
@property(retain, nonatomic) WCCanvasComponentItem *contentItem; // @synthesize contentItem=_contentItem;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *preTitle; // @synthesize preTitle=_preTitle;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(nonatomic) _Bool isDefaultCard; // @synthesize isDefaultCard=_isDefaultCard;
- (_Bool)isSpecialRedEnvelopeItem;
- (_Bool)isValid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

