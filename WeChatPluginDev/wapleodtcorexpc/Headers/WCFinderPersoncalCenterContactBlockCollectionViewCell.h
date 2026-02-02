//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UIView, WCFinderPersonalCenterSidesButton;
@protocol WCFinderPersoncalCenterContactBlockCollectionViewCellDelegate;

@interface WCFinderPersoncalCenterContactBlockCollectionViewCell : UICollectionViewCell
{
    _Bool _showIncomeEntrance;
    id <WCFinderPersoncalCenterContactBlockCollectionViewCellDelegate> _delegate;
    UIImageView *_headerView;
    UILabel *_label;
    UILabel *_infoLabel;
    UIImageView *_arrowIconView;
    UIView *_redDot;
    UIView *_separator;
    WCFinderPersonalCenterSidesButton *_incomeButton;
}

+ (_Bool)canShowIncomeView;
+ (id)cellID;
- (void).cxx_destruct;
@property(nonatomic) _Bool showIncomeEntrance; // @synthesize showIncomeEntrance=_showIncomeEntrance;
@property(retain, nonatomic) WCFinderPersonalCenterSidesButton *incomeButton; // @synthesize incomeButton=_incomeButton;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UIView *redDot; // @synthesize redDot=_redDot;
@property(retain, nonatomic) UIImageView *arrowIconView; // @synthesize arrowIconView=_arrowIconView;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <WCFinderPersoncalCenterContactBlockCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clickIncomeAction;
- (void)updateWithIncomeEntrance:(_Bool)arg1 infoTips:(id)arg2;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)resize;
- (void)setupSubViews;
- (void)setupIcomContainerView;
- (void)setupSeparator;
- (id)initWithFrame:(struct CGRect)arg1;

@end

