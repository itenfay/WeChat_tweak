//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer, MMTimer, MMUILabel;

@interface MMMusicHorizontalScrollingView : UIView
{
    MMUILabel *m_label1;
    MMUILabel *m_label2;
    MMTimer *m_timer;
    CAGradientLayer *m_maskLayer;
    double m_distance;
    double m_maxWidth;
    double m_distancePerSecond;
    double m_maskWidth;
    _Bool isLabelCenter;
    _Bool isLyricsPanelType;
}

- (void).cxx_destruct;
- (void)onTimer;
- (double)loopAnimationDuration;
- (double)label2AnimationMoveDistance;
- (_Bool)isLabelAnimating;
- (void)resetAndInitTimer;
- (void)resetScrollStatus;
- (void)restartScroll;
- (void)removeAnimation;
- (void)setLyricsPanelType:(_Bool)arg1;
- (void)setMaxWidth:(double)arg1;
- (void)setText:(id)arg1 textColor:(id)arg2 textFont:(id)arg3 maxWidth:(double)arg4;
- (void)setLabelCenter:(_Bool)arg1;
- (void)initMaskLayer;
- (void)dealloc;
- (id)init;

@end

