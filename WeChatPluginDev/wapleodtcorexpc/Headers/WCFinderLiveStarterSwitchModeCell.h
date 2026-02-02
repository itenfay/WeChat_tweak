//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMUIButton, MMUILabel, MMUIView, UIImageView, WCFinderLiveStarterLiveModeSubItem;

@interface WCFinderLiveStarterSwitchModeCell : UICollectionViewCell
{
    CDUnknownBlockType _clickBlock;
    WCFinderLiveStarterLiveModeSubItem *_item;
    MMUIView *_animationView;
    MMUIView *_borderView;
    MMUILabel *_titleLabel;
    UIImageView *_arrowIcon;
    MMUIButton *_clickButton;
    MMUIView *_redDoctView;
}

+ (id)getCurrentItemText:(id)arg1;
+ (double)getItemWidth:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIView *redDoctView; // @synthesize redDoctView=_redDoctView;
@property(retain, nonatomic) MMUIButton *clickButton; // @synthesize clickButton=_clickButton;
@property(retain, nonatomic) UIImageView *arrowIcon; // @synthesize arrowIcon=_arrowIcon;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) MMUIView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) WCFinderLiveStarterLiveModeSubItem *item; // @synthesize item=_item;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
- (id)getCellNormalColor;
- (id)getCellSelectColor;
- (void)clickButtonAction;
- (void)executeAnimaintion:(_Bool)arg1;
- (void)resetUI;
- (void)updateCellWithItem:(id)arg1;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)playCellAnimation;

@end

