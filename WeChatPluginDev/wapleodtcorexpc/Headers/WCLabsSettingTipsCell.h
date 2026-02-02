//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel;

@interface WCLabsSettingTipsCell : UIView
{
    MMUILabel *_tipsLabel;
    UIView *_leftLineView;
    UIView *_rightLineView;
    double _offsetY;
}

+ (double)heightForOffsetY:(double)arg1;
- (void).cxx_destruct;
- (void)initTipsLabel;
- (void)initLineView;
- (void)configureWithText:(id)arg1 withOffsetY:(double)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

