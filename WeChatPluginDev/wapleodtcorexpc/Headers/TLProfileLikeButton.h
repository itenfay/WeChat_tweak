//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel;

@interface TLProfileLikeButton
{
    _Bool _isLiked;
    CDUnknownBlockType _tapBlock;
    UIImageView *_likeIconImageView;
    UILabel *_numLabel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLiked; // @synthesize isLiked=_isLiked;
@property(retain, nonatomic) UILabel *numLabel; // @synthesize numLabel=_numLabel;
@property(retain, nonatomic) UIImageView *likeIconImageView; // @synthesize likeIconImageView=_likeIconImageView;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
- (void)performLikeAnimate;
- (void)onLikeButtonSelected:(id)arg1;
- (void)updateWithContact:(id)arg1;
- (void)updateWithLiked:(_Bool)arg1;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)setupLayout;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

