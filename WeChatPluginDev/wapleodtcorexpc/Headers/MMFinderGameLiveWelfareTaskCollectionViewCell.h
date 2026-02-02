//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMFinderGameLiveWelfareCollectionCellViewModel, MMFinderGameLiveWelfareTaskDegreeCompletionView, MMWebImageView, RichTextView, UIImageView;

@interface MMFinderGameLiveWelfareTaskCollectionViewCell : UICollectionViewCell
{
    MMFinderGameLiveWelfareCollectionCellViewModel *_viewModel;
    RichTextView *_richTextView;
    MMFinderGameLiveWelfareTaskDegreeCompletionView *_degreeCompletionView;
    MMWebImageView *_imageView;
    UIImageView *_rightImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) MMWebImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) MMFinderGameLiveWelfareTaskDegreeCompletionView *degreeCompletionView; // @synthesize degreeCompletionView=_degreeCompletionView;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(retain, nonatomic) MMFinderGameLiveWelfareCollectionCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)updateViewModel:(id)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

