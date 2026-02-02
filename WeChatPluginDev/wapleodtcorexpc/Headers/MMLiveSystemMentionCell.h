//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMUIButton, MMUILabel, UIImageView, UIView, WCFinderMention;
@protocol MMLiveSystemMentionCellDelegate;

@interface MMLiveSystemMentionCell : UITableViewCell
{
    id <MMLiveSystemMentionCellDelegate> _delegate;
    WCFinderMention *_mention;
    UIImageView *_logoImageView;
    UIView *_bgView;
    UIView *_foldedShadowView;
    MMUILabel *_mentionTitleLabel;
    MMUIButton *_closeBtn;
    UIImageView *_arrowImageView;
}

+ (id)ReuseIdentifier;
+ (id)getBgColor;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) MMUILabel *mentionTitleLabel; // @synthesize mentionTitleLabel=_mentionTitleLabel;
@property(retain, nonatomic) UIView *foldedShadowView; // @synthesize foldedShadowView=_foldedShadowView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) WCFinderMention *mention; // @synthesize mention=_mention;
@property(nonatomic) __weak id <MMLiveSystemMentionCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onMentionClick;
- (void)onClickCloseBtn;
- (void)updateIfFolded:(_Bool)arg1;
- (void)updateWithMention:(id)arg1;
- (void)layoutUI;
- (void)layoutShadow;
- (void)layoutSubviews;
- (void)setupEvent;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

