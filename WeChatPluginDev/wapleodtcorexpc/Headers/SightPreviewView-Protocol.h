//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSObject;
@protocol SightQRCodeScannerDelegate;

@protocol SightPreviewView
- (void)setQRFrameEnable:(_Bool)arg1;
- (_Bool)supportQRFrame;
- (void)forceFocusAnimAtPoint:(struct CGPoint)arg1;
- (void)startFocusAnimAtPoint:(struct CGPoint)arg1;
- (struct CGPoint)transformPointInView:(struct CGPoint)arg1;

@optional
- (void)setReady;
- (_Bool)isReady;
- (void)setQRScannerDelegate:(NSObject<SightQRCodeScannerDelegate> *)arg1;
@end

