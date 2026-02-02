//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class TXCVideoFrameCoords;

@interface TXCTwoInputFilter
{
    TXCVideoFrameCoords *_frameCoords2;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TXCVideoFrameCoords *frameCoords2; // @synthesize frameCoords2=_frameCoords2;
- (id)processVideoFrame:(id)arg1 anotherFrame:(id)arg2;

@end

