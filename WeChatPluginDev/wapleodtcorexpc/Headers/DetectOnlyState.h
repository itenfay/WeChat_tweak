//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface DetectOnlyState
{
    _Bool needBigFaceMode;
    struct YtFaceDetParam param;
    struct YTFaceDetection *detector;
}

- (id).cxx_construct;
- (void)update:(struct Mat)arg1 withTimeStamp:(unsigned long long)arg2;
- (void)reset;
- (void)unload;
- (void)loadWithName:(id)arg1 withSDKConfigData:(id)arg2;

@end

