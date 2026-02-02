//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CAGradientLayer;

@interface VoipRecentStatusFadeView : UIView
{
    double _startPointY;
    double _endPointY;
    CAGradientLayer *_caGradientLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *caGradientLayer; // @synthesize caGradientLayer=_caGradientLayer;
@property(nonatomic) double endPointY; // @synthesize endPointY=_endPointY;
@property(nonatomic) double startPointY; // @synthesize startPointY=_startPointY;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

