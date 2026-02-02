//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAdCardBtnInfo, WCAdSliderCardButton;

@interface WCAdSliderCardItem
{
    unsigned int _markMaxAlpha;
    NSString *_title;
    NSString *_desc;
    NSString *_backBorderImage;
    NSString *_frontBorderImage;
    WCAdCardBtnInfo *_clickActionInfo;
    WCAdSliderCardButton *_buttonInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdSliderCardButton *buttonInfo; // @synthesize buttonInfo=_buttonInfo;
@property(retain, nonatomic) WCAdCardBtnInfo *clickActionInfo; // @synthesize clickActionInfo=_clickActionInfo;
@property(retain, nonatomic) NSString *frontBorderImage; // @synthesize frontBorderImage=_frontBorderImage;
@property(retain, nonatomic) NSString *backBorderImage; // @synthesize backBorderImage=_backBorderImage;
@property(nonatomic) unsigned int markMaxAlpha; // @synthesize markMaxAlpha=_markMaxAlpha;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (long long)fetchCardAdLogoType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

