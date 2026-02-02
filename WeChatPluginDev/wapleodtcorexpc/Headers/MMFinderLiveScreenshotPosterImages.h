//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, UIImage;

@interface MMFinderLiveScreenshotPosterImages : NSObject
{
    UIImage *_screenshot;
    NSArray *_associatedImages;
    NSArray *_primaryImageMaskingDescriptors;
    NSDictionary *_posterImageConfigurations;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *posterImageConfigurations; // @synthesize posterImageConfigurations=_posterImageConfigurations;
@property(retain, nonatomic) NSArray *primaryImageMaskingDescriptors; // @synthesize primaryImageMaskingDescriptors=_primaryImageMaskingDescriptors;
@property(retain, nonatomic) NSArray *associatedImages; // @synthesize associatedImages=_associatedImages;
@property(retain, nonatomic) UIImage *screenshot; // @synthesize screenshot=_screenshot;

@end

