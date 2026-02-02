//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class RichTextView, UIImageView, UILabel, UIView;

@interface WCFinderNotifySystemTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;
    RichTextView *_contentTextView;
    UIView *_iconImageView;
    UIImageView *_arrowImageView;
    UIView *_lineView;
    UILabel *_redDotCountLabel;
}

+ (double)heightForSystemCellWithWidth:(double)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *redDotCountLabel; // @synthesize redDotCountLabel=_redDotCountLabel;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(nonatomic) __weak UIView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak RichTextView *contentTextView; // @synthesize contentTextView=_contentTextView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setUpUI;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

