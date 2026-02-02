//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAsset, NSMutableArray;
@protocol WCFinderRedPacketCropSliderModelDelegate;

@interface WCFinderRedPacketCropSliderModel : NSObject
{
    _Bool _isLoadingImg;
    id <WCFinderRedPacketCropSliderModelDelegate> _delegate;
    AVAsset *_asset;
    double _videoDuration;
    NSMutableArray *_thumbImages;
}

+ (double)shareTimeSecondsInterval;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *thumbImages; // @synthesize thumbImages=_thumbImages;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) _Bool isLoadingImg; // @synthesize isLoadingImg=_isLoadingImg;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) __weak id <WCFinderRedPacketCropSliderModelDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)numnerOfItems;
- (void)loadAssetByShareSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithAsset:(id)arg1;

@end

