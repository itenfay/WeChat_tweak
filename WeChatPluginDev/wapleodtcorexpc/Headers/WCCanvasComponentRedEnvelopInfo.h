//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSString, WCCanvasComponentItem;

@interface WCCanvasComponentRedEnvelopInfo
{
    int _theChosenSubtype;
    NSString *_title;
    NSString *_hbImgUrl;
    NSString *_jumpUrl;
    NSString *_shareTitle;
    NSString *_shareThumbUrl;
    NSString *_btnTxtColor;
    double _btnTxtColorAlpha;
    NSString *_btnBgColor;
    double _btnBgColorAlpha;
    double _btnCornerRadius;
    WCCanvasComponentItem *_videoItem;
    NSString *_inviteLinkTxt;
    NSString *_inviteLinkTxtColor;
    double _inviteLinkTxtColorAlpha;
    NSMutableDictionary *_subCardsInfo;
    NSString *_cardDynamicInfo;
    NSString *_giveCardId;
    NSString *_receiveUrl;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1 withSizeType:(long long)arg2 basicWidth:(int)arg3 basicRootFontSize:(int)arg4 widthRoundingType:(long long)arg5 heightRoundingType:(long long)arg6;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *receiveUrl; // @synthesize receiveUrl=_receiveUrl;
@property(retain, nonatomic) NSString *giveCardId; // @synthesize giveCardId=_giveCardId;
@property(nonatomic) int theChosenSubtype; // @synthesize theChosenSubtype=_theChosenSubtype;
@property(retain, nonatomic) NSString *cardDynamicInfo; // @synthesize cardDynamicInfo=_cardDynamicInfo;
@property(retain, nonatomic) NSMutableDictionary *subCardsInfo; // @synthesize subCardsInfo=_subCardsInfo;
@property(nonatomic) double inviteLinkTxtColorAlpha; // @synthesize inviteLinkTxtColorAlpha=_inviteLinkTxtColorAlpha;
@property(retain, nonatomic) NSString *inviteLinkTxtColor; // @synthesize inviteLinkTxtColor=_inviteLinkTxtColor;
@property(retain, nonatomic) NSString *inviteLinkTxt; // @synthesize inviteLinkTxt=_inviteLinkTxt;
@property(retain, nonatomic) WCCanvasComponentItem *videoItem; // @synthesize videoItem=_videoItem;
@property(nonatomic) double btnCornerRadius; // @synthesize btnCornerRadius=_btnCornerRadius;
@property(nonatomic) double btnBgColorAlpha; // @synthesize btnBgColorAlpha=_btnBgColorAlpha;
@property(retain, nonatomic) NSString *btnBgColor; // @synthesize btnBgColor=_btnBgColor;
@property(nonatomic) double btnTxtColorAlpha; // @synthesize btnTxtColorAlpha=_btnTxtColorAlpha;
@property(retain, nonatomic) NSString *btnTxtColor; // @synthesize btnTxtColor=_btnTxtColor;
@property(retain, nonatomic) NSString *shareThumbUrl; // @synthesize shareThumbUrl=_shareThumbUrl;
@property(retain, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) NSString *hbImgUrl; // @synthesize hbImgUrl=_hbImgUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

