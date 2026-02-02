//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMsgContentTipsItem, MMTimer;

@interface MMMsgCommonTipsView
{
    _Bool _shouldDisableAccessibility;
    MMTimer *_timer;
    MMMsgContentTipsItem *_item;
}

+ (id)tipsViewForTipsItem:(id)arg1 delegate:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MMMsgContentTipsItem *item; // @synthesize item=_item;
@property(nonatomic) _Bool shouldDisableAccessibility; // @synthesize shouldDisableAccessibility=_shouldDisableAccessibility;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
- (void)showOrHideExpandView;
- (id)accessibilityElements;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (double)heightToFitWidth:(double)arg1;
- (void)animatedHideInMsgContent;
- (void)animatedShowInMsgContent;
- (void)setFrame:(struct CGRect)arg1;
- (void)didMoveToSuperview;
- (void)hideAfterDuration:(double)arg1;
- (void)dealloc;

@end

