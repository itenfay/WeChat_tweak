//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMUIButton, NSString, UILabel, UIView;
@protocol MMLiveCreateNoticeTimingOptionsCollectionViewCellDelegate;

@interface MMLiveCreateNoticeTimingOptionsCollectionViewCell : UICollectionViewCell
{
    _Bool _enabled;
    NSString *_descriptionAccessibilityLabel;
    id <MMLiveCreateNoticeTimingOptionsCollectionViewCellDelegate> _delegate;
    UIView *_containerView;
    UILabel *_titleLabel;
    UIView *_descriptionContainerView;
    UILabel *_descriptionLabel;
    MMUIButton *_descriptionActionButton;
}

+ (id)reuseId;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *descriptionActionButton; // @synthesize descriptionActionButton=_descriptionActionButton;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIView *descriptionContainerView; // @synthesize descriptionContainerView=_descriptionContainerView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <MMLiveCreateNoticeTimingOptionsCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSString *descriptionAccessibilityLabel; // @synthesize descriptionAccessibilityLabel=_descriptionAccessibilityLabel;
- (void)updateStyle;
- (void)onDescriptionActionButtonTapped;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)accessibilityLabel;
@property(retain, nonatomic) NSString *descriptionActionLabel;
@property(retain, nonatomic) NSString *descriptionText;
@property(retain, nonatomic) NSString *title;
- (id)initWithFrame:(struct CGRect)arg1;

@end

