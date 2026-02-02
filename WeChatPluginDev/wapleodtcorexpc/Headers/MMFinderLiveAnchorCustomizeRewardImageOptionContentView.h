//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveAnchorCustomizeRewardOptionsHighlightView, NSArray, UIView;

@interface MMFinderLiveAnchorCustomizeRewardImageOptionContentView
{
    CDUnknownBlockType _onImageClickedAtIndexBlock;
    UIView *_imageContainerView;
    UIView *_imageLabelContainerView;
    UIView *_sepline;
    MMFinderLiveAnchorCustomizeRewardOptionsHighlightView *_highlightView;
    long long _seplineIndex;
    long long _highlightIndex;
    NSArray *_imageArray;
    NSArray *_imageLabelArray;
    NSArray *_imageViewArray;
    NSArray *_imageLabelViewArray;
}

+ (double)seplineHeight;
+ (double)seplineWidth;
+ (struct CGSize)imageCellSize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *imageLabelViewArray; // @synthesize imageLabelViewArray=_imageLabelViewArray;
@property(retain, nonatomic) NSArray *imageViewArray; // @synthesize imageViewArray=_imageViewArray;
@property(retain, nonatomic) NSArray *imageLabelArray; // @synthesize imageLabelArray=_imageLabelArray;
@property(retain, nonatomic) NSArray *imageArray; // @synthesize imageArray=_imageArray;
@property(nonatomic) long long highlightIndex; // @synthesize highlightIndex=_highlightIndex;
@property(nonatomic) long long seplineIndex; // @synthesize seplineIndex=_seplineIndex;
@property(retain, nonatomic) MMFinderLiveAnchorCustomizeRewardOptionsHighlightView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) UIView *sepline; // @synthesize sepline=_sepline;
@property(retain, nonatomic) UIView *imageLabelContainerView; // @synthesize imageLabelContainerView=_imageLabelContainerView;
@property(retain, nonatomic) UIView *imageContainerView; // @synthesize imageContainerView=_imageContainerView;
@property(copy, nonatomic) CDUnknownBlockType onImageClickedAtIndexBlock; // @synthesize onImageClickedAtIndexBlock=_onImageClickedAtIndexBlock;
- (double)contentPerferHeight;
- (void)onSelectImageView:(id)arg1;
- (void)onTapImageView:(id)arg1;
- (double)calcImageLeftWithIndex:(long long)arg1;
- (id)createLabelViewWithText:(id)arg1;
- (id)createImageCellViewWithImage:(id)arg1;
- (void)updateWithImageArray:(id)arg1 labelArray:(id)arg2;
- (void)setHighlightViewHidden;
- (void)setHighlightViewAtIndex:(long long)arg1;
- (void)setHighlightImage:(id)arg1;
- (void)setSeplineAfterIndex:(long long)arg1;
- (void)layoutSubviews;
- (id)init;

@end

