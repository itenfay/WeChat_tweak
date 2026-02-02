//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLivePivotEducationViewModel, UIView;

@protocol MMFinderLivePivotEducationViewModelDelegate <NSObject>
- (double)tipsContainerViewHeight;
- (UIView *)educationView;
- (double)viewHeight;

@optional
- (void)onTipsAlphaChange:(MMFinderLivePivotEducationViewModel *)arg1 tipsAlpha:(double)arg2;
- (void)onTipsHeightChange:(MMFinderLivePivotEducationViewModel *)arg1 tipsHeight:(double)arg2;
@end

