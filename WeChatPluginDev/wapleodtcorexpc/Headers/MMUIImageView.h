//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIImageView.h>

@interface MMUIImageView : UIImageView
{
    _Bool _isTopAlignScaleImage;
    _Bool _isCenterCropScaleImage;
}

@property(nonatomic) _Bool isCenterCropScaleImage; // @synthesize isCenterCropScaleImage=_isCenterCropScaleImage;
@property(nonatomic) _Bool isTopAlignScaleImage; // @synthesize isTopAlignScaleImage=_isTopAlignScaleImage;
- (id)centerCropScaleImage:(id)arg1;
- (id)topAlignScaleImage:(id)arg1;
- (id)scaleImage:(id)arg1;
- (void)setImage:(id)arg1;

@end

