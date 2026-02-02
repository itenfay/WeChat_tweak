//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSNumber, NSValue, TXCVideoFrameCoords;

@interface TXCBaseFilter
{
    TXCVideoFrameCoords *_frameCoords;
    NSNumber *_outputRatio;
    NSValue *_outputSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSValue *outputSize; // @synthesize outputSize=_outputSize;
@property(retain, nonatomic) NSNumber *outputRatio; // @synthesize outputRatio=_outputRatio;
@property(retain, nonatomic) TXCVideoFrameCoords *frameCoords; // @synthesize frameCoords=_frameCoords;
- (struct CGSize)outputSizeFromInputSize:(struct CGSize)arg1;

@end

