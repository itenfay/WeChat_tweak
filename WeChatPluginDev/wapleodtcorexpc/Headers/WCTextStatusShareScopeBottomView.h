//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UILabel;

@interface WCTextStatusShareScopeBottomView : UIView
{
    UILabel *_labelView;
}

+ (double)heightForShareScopeBottomViewWithWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *labelView; // @synthesize labelView=_labelView;
- (void)layoutSubviews;
- (void)initLabelView;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

