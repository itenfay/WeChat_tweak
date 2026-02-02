//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMAsset, UIImage, WCPlayerPlayArgs;

@interface WCImageMaterial : NSObject
{
    UIImage *_image;
    MMAsset *_asset;
    WCPlayerPlayArgs *_playerArgs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPlayerPlayArgs *playerArgs; // @synthesize playerArgs=_playerArgs;
@property(retain, nonatomic) MMAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;

@end

