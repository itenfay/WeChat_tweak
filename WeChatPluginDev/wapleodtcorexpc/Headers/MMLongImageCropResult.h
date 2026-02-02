//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIImage;

@interface MMLongImageCropResult : NSObject
{
    UIImage *_croppedImage;
    double _topCroppedRatio;
    double _bottomCroppedRatio;
}

- (void).cxx_destruct;
@property(nonatomic) double bottomCroppedRatio; // @synthesize bottomCroppedRatio=_bottomCroppedRatio;
@property(nonatomic) double topCroppedRatio; // @synthesize topCroppedRatio=_topCroppedRatio;
@property(retain, nonatomic) UIImage *croppedImage; // @synthesize croppedImage=_croppedImage;
- (id)description;

@end

