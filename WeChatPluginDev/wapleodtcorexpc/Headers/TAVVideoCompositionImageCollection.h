//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface TAVVideoCompositionImageCollection : NSObject
{
    NSArray *_channelImageInfos;
    NSArray *_overlayImages;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *overlayImages; // @synthesize overlayImages=_overlayImages;
@property(copy, nonatomic) NSArray *channelImageInfos; // @synthesize channelImageInfos=_channelImageInfos;

@end

