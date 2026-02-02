//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, WCAdSphereCardInfo, WCCanvasAbilitySliderInfo, WCCanvasComponentBackgroundMusicInfo, WCCanvasComponentBottomSwipeInfo, WCCanvasComponentButtonInfo, WCCanvasComponentFloatActionButtonInfo, WCCanvasComponentFloatConversionBarInfo, WCCanvasComponentFloatJumpInfo, WCCanvasComponentFullScreenImageInfo, WCCanvasComponentGeneralVideoInfo, WCCanvasComponentHalfRandomCardInfo, WCCanvasComponentLocationInfo, WCCanvasComponentMusicInfo, WCCanvasComponentNewScrollInfo, WCCanvasComponentPreloadWebViewInfo, WCCanvasComponentPureImageInfo, WCCanvasComponentRandomPickCardInfo, WCCanvasComponentRedEnvelopInfo, WCCanvasComponentSeparatorInfo, WCCanvasComponentShareInfo, WCCanvasComponentSidebarInfo, WCCanvasComponentSightVideoInfo, WCCanvasComponentSocialInfo, WCCanvasComponentStreamVideoInfo, WCCanvasComponentTelephoneInfo, WCCanvasComponentTextAreaInfo, WCCanvasComponentUltraWebViewInfo, WCCanvasComponentWebStoreInfo, WCCanvasFloatLayoutInfo, WCCanvasFrameLayoutInfo, WCCanvasLinearLayoutInfo, WCCanvasRadarChartInfo, WCCanvasRandomLayoutInfo, WCCanvsComponentPanoramaInfo, WCCanvsComponentScrollGroupListInfo;

@interface WCCanvasComponentItem
{
    _Bool _hasUpdateDynamicData;
    _Bool _isTwistAnimView;
    _Bool _isShakeAnimView;
    _Bool _isDefaultRandomCard;
    int canvasIf;
    int hasIf;
    int _type;
    int _subType;
    int _verticalAlignment;
    int _horizontalAlignment;
    int _noReport;
    NSMutableArray *dynamicsInfo;
    NSString *_cid;
    NSString *_bgColor;
    WCCanvasComponentTextAreaInfo *_textAreaInfo;
    WCCanvasComponentButtonInfo *_buttonInfo;
    WCCanvasComponentPureImageInfo *_pureImageInfo;
    WCCanvasComponentSightVideoInfo *_sightVideoInfo;
    WCCanvasComponentStreamVideoInfo *_streamVideoInfo;
    WCCanvasComponentGeneralVideoInfo *_generalVideoInfo;
    WCCanvasComponentPreloadWebViewInfo *_preloadWebViewInfo;
    WCCanvsComponentPanoramaInfo *_panoramaInfo;
    WCCanvasComponentFullScreenImageInfo *_fullScreenImageInfo;
    WCCanvsComponentScrollGroupListInfo *_scrollGroupListInfo;
    WCCanvasComponentNewScrollInfo *_oNewScrollInfo;
    WCCanvasComponentLocationInfo *_locationInfo;
    WCCanvasComponentTelephoneInfo *_telephoneInfo;
    WCCanvasAbilitySliderInfo *_abilitySliderInfo;
    WCCanvasRadarChartInfo *_radarChartInfo;
    WCCanvasLinearLayoutInfo *_linearLayoutInfo;
    WCCanvasFrameLayoutInfo *_frameLayoutInfo;
    WCAdSphereCardInfo *_sphereInfo;
    WCCanvasComponentFloatActionButtonInfo *_floatActionButtonInfo;
    WCCanvasComponentBottomSwipeInfo *_bottomSwipeInfo;
    WCCanvasComponentUltraWebViewInfo *_ultraWebViewInfo;
    WCCanvasComponentWebStoreInfo *_webStoreInfo;
    WCCanvasFloatLayoutInfo *_floatLayoutInfo;
    WCCanvasComponentFloatJumpInfo *_floatJumpInfo;
    WCCanvasRandomLayoutInfo *_randomLayoutInfo;
    WCCanvasComponentShareInfo *_shareInfo;
    WCCanvasComponentFloatConversionBarInfo *_floatConversionBarInfo;
    WCCanvasComponentSocialInfo *_socialInfo;
    WCCanvasComponentRedEnvelopInfo *_redEnvelopInfo;
    WCCanvasComponentSidebarInfo *_sidebarInfo;
    WCCanvasComponentSeparatorInfo *_separatorInfo;
    WCCanvasComponentMusicInfo *_musicInfo;
    WCCanvasComponentBackgroundMusicInfo *_backgroundMusicInfo;
    WCCanvasComponentHalfRandomCardInfo *_halfRandomCardInfo;
    WCCanvasComponentRandomPickCardInfo *_randomPickCardInfo;
    double _paddingTop;
    double _paddingBottom;
    double _paddingLeft;
    double _paddingRight;
    double _layoutWidth;
    double _layoutHeight;
    double _paddingBottomSupplemental;
    NSString *_jumpExtInfo;
    double _floatStartTime;
    NSString *_floatComponentId;
    NSString *_qrExtInfo;
    NSString *_borderColor;
    NSString *_borderSize;
    NSString *_layoutBGColor;
    NSString *_randomCardId;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDefaultRandomCard; // @synthesize isDefaultRandomCard=_isDefaultRandomCard;
@property(retain, nonatomic) NSString *randomCardId; // @synthesize randomCardId=_randomCardId;
@property(nonatomic) _Bool isShakeAnimView; // @synthesize isShakeAnimView=_isShakeAnimView;
@property(nonatomic) _Bool isTwistAnimView; // @synthesize isTwistAnimView=_isTwistAnimView;
@property(retain, nonatomic) NSString *layoutBGColor; // @synthesize layoutBGColor=_layoutBGColor;
@property(retain, nonatomic) NSString *borderSize; // @synthesize borderSize=_borderSize;
@property(retain, nonatomic) NSString *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) NSString *qrExtInfo; // @synthesize qrExtInfo=_qrExtInfo;
@property(retain, nonatomic) NSString *floatComponentId; // @synthesize floatComponentId=_floatComponentId;
@property(nonatomic) double floatStartTime; // @synthesize floatStartTime=_floatStartTime;
@property(retain, nonatomic) NSString *jumpExtInfo; // @synthesize jumpExtInfo=_jumpExtInfo;
@property(nonatomic) double paddingBottomSupplemental; // @synthesize paddingBottomSupplemental=_paddingBottomSupplemental;
@property(nonatomic) int noReport; // @synthesize noReport=_noReport;
@property(nonatomic) _Bool hasUpdateDynamicData; // @synthesize hasUpdateDynamicData=_hasUpdateDynamicData;
@property(nonatomic) int horizontalAlignment; // @synthesize horizontalAlignment=_horizontalAlignment;
@property(nonatomic) int verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) double layoutHeight; // @synthesize layoutHeight=_layoutHeight;
@property(nonatomic) double layoutWidth; // @synthesize layoutWidth=_layoutWidth;
@property(nonatomic) double paddingRight; // @synthesize paddingRight=_paddingRight;
@property(nonatomic) double paddingLeft; // @synthesize paddingLeft=_paddingLeft;
@property(nonatomic) double paddingBottom; // @synthesize paddingBottom=_paddingBottom;
@property(nonatomic) double paddingTop; // @synthesize paddingTop=_paddingTop;
@property(retain, nonatomic) WCCanvasComponentRandomPickCardInfo *randomPickCardInfo; // @synthesize randomPickCardInfo=_randomPickCardInfo;
@property(retain, nonatomic) WCCanvasComponentHalfRandomCardInfo *halfRandomCardInfo; // @synthesize halfRandomCardInfo=_halfRandomCardInfo;
@property(retain, nonatomic) WCCanvasComponentBackgroundMusicInfo *backgroundMusicInfo; // @synthesize backgroundMusicInfo=_backgroundMusicInfo;
@property(retain, nonatomic) WCCanvasComponentMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(retain, nonatomic) WCCanvasComponentSeparatorInfo *separatorInfo; // @synthesize separatorInfo=_separatorInfo;
@property(retain, nonatomic) WCCanvasComponentSidebarInfo *sidebarInfo; // @synthesize sidebarInfo=_sidebarInfo;
@property(retain, nonatomic) WCCanvasComponentRedEnvelopInfo *redEnvelopInfo; // @synthesize redEnvelopInfo=_redEnvelopInfo;
@property(retain, nonatomic) WCCanvasComponentSocialInfo *socialInfo; // @synthesize socialInfo=_socialInfo;
@property(retain, nonatomic) WCCanvasComponentFloatConversionBarInfo *floatConversionBarInfo; // @synthesize floatConversionBarInfo=_floatConversionBarInfo;
@property(retain, nonatomic) WCCanvasComponentShareInfo *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(retain, nonatomic) WCCanvasRandomLayoutInfo *randomLayoutInfo; // @synthesize randomLayoutInfo=_randomLayoutInfo;
@property(retain, nonatomic) WCCanvasComponentFloatJumpInfo *floatJumpInfo; // @synthesize floatJumpInfo=_floatJumpInfo;
@property(retain, nonatomic) WCCanvasFloatLayoutInfo *floatLayoutInfo; // @synthesize floatLayoutInfo=_floatLayoutInfo;
@property(retain, nonatomic) WCCanvasComponentWebStoreInfo *webStoreInfo; // @synthesize webStoreInfo=_webStoreInfo;
@property(retain, nonatomic) WCCanvasComponentUltraWebViewInfo *ultraWebViewInfo; // @synthesize ultraWebViewInfo=_ultraWebViewInfo;
@property(retain, nonatomic) WCCanvasComponentBottomSwipeInfo *bottomSwipeInfo; // @synthesize bottomSwipeInfo=_bottomSwipeInfo;
@property(retain, nonatomic) WCCanvasComponentFloatActionButtonInfo *floatActionButtonInfo; // @synthesize floatActionButtonInfo=_floatActionButtonInfo;
@property(retain, nonatomic) WCAdSphereCardInfo *sphereInfo; // @synthesize sphereInfo=_sphereInfo;
@property(retain, nonatomic) WCCanvasFrameLayoutInfo *frameLayoutInfo; // @synthesize frameLayoutInfo=_frameLayoutInfo;
@property(retain, nonatomic) WCCanvasLinearLayoutInfo *linearLayoutInfo; // @synthesize linearLayoutInfo=_linearLayoutInfo;
@property(retain, nonatomic) WCCanvasRadarChartInfo *radarChartInfo; // @synthesize radarChartInfo=_radarChartInfo;
@property(retain, nonatomic) WCCanvasAbilitySliderInfo *abilitySliderInfo; // @synthesize abilitySliderInfo=_abilitySliderInfo;
@property(retain, nonatomic) WCCanvasComponentTelephoneInfo *telephoneInfo; // @synthesize telephoneInfo=_telephoneInfo;
@property(retain, nonatomic) WCCanvasComponentLocationInfo *locationInfo; // @synthesize locationInfo=_locationInfo;
@property(retain, nonatomic) WCCanvasComponentNewScrollInfo *oNewScrollInfo; // @synthesize oNewScrollInfo=_oNewScrollInfo;
@property(retain, nonatomic) WCCanvsComponentScrollGroupListInfo *scrollGroupListInfo; // @synthesize scrollGroupListInfo=_scrollGroupListInfo;
@property(retain, nonatomic) WCCanvasComponentFullScreenImageInfo *fullScreenImageInfo; // @synthesize fullScreenImageInfo=_fullScreenImageInfo;
@property(retain, nonatomic) WCCanvsComponentPanoramaInfo *panoramaInfo; // @synthesize panoramaInfo=_panoramaInfo;
@property(retain, nonatomic) WCCanvasComponentPreloadWebViewInfo *preloadWebViewInfo; // @synthesize preloadWebViewInfo=_preloadWebViewInfo;
@property(retain, nonatomic) WCCanvasComponentGeneralVideoInfo *generalVideoInfo; // @synthesize generalVideoInfo=_generalVideoInfo;
@property(retain, nonatomic) WCCanvasComponentStreamVideoInfo *streamVideoInfo; // @synthesize streamVideoInfo=_streamVideoInfo;
@property(retain, nonatomic) WCCanvasComponentSightVideoInfo *sightVideoInfo; // @synthesize sightVideoInfo=_sightVideoInfo;
@property(retain, nonatomic) WCCanvasComponentPureImageInfo *pureImageInfo; // @synthesize pureImageInfo=_pureImageInfo;
@property(retain, nonatomic) WCCanvasComponentButtonInfo *buttonInfo; // @synthesize buttonInfo=_buttonInfo;
@property(retain, nonatomic) WCCanvasComponentTextAreaInfo *textAreaInfo; // @synthesize textAreaInfo=_textAreaInfo;
@property(retain, nonatomic) NSString *bgColor; // @synthesize bgColor=_bgColor;
@property(nonatomic) int subType; // @synthesize subType=_subType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(nonatomic) int hasIf; // @synthesize hasIf;
@property(nonatomic) int canvasIf; // @synthesize canvasIf;
@property(retain, nonatomic) NSMutableArray *dynamicsInfo; // @synthesize dynamicsInfo;
- (double)jumpStreamVideoTextHeight;
- (_Bool)isNeedShowStreamVideoBtn;
- (id)fetchWebStoreUrlsWithInternalJump:(_Bool)arg1;
- (long long)fetchImageContentMode;
- (id)fetchImageUrl;
- (id)fetchFirstComponentWithAvailableImage;
- (_Bool)isSpecialFinderRedEnvelopeItem;
- (id)fetchRandomPickComponentCardInfo;
- (id)fetchRandomEncorePickInfo;
- (id)fetchRandomEncoreInfo;
- (id)fetchTransitionAnimationInfoForShakeAnimation;
- (id)fetchDefaultComponentItemForTwistAnimation;
- (double)fetchLayoutCornerRadius;
- (id)fetchTransitionImgInfosForShakeAnimation;
- (_Bool)canShowShakeAnimation;
- (id)fetchTransitionImgInfoForTwistAnimation;
- (_Bool)canShowTwistAnimation;
- (_Bool)updateRandomCardDynamicInfoWith:(id)arg1;
- (_Bool)resetRandomLayoutChosenCardId;
- (_Bool)updateRandomLayoutWithChosenCardId:(id)arg1 cardDynamicInfo:(id)arg2;
- (id)fetchRandomLayoutChosenRandomCardId;
- (id)fetchRandomLayoutComponentItemItself;
- (void)resetAllComponentDynamicValues;
- (void)allowAllVideoComponentsMakingVoice:(_Bool)arg1;
- (id)getInnerFirstVideoComponentItem;
- (id)fetchLayoutItemsInLayoutComponent;
- (_Bool)updateUsingDynamicInfo:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

