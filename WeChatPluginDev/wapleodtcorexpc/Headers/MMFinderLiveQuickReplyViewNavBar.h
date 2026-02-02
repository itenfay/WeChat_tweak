//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FixTitleColorButton, MMUIButton, MMUILabel;

@interface MMFinderLiveQuickReplyViewNavBar : UIView
{
    CDUnknownBlockType _actionCallback;
    MMUIButton *_leftButton;
    MMUILabel *_titleLabel;
    MMUILabel *_subTitleLabel;
    FixTitleColorButton *_rightButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FixTitleColorButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) MMUILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(copy, nonatomic) CDUnknownBlockType actionCallback; // @synthesize actionCallback=_actionCallback;
- (void)headerButtonAction:(_Bool)arg1;
- (void)onTapCancel;
- (void)onTapDone;
- (void)layoutNavRightButton;
- (void)layoutNavLeftButton;
- (void)layoutSubTitleView;
- (void)layoutTitleView;
- (void)layoutUI;
- (void)createUI;
- (void)updateCompleteButtonState:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

