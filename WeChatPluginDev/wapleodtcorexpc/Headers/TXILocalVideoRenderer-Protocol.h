//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "TXIVideoRenderer-Protocol.h"

@class NSValue, TXCGSensor, UIView;
@protocol TXILocalVideoRendererDelegate;

@protocol TXILocalVideoRenderer <TXIVideoRenderer>
@property(readonly, nonatomic) TXCGSensor *gSensor;
@property(readonly, nonatomic) __weak UIView *superView;
@property(nonatomic) __weak id <TXILocalVideoRendererDelegate> rendererDelegate;
- (struct CGRect)renderRect;
- (void)showFocusViewAtPoint:(struct CGPoint)arg1;
- (NSValue *)convertPointToVideoFrame:(struct CGPoint)arg1 isFrontCamera:(_Bool)arg2;
- (void)snapshotOnComplete:(void (^)(UIImage *))arg1;
- (void)clearScreen;
- (void)clearRenderTask;
- (void)stop:(_Bool)arg1;
- (void)start;
@end

