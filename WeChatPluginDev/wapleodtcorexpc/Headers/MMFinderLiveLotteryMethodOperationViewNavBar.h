//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIButton, MMUILabel;

@interface MMFinderLiveLotteryMethodOperationViewNavBar : UIView
{
    CDUnknownBlockType _leftButtonActionCallback;
    MMUIButton *_closeButton;
    MMUILabel *_titleLabel;
    UIView *_sepelateLine;
    unsigned long long _type;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIView *sepelateLine; // @synthesize sepelateLine=_sepelateLine;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(copy, nonatomic) CDUnknownBlockType leftButtonActionCallback; // @synthesize leftButtonActionCallback=_leftButtonActionCallback;
- (void)leftButtonAction;
- (void)layoutSeparateLine;
- (void)layoutNavLeftButton;
- (void)layoutTitleView;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (void)updateDataWithType;
- (id)initWithType:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

