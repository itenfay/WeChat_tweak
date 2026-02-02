//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class QGLOverlay, QOverlayObject;

@protocol QGLOverlayDelegate <NSObject>

@optional
- (void)glOverlay:(QGLOverlay *)arg1 loadStatus:(long long)arg2 withProgress:(double)arg3;
- (void)glOverlay:(QGLOverlay *)arg1 didTap:(QOverlayObject *)arg2;
@end

