//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface WCGiftCardData
{
    _Bool _needJump;
    unsigned int _picDataLength;
    unsigned int _videoDataLength;
    unsigned int _thumbDataLength;
    unsigned int _layoutMode;
    unsigned int _bizUin;
    unsigned int _outOfCard;
    unsigned int _centerButtonJumpType;
    NSString *_toUserName;
    NSString *_fromUserName;
    NSString *_fromUserHeadImgUrl;
    NSString *_content;
    NSString *_contentPicUrl;
    NSString *_contentVideoUrl;
    NSString *_contentVideoThumbPicUrl;
    NSString *_picAesKey;
    NSString *_videoAesKey;
    NSString *_thumbPicAesKey;
    NSString *_cardBackgroundPicUrl;
    NSString *_cardLogoUrl;
    NSString *_cardTitle;
    NSString *_cardPrice;
    NSString *_footerWording;
    NSString *_color;
    NSString *_descriptionTitle;
    NSString *_descriptionIconUrl;
    NSString *_giftingMediaTitle;
    NSString *_orderId;
    NSString *_descriptionTitleColor;
    NSString *_cardTitleColor;
    NSString *_cardPriceTitleColor;
    NSString *_userCardId;
    NSString *_operationTitle;
    NSString *_operationUrl;
    NSString *_cardTpId;
    NSString *_cardCode;
    NSArray *_acceptedCardList;
    NSArray *_accepterList;
    NSString *_acceptedListTitle;
    NSString *_appBrandUserName;
    NSString *_appBrandPath;
    NSString *_bottomLeftBtnTitle;
    NSString *_bottomRightBtnTitle;
    NSString *_bottomRightBtnNativeUrl;
    NSString *_centerButtonTitle;
    NSString *_centerButtonNativeUrl;
    NSString *_centerButtonAppUsername;
    NSString *_centerButtonAppPath;
    NSString *_centerButtonConfirmTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *centerButtonConfirmTitle; // @synthesize centerButtonConfirmTitle=_centerButtonConfirmTitle;
@property(retain, nonatomic) NSString *centerButtonAppPath; // @synthesize centerButtonAppPath=_centerButtonAppPath;
@property(retain, nonatomic) NSString *centerButtonAppUsername; // @synthesize centerButtonAppUsername=_centerButtonAppUsername;
@property(retain, nonatomic) NSString *centerButtonNativeUrl; // @synthesize centerButtonNativeUrl=_centerButtonNativeUrl;
@property(nonatomic) unsigned int centerButtonJumpType; // @synthesize centerButtonJumpType=_centerButtonJumpType;
@property(retain, nonatomic) NSString *centerButtonTitle; // @synthesize centerButtonTitle=_centerButtonTitle;
@property(retain, nonatomic) NSString *bottomRightBtnNativeUrl; // @synthesize bottomRightBtnNativeUrl=_bottomRightBtnNativeUrl;
@property(retain, nonatomic) NSString *bottomRightBtnTitle; // @synthesize bottomRightBtnTitle=_bottomRightBtnTitle;
@property(retain, nonatomic) NSString *bottomLeftBtnTitle; // @synthesize bottomLeftBtnTitle=_bottomLeftBtnTitle;
@property(retain, nonatomic) NSString *appBrandPath; // @synthesize appBrandPath=_appBrandPath;
@property(retain, nonatomic) NSString *appBrandUserName; // @synthesize appBrandUserName=_appBrandUserName;
@property(nonatomic) unsigned int outOfCard; // @synthesize outOfCard=_outOfCard;
@property(retain, nonatomic) NSString *acceptedListTitle; // @synthesize acceptedListTitle=_acceptedListTitle;
@property(retain, nonatomic) NSArray *accepterList; // @synthesize accepterList=_accepterList;
@property(retain, nonatomic) NSArray *acceptedCardList; // @synthesize acceptedCardList=_acceptedCardList;
@property(retain, nonatomic) NSString *cardCode; // @synthesize cardCode=_cardCode;
@property(retain, nonatomic) NSString *cardTpId; // @synthesize cardTpId=_cardTpId;
@property(retain, nonatomic) NSString *operationUrl; // @synthesize operationUrl=_operationUrl;
@property(retain, nonatomic) NSString *operationTitle; // @synthesize operationTitle=_operationTitle;
@property(retain, nonatomic) NSString *userCardId; // @synthesize userCardId=_userCardId;
@property(retain, nonatomic) NSString *cardPriceTitleColor; // @synthesize cardPriceTitleColor=_cardPriceTitleColor;
@property(retain, nonatomic) NSString *cardTitleColor; // @synthesize cardTitleColor=_cardTitleColor;
@property(retain, nonatomic) NSString *descriptionTitleColor; // @synthesize descriptionTitleColor=_descriptionTitleColor;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(nonatomic) unsigned int bizUin; // @synthesize bizUin=_bizUin;
@property(retain, nonatomic) NSString *giftingMediaTitle; // @synthesize giftingMediaTitle=_giftingMediaTitle;
@property(nonatomic) unsigned int layoutMode; // @synthesize layoutMode=_layoutMode;
@property(retain, nonatomic) NSString *descriptionIconUrl; // @synthesize descriptionIconUrl=_descriptionIconUrl;
@property(retain, nonatomic) NSString *descriptionTitle; // @synthesize descriptionTitle=_descriptionTitle;
@property(retain, nonatomic) NSString *color; // @synthesize color=_color;
@property(nonatomic) unsigned int thumbDataLength; // @synthesize thumbDataLength=_thumbDataLength;
@property(nonatomic) unsigned int videoDataLength; // @synthesize videoDataLength=_videoDataLength;
@property(nonatomic) unsigned int picDataLength; // @synthesize picDataLength=_picDataLength;
@property(nonatomic) _Bool needJump; // @synthesize needJump=_needJump;
@property(retain, nonatomic) NSString *footerWording; // @synthesize footerWording=_footerWording;
@property(retain, nonatomic) NSString *cardPrice; // @synthesize cardPrice=_cardPrice;
@property(retain, nonatomic) NSString *cardTitle; // @synthesize cardTitle=_cardTitle;
@property(retain, nonatomic) NSString *cardLogoUrl; // @synthesize cardLogoUrl=_cardLogoUrl;
@property(retain, nonatomic) NSString *cardBackgroundPicUrl; // @synthesize cardBackgroundPicUrl=_cardBackgroundPicUrl;
@property(retain, nonatomic) NSString *thumbPicAesKey; // @synthesize thumbPicAesKey=_thumbPicAesKey;
@property(retain, nonatomic) NSString *videoAesKey; // @synthesize videoAesKey=_videoAesKey;
@property(retain, nonatomic) NSString *picAesKey; // @synthesize picAesKey=_picAesKey;
@property(retain, nonatomic) NSString *contentVideoThumbPicUrl; // @synthesize contentVideoThumbPicUrl=_contentVideoThumbPicUrl;
@property(retain, nonatomic) NSString *contentVideoUrl; // @synthesize contentVideoUrl=_contentVideoUrl;
@property(retain, nonatomic) NSString *contentPicUrl; // @synthesize contentPicUrl=_contentPicUrl;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *fromUserHeadImgUrl; // @synthesize fromUserHeadImgUrl=_fromUserHeadImgUrl;
@property(retain, nonatomic) NSString *fromUserName; // @synthesize fromUserName=_fromUserName;
@property(retain, nonatomic) NSString *toUserName; // @synthesize toUserName=_toUserName;

@end

