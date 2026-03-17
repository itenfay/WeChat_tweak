//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView;

@protocol QOverlayProtocol <NSObject>
- (UIView *)getView;
- (double)glPointRatio;
- (struct CGPoint)glVertexForCoordinate:(struct CLLocationCoordinate2D)arg1;
- (float *)glProjectionMatrix;
- (float *)glViewMatrix;
- (void)makeDirty;
@end

