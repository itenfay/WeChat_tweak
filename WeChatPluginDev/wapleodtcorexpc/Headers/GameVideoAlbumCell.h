//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMWebImageView, UILabel, UIView;

@interface GameVideoAlbumCell : UICollectionViewCell
{
    MMWebImageView *_imageView;
    UILabel *_titleView;
    UILabel *_subTitleView;
    UILabel *_durationView;
    UIView *_tagViewContainer;
    id _currentCellData;
}

- (void).cxx_destruct;
- (void)addTagViews:(id)arg1;
- (void)renderWithCellData:(id)arg1;
- (void)setupGameVideoAlbumCell;
- (id)initWithFrame:(struct CGRect)arg1;

@end

