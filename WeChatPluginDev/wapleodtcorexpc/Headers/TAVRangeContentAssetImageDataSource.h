//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAsset, NSString, TAVCachedAssetImageGenerator;

@interface TAVRangeContentAssetImageDataSource : NSObject
{
    AVAsset *_asset;
    double _widthPerSecond;
    TAVCachedAssetImageGenerator *_imageGenerator;
    struct CGSize _imageSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TAVCachedAssetImageGenerator *imageGenerator; // @synthesize imageGenerator=_imageGenerator;
@property(nonatomic) double widthPerSecond; // @synthesize widthPerSecond=_widthPerSecond;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (_Bool)videoRangeContent:(id)arg1 hasCacheAtIndex:(long long)arg2;
- (id)videoRangeContent:(id)arg1 imageAtIndex:(long long)arg2 preferredSize:(struct CGSize)arg3;
- (long long)videoRangeContentViewNumberOfImages:(id)arg1;
- (id)initWithAsset:(id)arg1 videoComposition:(id)arg2 imageSize:(struct CGSize)arg3 widthPerSecond:(double)arg4;
- (id)initWithAsset:(id)arg1 imageSize:(struct CGSize)arg2 widthPerSecond:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

