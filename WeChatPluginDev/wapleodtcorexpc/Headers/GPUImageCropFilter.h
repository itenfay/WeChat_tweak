//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface GPUImageCropFilter
{
    float cropTextureCoordinates[8];
    struct CGSize originallySuppliedInputSize;
    struct CGSize _outFrameSize;
    struct CGRect _cropRegion;
}

@property(nonatomic) struct CGSize outFrameSize; // @synthesize outFrameSize=_outFrameSize;
@property(nonatomic) struct CGRect cropRegion; // @synthesize cropRegion=_cropRegion;
- (struct CGSize)outputFrameSize;
- (struct CGSize)sizeOfFBO;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)calculateCropTextureCoordinates;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (id)init;
- (id)initWithCropRegion:(struct CGRect)arg1;

@end

