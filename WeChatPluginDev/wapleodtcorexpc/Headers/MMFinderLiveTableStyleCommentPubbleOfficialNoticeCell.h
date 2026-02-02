//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, CALayer, MMFinderLiveLiveRoleSignView, MMUIView;

@interface MMFinderLiveTableStyleCommentPubbleOfficialNoticeCell
{
    unsigned int _lastRank;
    unsigned int _lastMsgSubtype;
    MMUIView *_colorBackView;
    CAGradientLayer *_gradientLayer;
    CALayer *_colorLayer;
    MMFinderLiveLiveRoleSignView *_mysteriousSignView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveLiveRoleSignView *mysteriousSignView; // @synthesize mysteriousSignView=_mysteriousSignView;
@property(nonatomic) unsigned int lastMsgSubtype; // @synthesize lastMsgSubtype=_lastMsgSubtype;
@property(nonatomic) unsigned int lastRank; // @synthesize lastRank=_lastRank;
@property(retain, nonatomic) CALayer *colorLayer; // @synthesize colorLayer=_colorLayer;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) MMUIView *colorBackView; // @synthesize colorBackView=_colorBackView;
- (void)createColorLayer;
- (void)createGradientLayer;
- (void)updateBackgroundLayers;
- (_Bool)shouldShowSpecialColor;
- (unsigned int)getRank;
- (_Bool)isFansGroupNotice;
- (void)clearBackgroundLayers;
- (_Bool)isUITypeValid;
- (id)signText;
- (void)layoutMysteriousSignView;
- (void)layoutUI;
- (void)updateBackGroundColor;

@end

