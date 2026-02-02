//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FinderLiveMilestoneLotteryInfo_AttendInfo_Choice, UIColor, UIImageView, UILabel;

@interface MMFinderLiveMilestoneLotteryDetailQuestionOptionView : UIView
{
    _Bool _selected;
    _Bool _showCount;
    FinderLiveMilestoneLotteryInfo_AttendInfo_Choice *_choice;
    unsigned long long _maxChoiceCount;
    CDUnknownBlockType _onTapped;
    UILabel *_titleLabel;
    UILabel *_countLabel;
    UIImageView *_checkMarkImageView;
    UIView *_progressView;
    UIColor *_lightColor;
    UIColor *_heavyColor;
    UIColor *_selectedTextColor;
    UIColor *_normalTextColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *normalTextColor; // @synthesize normalTextColor=_normalTextColor;
@property(retain, nonatomic) UIColor *selectedTextColor; // @synthesize selectedTextColor=_selectedTextColor;
@property(retain, nonatomic) UIColor *heavyColor; // @synthesize heavyColor=_heavyColor;
@property(retain, nonatomic) UIColor *lightColor; // @synthesize lightColor=_lightColor;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIImageView *checkMarkImageView; // @synthesize checkMarkImageView=_checkMarkImageView;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType onTapped; // @synthesize onTapped=_onTapped;
@property(nonatomic) _Bool showCount; // @synthesize showCount=_showCount;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) unsigned long long maxChoiceCount; // @synthesize maxChoiceCount=_maxChoiceCount;
@property(retain, nonatomic) FinderLiveMilestoneLotteryInfo_AttendInfo_Choice *choice; // @synthesize choice=_choice;
- (void)updateColorAndLayout;
- (void)onChoiceUpdated;
- (void)layoutSubviews;
- (void)onTapped:(id)arg1;
- (void)commonInit;
- (id)initWithLightColor:(id)arg1 heavyColor:(id)arg2 selectedTextColor:(id)arg3 normalTextColor:(id)arg4;

@end

