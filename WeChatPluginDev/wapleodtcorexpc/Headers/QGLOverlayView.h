//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class QGLOverlay;

@interface QGLOverlayView
{
}

- (long long)displayLevel;
- (void)setDisplayLevel:(long long)arg1;
- (int)zIndex;
- (void)setZIndex:(int)arg1;
- (id)initWithOverlay:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) QGLOverlay *overlay; // @dynamic overlay;

@end

