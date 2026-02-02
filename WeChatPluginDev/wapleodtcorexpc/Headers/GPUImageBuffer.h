//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface GPUImageBuffer
{
    NSMutableArray *bufferedFramebuffers;
    unsigned long long _bufferSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long bufferSize; // @synthesize bufferSize=_bufferSize;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)dealloc;
- (id)init;

@end

