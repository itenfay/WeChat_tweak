//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSURL, UIImage;

@interface QTileOverlayInternalBitmap : NSObject
{
    UIImage *_image;
    NSURL *_URL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) struct TMBitmapContext *bitmap;

@end

