//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMWebImageView, NSString, SightIconView, UIView;

@interface WCTimeLineAdFinderView
{
    SightIconView *_playIconView;
    MMWebImageView *_contentImageView;
    UIView *_hlView;
    struct CGRect _fromRect;
}

+ (struct CGSize)getImageSizeWithWidth:(double)arg1 andHeight:(double)arg2;
+ (double)heightForMedia:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) struct CGRect fromRect; // @synthesize fromRect=_fromRect;
@property(retain, nonatomic) UIView *hlView; // @synthesize hlView=_hlView;
@property(retain, nonatomic) MMWebImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(retain, nonatomic) SightIconView *playIconView; // @synthesize playIconView=_playIconView;
- (id)getImageUrl:(id)arg1;
- (void)doShareAnimation;
- (struct CGRect)transitionStartImageRectInView:(id)arg1 willPresent:(_Bool)arg2;
- (id)transitionStartImage;
- (void)setNormalColor;
- (void)setHighlightedColor;
- (void)throwUrlMessage;
- (id)getVoiceOverStrForTimeline;
- (void)onVoiceOverClick;
- (void)initViewsWithWCDataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

