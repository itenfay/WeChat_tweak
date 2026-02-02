//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMUIButton, UIImageView, UILabel, UIView;
@protocol WCFinderPersonalCenterTakePhotoCollectionViewCellDelegate;

@interface WCFinderPersonalCenterTakePhotoCollectionViewCell : UICollectionViewCell
{
    _Bool _canShowIncomeContainer;
    id <WCFinderPersonalCenterTakePhotoCollectionViewCellDelegate> _delegate;
    UIImageView *_iconView;
    UILabel *_label;
    UILabel *_redDotLabel;
    UIView *_postContainer;
    MMUIButton *_arrowBtn;
    MMUIButton *_incomeContainer;
    UILabel *_incomeLabel;
    UIView *_incomeRedDot;
}

+ (id)cellID;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *incomeRedDot; // @synthesize incomeRedDot=_incomeRedDot;
@property(nonatomic) _Bool canShowIncomeContainer; // @synthesize canShowIncomeContainer=_canShowIncomeContainer;
@property(retain, nonatomic) UILabel *incomeLabel; // @synthesize incomeLabel=_incomeLabel;
@property(retain, nonatomic) MMUIButton *incomeContainer; // @synthesize incomeContainer=_incomeContainer;
@property(retain, nonatomic) MMUIButton *arrowBtn; // @synthesize arrowBtn=_arrowBtn;
@property(retain, nonatomic) UIView *postContainer; // @synthesize postContainer=_postContainer;
@property(retain, nonatomic) UILabel *redDotLabel; // @synthesize redDotLabel=_redDotLabel;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak id <WCFinderPersonalCenterTakePhotoCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clickIncomeAction;
- (void)onTapRedPacketEventView;
- (void)tapGesture:(id)arg1;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)updateLayoutWithViewArray:(id)arg1;
- (void)updateDisplayElements;
- (void)showIncomeRedDot:(_Bool)arg1;
- (void)updateCanShowIncome:(_Bool)arg1;
- (void)updateRedPointHiddedState:(_Bool)arg1;
- (void)setupPostViews;
- (void)setupIcomContainerView;
- (void)setupContainers;
- (void)setupReport:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

