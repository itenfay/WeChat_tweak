//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface MMFinderLiveScreenshotPosterAssociatedImage : NSObject
{
    NSString *_imageId;
    UIImage *_image;
    long long _layerLevel;
    unsigned long long _layerOrder;
    struct CGRect _normalizedFrame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect normalizedFrame; // @synthesize normalizedFrame=_normalizedFrame;
@property(nonatomic) unsigned long long layerOrder; // @synthesize layerOrder=_layerOrder;
@property(nonatomic) long long layerLevel; // @synthesize layerLevel=_layerLevel;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *imageId; // @synthesize imageId=_imageId;
@property(readonly, nonatomic) long long order;
- (id)init;

@end

