//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView, WCTimeLineAdLookbookCardBrandNewAnimationDisplayLink;

@interface WCAdLookbookLogic
{
    _Bool _effectPagPlayedFlag;
    UIView *_effectPagViewCache;
    UIView *_slideEdgePagViewCache;
    long long _brandNewAnimatingState;
    UIView *_brandNewMediaView;
    WCTimeLineAdLookbookCardBrandNewAnimationDisplayLink *_brandNewAnimationDisplayLink;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTimeLineAdLookbookCardBrandNewAnimationDisplayLink *brandNewAnimationDisplayLink; // @synthesize brandNewAnimationDisplayLink=_brandNewAnimationDisplayLink;
@property(retain, nonatomic) UIView *brandNewMediaView; // @synthesize brandNewMediaView=_brandNewMediaView;
@property(nonatomic) long long brandNewAnimatingState; // @synthesize brandNewAnimatingState=_brandNewAnimatingState;
@property(nonatomic) _Bool effectPagPlayedFlag; // @synthesize effectPagPlayedFlag=_effectPagPlayedFlag;
@property(retain, nonatomic) UIView *slideEdgePagViewCache; // @synthesize slideEdgePagViewCache=_slideEdgePagViewCache;
@property(retain, nonatomic) UIView *effectPagViewCache; // @synthesize effectPagViewCache=_effectPagViewCache;

@end

