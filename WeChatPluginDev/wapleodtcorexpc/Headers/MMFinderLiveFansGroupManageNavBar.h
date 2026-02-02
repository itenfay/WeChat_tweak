//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString, UIButton;

@interface MMFinderLiveFansGroupManageNavBar : UIView
{
    CDUnknownBlockType _leftButtonActionCallback;
    CDUnknownBlockType _rightButtonActionCallback;
    UIView *_navLeftButton;
    UIButton *_navRightButton;
}

+ (double)preferHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *navRightButton; // @synthesize navRightButton=_navRightButton;
@property(retain, nonatomic) UIView *navLeftButton; // @synthesize navLeftButton=_navLeftButton;
@property(copy, nonatomic) CDUnknownBlockType rightButtonActionCallback; // @synthesize rightButtonActionCallback=_rightButtonActionCallback;
@property(copy, nonatomic) CDUnknownBlockType leftButtonActionCallback; // @synthesize leftButtonActionCallback=_leftButtonActionCallback;
- (void)rightButtonAction;
- (void)leftButtonAction;
- (id)getCurrentRightView;
- (id)getCurrentLeftButton;
- (void)updateUI;
@property(nonatomic) _Bool rightButtonHidden;
@property(retain, nonatomic) NSString *rightButtonLabel;
- (void)layoutNavRightButton;
- (void)layoutNavLeftButton;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

