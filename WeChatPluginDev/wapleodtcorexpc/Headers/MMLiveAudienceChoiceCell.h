//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMUILabel, MMUIView;

@interface MMLiveAudienceChoiceCell : UICollectionViewCell
{
    _Bool _animating;
    float _voteProgress;
    MMUIView *_background;
    MMUILabel *_titleLabel;
    MMUILabel *_selectCountLabel;
    MMUIView *_voteProgressView;
}

+ (id)createLayoutWithSize;
+ (id)ReuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MMUIView *voteProgressView; // @synthesize voteProgressView=_voteProgressView;
@property(retain, nonatomic) MMUILabel *selectCountLabel; // @synthesize selectCountLabel=_selectCountLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIView *background; // @synthesize background=_background;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) float voteProgress; // @synthesize voteProgress=_voteProgress;
- (void)removeLabelShadow:(id)arg1;
- (void)addShadowToLabel:(id)arg1;
- (void)layoutSubviews;
- (void)updateWithChoice:(id)arg1 showProgress:(_Bool)arg2;
- (void)updateWithChoice:(id)arg1 progress:(float)arg2 showProgress:(_Bool)arg3;
- (void)performAnimateToProgress:(float)arg1;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

