//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMAssetInfo, OMJClipSegment;

@interface WCVideoProducerEditAssetClipOperation
{
    MMAssetInfo *_assetInfo;
    long long _assetIndex;
    OMJClipSegment *_clipSegment;
    long long _editAssetClipType;
}

- (void).cxx_destruct;
@property(nonatomic) long long editAssetClipType; // @synthesize editAssetClipType=_editAssetClipType;
@property(retain, nonatomic) OMJClipSegment *clipSegment; // @synthesize clipSegment=_clipSegment;
@property(nonatomic) long long assetIndex; // @synthesize assetIndex=_assetIndex;
@property(retain, nonatomic) MMAssetInfo *assetInfo; // @synthesize assetInfo=_assetInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

