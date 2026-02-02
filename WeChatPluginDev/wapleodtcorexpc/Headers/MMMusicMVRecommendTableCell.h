//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMMusicMVModel, MMWebImageView, UIImageView, UILabel, UITapGestureRecognizer, UIView;
@protocol MMMusicMVRecommendTableCellDelegate;

@interface MMMusicMVRecommendTableCell : UITableViewCell
{
    MMWebImageView *_webImageView;
    UIView *_lineView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    MMMusicMVModel *_model;
    UIView *_likeContainerView;
    UIImageView *_likeLogoImageView;
    UILabel *_likeCountLabel;
    UIImageView *_activedLogoImageView;
    UITapGestureRecognizer *_gesture;
    id <MMMusicMVRecommendTableCellDelegate> _delegate;
}

+ (double)prefferedHeight;
+ (id)identifier;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MMMusicMVRecommendTableCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MMMusicMVModel *model; // @synthesize model=_model;
- (void)onUnactive;
- (void)onActive;
- (void)updateWithModel:(id)arg1 songLikeCountIfMvWithBeat:(unsigned long long)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onClick;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

