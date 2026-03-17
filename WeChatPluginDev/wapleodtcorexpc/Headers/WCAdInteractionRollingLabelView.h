//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString;

@interface WCAdInteractionRollingLabelView : UIView
{
    _Bool _isAnimating;
}

@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)onSwitchToIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)generateSubviewsWithRollingTexts:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 rollingTexts:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

