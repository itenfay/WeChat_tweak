//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel;

@interface MMFinderLiveGesturePageSheetItemCell : UICollectionViewCell
{
    UIImageView *_thumbnailView;
    UILabel *_nameLabel;
}

+ (id)reuseId;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
- (void)layoutSubviews;
- (void)updateWithGesture:(id)arg1 enabled:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

