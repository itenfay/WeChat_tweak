//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCAdSliderCardOpeningAnimationView, WCAdSliderCardProductView, WCAdSliderCardView, WCDataItem;

@interface WCAdSliderCardLogic
{
    _Bool _isOpeningAnimationVisible;
    WCAdSliderCardView *_sliderCardViewCache;
    WCAdSliderCardOpeningAnimationView *_openingAnimationViewCache;
    WCAdSliderCardProductView *_productViewCache;
    WCDataItem *_dataItem;
    unsigned long long _contentItemScene;
}

+ (id)getLogicWithDataItem:(id)arg1 contentItemScene:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long contentItemScene; // @synthesize contentItemScene=_contentItemScene;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) _Bool isOpeningAnimationVisible; // @synthesize isOpeningAnimationVisible=_isOpeningAnimationVisible;
@property(retain, nonatomic) WCAdSliderCardProductView *productViewCache; // @synthesize productViewCache=_productViewCache;
@property(retain, nonatomic) WCAdSliderCardOpeningAnimationView *openingAnimationViewCache; // @synthesize openingAnimationViewCache=_openingAnimationViewCache;
@property(retain, nonatomic) WCAdSliderCardView *sliderCardViewCache; // @synthesize sliderCardViewCache=_sliderCardViewCache;
- (void)notifyOpeningAnimationVisibleStateChanged;
- (id)initWithDataItem:(id)arg1 contentItemScene:(unsigned long long)arg2;

@end

