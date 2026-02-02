//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, TAVVideoCompositionTransitionInfo;

@interface TAVVideoCompositionChannelImageInfo : NSObject
{
    NSArray *_images;
    TAVVideoCompositionTransitionInfo *_transitionInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TAVVideoCompositionTransitionInfo *transitionInfo; // @synthesize transitionInfo=_transitionInfo;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;

@end

