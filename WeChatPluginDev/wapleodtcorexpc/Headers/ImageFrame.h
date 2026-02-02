//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIImage;

@interface ImageFrame : NSObject
{
    UIImage *_image;
    double _duration;
}

+ (id)frameWithImage:(id)arg1 duration:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;

@end

