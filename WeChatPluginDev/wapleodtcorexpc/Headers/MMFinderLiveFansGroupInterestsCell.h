//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, MMWebImageView, WCFinderLiveFansGroupInterestsInfo;

@interface MMFinderLiveFansGroupInterestsCell : UIView
{
    _Bool _shouldAdaptToDarkLight;
    MMWebImageView *_iconImageView;
    MMUILabel *_titleLabel;
    MMUILabel *_descriptionLabel;
    WCFinderLiveFansGroupInterestsInfo *_interestsInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldAdaptToDarkLight; // @synthesize shouldAdaptToDarkLight=_shouldAdaptToDarkLight;
@property(retain, nonatomic) WCFinderLiveFansGroupInterestsInfo *interestsInfo; // @synthesize interestsInfo=_interestsInfo;
@property(retain, nonatomic) MMUILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void)updateLabels;
- (void)setFrame:(struct CGRect)arg1;
- (void)adjustSelfSize;
- (void)updateWithInterestsInfo:(id)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

