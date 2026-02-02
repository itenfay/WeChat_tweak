//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMTextView, MMUIButton, NSString, UIImageView, UILabel, UIView;
@protocol MMFinderLiveCreateVoteHeaderTableViewCellDelegate;

@interface MMFinderLiveCreateVoteHeaderTableViewCell : UITableViewCell
{
    id <MMFinderLiveCreateVoteHeaderTableViewCellDelegate> _cellDelegate;
    MMUIButton *_selectButton;
    UIImageView *_selectArrowImageView;
    MMTextView *_questionTextView;
    UIView *_lineView;
    UIView *_durationContainerView;
    UILabel *_durationTitleLabel;
    UILabel *_durationDescLabel;
    UIImageView *_durationArrowImageView;
}

+ (double)textViewHeightWithQuestionText:(id)arg1 maxWidth:(double)arg2;
+ (double)cellHeightWithQuestionText:(id)arg1 maxWidth:(double)arg2;
+ (id)reuseId;
+ (id)TEXTVIEW_FONT;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *durationArrowImageView; // @synthesize durationArrowImageView=_durationArrowImageView;
@property(retain, nonatomic) UILabel *durationDescLabel; // @synthesize durationDescLabel=_durationDescLabel;
@property(retain, nonatomic) UILabel *durationTitleLabel; // @synthesize durationTitleLabel=_durationTitleLabel;
@property(retain, nonatomic) UIView *durationContainerView; // @synthesize durationContainerView=_durationContainerView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) MMTextView *questionTextView; // @synthesize questionTextView=_questionTextView;
@property(retain, nonatomic) UIImageView *selectArrowImageView; // @synthesize selectArrowImageView=_selectArrowImageView;
@property(retain, nonatomic) MMUIButton *selectButton; // @synthesize selectButton=_selectButton;
@property(nonatomic) __weak id <MMFinderLiveCreateVoteHeaderTableViewCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)didTapDurationSelect;
- (void)didClickSelectButton;
- (double)expectedHeightForTextView;
- (double)maxWidthForTextView;
- (void)layoutSubviews;
- (void)initUI;
- (void)endEditing;
- (void)configWithVoteItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

