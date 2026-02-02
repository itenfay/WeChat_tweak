//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FLTRect;

@interface FLTPhotoCropInfo : NSObject
{
    double _translateX;
    double _translateY;
    double _scale;
    FLTRect *_cropArea;
    double _imageWidth;
    double _imageHeight;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithTranslateX:(double)arg1 translateY:(double)arg2 scale:(double)arg3 cropArea:(id)arg4 imageWidth:(double)arg5 imageHeight:(double)arg6;
- (void).cxx_destruct;
@property(nonatomic) double imageHeight; // @synthesize imageHeight=_imageHeight;
@property(nonatomic) double imageWidth; // @synthesize imageWidth=_imageWidth;
@property(retain, nonatomic) FLTRect *cropArea; // @synthesize cropArea=_cropArea;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double translateY; // @synthesize translateY=_translateY;
@property(nonatomic) double translateX; // @synthesize translateX=_translateX;
- (id)toList;

@end

