//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class TXCVideoFrameCoords;

@interface TXCThreeInputFilter
{
    TXCVideoFrameCoords *_frameCoords2;
    TXCVideoFrameCoords *_frameCoords3;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TXCVideoFrameCoords *frameCoords3; // @synthesize frameCoords3=_frameCoords3;
@property(retain, nonatomic) TXCVideoFrameCoords *frameCoords2; // @synthesize frameCoords2=_frameCoords2;
- (id)processVideoFrame1:(id)arg1 videoFrame2:(id)arg2 videoFrame3:(id)arg3;

@end

