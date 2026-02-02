//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBadgeView, UIView;

@interface WCFinderMaskButton
{
    UIView *_maskView;
    CDUnknownBlockType _updateBlock;
    MMBadgeView *_redDotView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMBadgeView *redDotView; // @synthesize redDotView=_redDotView;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
- (void)layoutRedDot;
- (void)layoutSubviews;
- (void)updateRedDotShowType:(unsigned long long)arg1;
- (void)_hideRedDot;
- (void)_showRedDot;
- (void)setHighlighted:(_Bool)arg1;
- (void)makeMaskViewAdjustSuperviewLayerCorners;
- (void)setMaskViewBackgroundColor:(id)arg1;

@end

