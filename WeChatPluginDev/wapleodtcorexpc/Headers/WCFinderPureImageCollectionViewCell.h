//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class UIImage, WCFinderFeedImageView;

@interface WCFinderPureImageCollectionViewCell : UICollectionViewCell
{
    WCFinderFeedImageView *_imageContainer;
    UIImage *_bindImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *bindImage; // @synthesize bindImage=_bindImage;
@property(retain, nonatomic) WCFinderFeedImageView *imageContainer; // @synthesize imageContainer=_imageContainer;
- (struct CGRect)getImageContainerRect;
- (void)setImage:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setUpUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

