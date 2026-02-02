//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIButton, UILabel;
@protocol WCFinderFeedbackReasonViewDelegate;

@interface WCFinderFeedbackReasonView : UIView
{
    id <WCFinderFeedbackReasonViewDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_tipsLabel;
    NSMutableArray *_optionButtonArray;
    UIButton *_feedbackButton;
    double _maxWidth;
}

- (void).cxx_destruct;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) UIButton *feedbackButton; // @synthesize feedbackButton=_feedbackButton;
@property(retain, nonatomic) NSMutableArray *optionButtonArray; // @synthesize optionButtonArray=_optionButtonArray;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <WCFinderFeedbackReasonViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickFeedbackButton:(id)arg1;
- (void)onClickOptionButton:(id)arg1;
- (void)addButtonsInLine:(void *)arg1 buttons:(id)arg2;
- (void)addFlexLayout;
- (id)genOptionButtonWithTitle:(id)arg1;
- (void)initSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateWithOptionList:(id)arg1;
- (id)initWithMaxWidth:(double)arg1;

@end

