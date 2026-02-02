//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, OMJAssetInfo;

@interface OMJClipSegment
{
    unsigned long long _clipType;
    SharedPtr_67e01d81 _backingClipSegment;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) SharedPtr_67e01d81 backingClipSegment; // @synthesize backingClipSegment=_backingClipSegment;
@property(readonly, nonatomic) unsigned long long clipType; // @synthesize clipType=_clipType;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) SharedPtr_3892eb03 backingAsset;
@property(readonly, nonatomic) SharedPtr_def310aa backingClip;
- (void)setRotationMode:(unsigned long long)arg1 shouldCommit:(_Bool)arg2;
@property(readonly, nonatomic) unsigned long long rotationMode;
- (void)setNormalizedCropRect:(struct CGRect)arg1 shouldCommit:(_Bool)arg2;
@property(readonly, nonatomic) struct CGRect normalizedCropRect;
- (_Bool)setTimeRangeInClip:(CDStruct_e83c9415)arg1;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRangeInClip;
@property(readonly, nonatomic) CDStruct_1b6d18a9 clipDuration;
@property(readonly, nonatomic) OMJAssetInfo *assetInfo;
- (id)initWithBackingSegment:(const void *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

