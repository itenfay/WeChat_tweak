//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImage;

@interface ScanLicenceBackgroundView : UIView
{
    struct CGRect maskRect;
    UIImage *_leftTopImage;
    UIImage *_rightTopImage;
    UIImage *_leftBottomImage;
    UIImage *_rightBottomImage;
    double _lengthWidthRatio;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1 andTypeRatio:(double)arg2;

@end

