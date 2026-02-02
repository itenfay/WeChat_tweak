//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMBadgeView, MMLiveBeautySuite, NSString, UIButton, UIImageView, UILabel, UIView;
@protocol MMLiveBeautySuiteCollectionViewCellDelegate;

@interface MMLiveBeautySuiteCollectionViewCell : UICollectionViewCell
{
    MMLiveBeautySuite *_suite;
    id <MMLiveBeautySuiteCollectionViewCellDelegate> _delegate;
    UIView *_containerView;
    UIView *_borderView;
    UIView *_tileView;
    UILabel *_displayNameLabel;
    UIButton *_detailsButton;
    UIImageView *_detailsChevronView;
    MMBadgeView *_badgeView;
    MMBadgeView *_detailsBadgeView;
}

+ (id)reuseId;
- (void).cxx_destruct;
@property(retain, nonatomic) MMBadgeView *detailsBadgeView; // @synthesize detailsBadgeView=_detailsBadgeView;
@property(retain, nonatomic) MMBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIImageView *detailsChevronView; // @synthesize detailsChevronView=_detailsChevronView;
@property(retain, nonatomic) UIButton *detailsButton; // @synthesize detailsButton=_detailsButton;
@property(retain, nonatomic) UILabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) UIView *tileView; // @synthesize tileView=_tileView;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <MMLiveBeautySuiteCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMLiveBeautySuite *suite; // @synthesize suite=_suite;
- (void)updateWithSuite:(id)arg1;
- (void)layoutSubviews;
- (void)onActiveBeautyBadgesChangedInCollection:(id)arg1;
- (void)onBeautyBadgeDismissed:(id)arg1;
- (void)onDetailsButtonTapped;
- (void)setSelected:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

