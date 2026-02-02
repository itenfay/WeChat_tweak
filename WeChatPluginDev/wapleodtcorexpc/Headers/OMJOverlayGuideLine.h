//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class OMJOverlayGuideLineStyle;

@interface OMJOverlayGuideLine : UIView
{
    OMJOverlayGuideLineStyle *_guideLineStyle;
}

+ (id)verticalGuideLine;
+ (id)horizontalGuideLine;
- (void).cxx_destruct;
@property(readonly, nonatomic) double lineWeight;
- (void)configWithGuideLineStyle:(id)arg1;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

