//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface UIView (SmoothCorner)
- (_Bool)realApplySmoothRadius:(double)arg1 withSmoothRate:(double)arg2 corners:(unsigned long long)arg3;
- (id)smoothMask;
- (void)setSmoothMask:(id)arg1;
- (_Bool)needReApplyCorner;
- (void)setNeedReApplyCorner:(_Bool)arg1;
- (void)applySmoothRadius:(double)arg1 withSmoothRate:(double)arg2 corners:(unsigned long long)arg3;
- (void)applySmoothRadius:(double)arg1 corners:(unsigned long long)arg2;
- (void)applySmoothRadius:(double)arg1 withSmoothRate:(double)arg2;
@property double smoothCornerRadius;
@end

