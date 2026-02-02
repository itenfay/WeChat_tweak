//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class RichTextView, UIImageView, UILabel, UIView;

@interface WCFinderNotifyCell : UITableViewCell
{
    RichTextView *_contentTextView;
    UILabel *_titleLabel;
    UILabel *_timeLabel;
    UILabel *_detailLabel;
    UIImageView *_detailImageView;
    UIView *_lineView;
    UIView *_bottomLineView;
}

+ (double)cellHeightWithViewModel:(id)arg1 width:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *detailImageView; // @synthesize detailImageView=_detailImageView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) RichTextView *contentTextView; // @synthesize contentTextView=_contentTextView;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateDataWith:(id)arg1 cellWidth:(double)arg2;
- (void)setUpUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

