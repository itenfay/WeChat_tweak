//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FLTPictureCropInfo : NSObject
{
    double _crop_top;
    double _crop_left;
    double _crop_bottom;
    double _crop_right;
    double _image_width;
    double _image_height;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithCrop_top:(double)arg1 crop_left:(double)arg2 crop_bottom:(double)arg3 crop_right:(double)arg4 image_width:(double)arg5 image_height:(double)arg6;
@property(nonatomic) double image_height; // @synthesize image_height=_image_height;
@property(nonatomic) double image_width; // @synthesize image_width=_image_width;
@property(nonatomic) double crop_right; // @synthesize crop_right=_crop_right;
@property(nonatomic) double crop_bottom; // @synthesize crop_bottom=_crop_bottom;
@property(nonatomic) double crop_left; // @synthesize crop_left=_crop_left;
@property(nonatomic) double crop_top; // @synthesize crop_top=_crop_top;
- (id)toList;

@end

