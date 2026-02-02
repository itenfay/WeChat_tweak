//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class CALayer, UIImage;

@interface MJThumbnailTileCell : UICollectionViewCell
{
    long long _taskID;
    UIImage *_image;
    CALayer *_imageLayer;
    struct CGSize _imageSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) long long taskID; // @synthesize taskID=_taskID;
- (id)initWithFrame:(struct CGRect)arg1;

@end

