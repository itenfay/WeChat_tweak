//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMUIButton, MMWebImageView, UILabel, UIView;

@interface GameVideoGalleryCell : UICollectionViewCell
{
    UIView *_bottomView;
    MMWebImageView *_imageView;
    UILabel *_titleView;
    UILabel *_subtitleView;
    UIView *_vertDividerView;
    UIView *_tagViewContainer;
    MMUIButton *_videoTypeView;
    UIView *_horiDividerView;
    id _cellData;
    CDUnknownBlockType _videoTypeAction;
}

- (void).cxx_destruct;
- (void)renderTagViews:(id)arg1;
- (void)clickVideoType;
- (void)updateVideoTypeState:(_Bool)arg1;
- (void)renderWithCellData:(id)arg1 videoTypeAction:(CDUnknownBlockType)arg2 extraBottomHeight:(double)arg3;
- (void)updateLayout:(double)arg1;
- (void)setupGameVideoGalleryCell;
- (id)initWithFrame:(struct CGRect)arg1;

@end

