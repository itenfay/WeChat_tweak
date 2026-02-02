//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class RichTextView, UIImageView, UIView;

@interface WCFinderLocationLbsTableViewCell : UITableViewCell
{
    RichTextView *_nameTextView;
    RichTextView *_distanceTextView;
    RichTextView *_rewardTextView;
    RichTextView *_dividerTextView;
    UIImageView *_arrowImageView;
    UIView *_separatorLine;
}

+ (double)cellHeightWithConfig:(id)arg1;
+ (id)stringWithCustomLink:(id)arg1 searchString:(id)arg2;
+ (double)textAreaMaxWidth:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) RichTextView *dividerTextView; // @synthesize dividerTextView=_dividerTextView;
@property(retain, nonatomic) RichTextView *rewardTextView; // @synthesize rewardTextView=_rewardTextView;
@property(retain, nonatomic) RichTextView *distanceTextView; // @synthesize distanceTextView=_distanceTextView;
@property(retain, nonatomic) RichTextView *nameTextView; // @synthesize nameTextView=_nameTextView;
- (void)updateWithConfig:(id)arg1 searchWord:(id)arg2;
- (void)prepareForReuse;
- (void)layoutAllSubviews;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

