//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIImage;

@interface MMLocalImageInfo : NSObject
{
    long long _imageDataType;
    UIImage *_image;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) long long imageDataType; // @synthesize imageDataType=_imageDataType;

@end

