//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIImage;

@interface MVImage : NSObject
{
    UIImage *_image;
}

+ (struct __CVBuffer *)CVPixelBufferRefFromUiImage:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;

@end

