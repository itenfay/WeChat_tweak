//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AVAsset;

@interface TAVAVAssetTrackResource
{
    AVAsset *_asset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (id)trackInfoForType:(id)arg1 atIndex:(long long)arg2;
- (id)tracksForType:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAsset:(id)arg1;

@end

