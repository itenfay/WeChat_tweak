//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, NSString, UILabel;

@interface MMFinderLiveAnchorCustomizeRewardNavBar : UIView
{
    CDUnknownBlockType _leftButtonActionCallback;
    CDUnknownBlockType _rightButtonActionCallback;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    MMUIButton *_leftButton;
    MMUIButton *_rightButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) MMUIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType rightButtonActionCallback; // @synthesize rightButtonActionCallback=_rightButtonActionCallback;
@property(copy, nonatomic) CDUnknownBlockType leftButtonActionCallback; // @synthesize leftButtonActionCallback=_leftButtonActionCallback;
- (void)rightButtonAction;
- (void)leftButtonAction;
@property(nonatomic) _Bool rightButtonEnable;
@property(copy, nonatomic) NSString *subTitleText;
@property(copy, nonatomic) NSString *titleText;
- (void)layoutSubviews;
- (id)init;

@end

