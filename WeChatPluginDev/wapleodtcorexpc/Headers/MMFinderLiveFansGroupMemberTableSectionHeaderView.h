//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUILabel, UIImageView;

@interface MMFinderLiveFansGroupMemberTableSectionHeaderView : UIView
{
    _Bool _shouldAdaptToDarkLight;
    _Bool _isAnchor;
    unsigned int _fansGroupMemCount;
    CDUnknownBlockType _onMemberTitleClicked;
    CDUnknownBlockType _onWarmTitleClicked;
    MMUILabel *_fansGroupMemCountLabel;
    MMUILabel *_fansGroupWarmHeartLabel;
    UIImageView *_memberArrowImageView;
    UIImageView *_warmArrowImageView;
}

+ (double)preferHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *warmArrowImageView; // @synthesize warmArrowImageView=_warmArrowImageView;
@property(retain, nonatomic) UIImageView *memberArrowImageView; // @synthesize memberArrowImageView=_memberArrowImageView;
@property(nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchor;
@property(nonatomic) _Bool shouldAdaptToDarkLight; // @synthesize shouldAdaptToDarkLight=_shouldAdaptToDarkLight;
@property(retain, nonatomic) MMUILabel *fansGroupWarmHeartLabel; // @synthesize fansGroupWarmHeartLabel=_fansGroupWarmHeartLabel;
@property(retain, nonatomic) MMUILabel *fansGroupMemCountLabel; // @synthesize fansGroupMemCountLabel=_fansGroupMemCountLabel;
@property(nonatomic) unsigned int fansGroupMemCount; // @synthesize fansGroupMemCount=_fansGroupMemCount;
@property(copy, nonatomic) CDUnknownBlockType onWarmTitleClicked; // @synthesize onWarmTitleClicked=_onWarmTitleClicked;
@property(copy, nonatomic) CDUnknownBlockType onMemberTitleClicked; // @synthesize onMemberTitleClicked=_onMemberTitleClicked;
- (void)layoutFansGroupWarnHeartLabel;
- (void)updateFansGroupMemCountOrigin;
- (void)layoutFansGroupMemCountLabel;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)updateWarmTitle:(id)arg1 showExpandArrow:(_Bool)arg2;
- (void)updateMemberTitle:(id)arg1 showExpandArrow:(_Bool)arg2;
- (void)onSelfTapped:(id)arg1;
- (void)initTapGesture;
- (id)initWithFrame:(struct CGRect)arg1 isAnchor:(_Bool)arg2;

@end

