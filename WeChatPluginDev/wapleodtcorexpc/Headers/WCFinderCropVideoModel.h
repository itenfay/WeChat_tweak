//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AVAsset, MMAssetInfo, NSURL;

@interface WCFinderCropVideoModel : NSObject
{
    AVAsset *_avAsset;
    MMAssetInfo *_assetInfo;
    NSURL *_playerURL;
    struct CGSize _playerPreviewSize;
    struct CGSize _screenSize;
    struct CGPoint _videoContentOffset;
    struct CGSize _cropViewSize;
    CDStruct_e83c9415 _timeRange;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize cropViewSize; // @synthesize cropViewSize=_cropViewSize;
@property(nonatomic) struct CGPoint videoContentOffset; // @synthesize videoContentOffset=_videoContentOffset;
@property(retain, nonatomic) NSURL *playerURL; // @synthesize playerURL=_playerURL;
@property(retain, nonatomic) MMAssetInfo *assetInfo; // @synthesize assetInfo=_assetInfo;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(nonatomic) struct CGSize screenSize; // @synthesize screenSize=_screenSize;
@property(nonatomic) struct CGSize playerPreviewSize; // @synthesize playerPreviewSize=_playerPreviewSize;
@property(retain, nonatomic) AVAsset *avAsset; // @synthesize avAsset=_avAsset;

@end

