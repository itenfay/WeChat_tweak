//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WeVisPixelBuffer;

@interface WeVisProcessResult : NSObject
{
    int _outputTexture;
    int _faceTrackRet;
    WeVisPixelBuffer *_pixelBuffer;
    double _processCostTime;
    double _widthScaled;
    double _heightScaled;
}

+ (int)transferFaceTrackX3DRet:(int)arg1;
- (void).cxx_destruct;
@property double heightScaled; // @synthesize heightScaled=_heightScaled;
@property double widthScaled; // @synthesize widthScaled=_widthScaled;
@property double processCostTime; // @synthesize processCostTime=_processCostTime;
@property int faceTrackRet; // @synthesize faceTrackRet=_faceTrackRet;
@property int outputTexture; // @synthesize outputTexture=_outputTexture;
@property(retain) WeVisPixelBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;

@end

