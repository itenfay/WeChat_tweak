//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCVideoRender : NSObject
{
    _Bool _isSharedScreenData;
}

@property(nonatomic) _Bool isSharedScreenData; // @synthesize isSharedScreenData=_isSharedScreenData;
- (_Bool)isTouchInsideViewWithPoint:(struct CGPoint)arg1;
@property(nonatomic) float backDegrees;
@property(readonly, nonatomic) float defaultBackDegrees;
@property(nonatomic) float frontDegrees;
@property(readonly, nonatomic) float defaultFrontDegrees;
- (void)updateOrientation;
- (void)cameraFrontMode:(_Bool)arg1;
- (id)getRenderView;
- (void)changeFrame:(struct CGRect)arg1;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3 FitView:(_Bool)arg4;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;

@end

