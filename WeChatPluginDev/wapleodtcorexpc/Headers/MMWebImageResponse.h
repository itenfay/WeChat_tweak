//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, UIImage;

@interface MMWebImageResponse : NSObject
{
    UIImage *_image;
    NSData *_data;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;

@end

