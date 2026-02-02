//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCAdColorInfo, WCAdFireworkCheerGuideHalfScreenInfo, WCAdFireworkCheerTagInfo, WCAdFireworkCheerTopLikeAreaInfo, WCAdPagInfo;

@interface WCAdFireworkCheerInfo : NSObject
{
    WCAdColorInfo *_likedColor;
    WCAdColorInfo *_likeButtonBgColor;
    WCAdColorInfo *_likeButtonBgHighlightedColor;
    NSString *_fireworkNormalIcon;
    NSString *_fireworkNormalIconDark;
    NSString *_fireworkLikedIcon;
    NSString *_fireworkLikedIconDark;
    WCAdPagInfo *_fireworkIconPag;
    double _attractDelayTime;
    WCAdPagInfo *_attractPag;
    double _vibrateDelayTime;
    double _refreshTime;
    NSString *_commentDescHint;
    WCAdPagInfo *_fullScreenPag;
    double _fullScreenCanCloseDelayTime;
    WCAdFireworkCheerTopLikeAreaInfo *_topLikeAreaInfo;
    NSString *_bottomButtonTitle;
    WCAdFireworkCheerTagInfo *_tagInfo;
    WCAdFireworkCheerGuideHalfScreenInfo *_guideHalfScreenInfo;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCAdFireworkCheerGuideHalfScreenInfo *guideHalfScreenInfo; // @synthesize guideHalfScreenInfo=_guideHalfScreenInfo;
@property(retain, nonatomic) WCAdFireworkCheerTagInfo *tagInfo; // @synthesize tagInfo=_tagInfo;
@property(retain, nonatomic) NSString *bottomButtonTitle; // @synthesize bottomButtonTitle=_bottomButtonTitle;
@property(retain, nonatomic) WCAdFireworkCheerTopLikeAreaInfo *topLikeAreaInfo; // @synthesize topLikeAreaInfo=_topLikeAreaInfo;
@property(nonatomic) double fullScreenCanCloseDelayTime; // @synthesize fullScreenCanCloseDelayTime=_fullScreenCanCloseDelayTime;
@property(retain, nonatomic) WCAdPagInfo *fullScreenPag; // @synthesize fullScreenPag=_fullScreenPag;
@property(retain, nonatomic) NSString *commentDescHint; // @synthesize commentDescHint=_commentDescHint;
@property(nonatomic) double refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) double vibrateDelayTime; // @synthesize vibrateDelayTime=_vibrateDelayTime;
@property(retain, nonatomic) WCAdPagInfo *attractPag; // @synthesize attractPag=_attractPag;
@property(nonatomic) double attractDelayTime; // @synthesize attractDelayTime=_attractDelayTime;
@property(retain, nonatomic) WCAdPagInfo *fireworkIconPag; // @synthesize fireworkIconPag=_fireworkIconPag;
@property(retain, nonatomic) NSString *fireworkLikedIconDark; // @synthesize fireworkLikedIconDark=_fireworkLikedIconDark;
@property(retain, nonatomic) NSString *fireworkLikedIcon; // @synthesize fireworkLikedIcon=_fireworkLikedIcon;
@property(retain, nonatomic) NSString *fireworkNormalIconDark; // @synthesize fireworkNormalIconDark=_fireworkNormalIconDark;
@property(retain, nonatomic) NSString *fireworkNormalIcon; // @synthesize fireworkNormalIcon=_fireworkNormalIcon;
@property(retain, nonatomic) WCAdColorInfo *likeButtonBgHighlightedColor; // @synthesize likeButtonBgHighlightedColor=_likeButtonBgHighlightedColor;
@property(retain, nonatomic) WCAdColorInfo *likeButtonBgColor; // @synthesize likeButtonBgColor=_likeButtonBgColor;
@property(retain, nonatomic) WCAdColorInfo *likedColor; // @synthesize likedColor=_likedColor;
- (id)fetchLikeButtonBgHighlightedColor;
- (id)fetchLikeButtonBgColor;
- (id)fetchLikedColorHexValue;
- (id)fetchLikedColor;
- (id)fetchFireworkLikedIconEscapingForXML;
- (id)fetchFireworkLikedIcon;
- (id)fetchFireworkNormalIconEscapingForXML;
- (id)fetchFireworkNormalIcon;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

