//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSDictionary, NSString, _TtC6WeChat16MagicSclFrameSet;

@protocol _TtP6WeChat28MagicSclJsApiContextDelegate_
- (_Bool)setFlutterCanvasMaxFpsWithBizName:(NSString *)arg1 params:(NSDictionary *)arg2;
- (void)removeStartupCoverViewWithInstanceName:(NSString *)arg1 frameSetId:(NSString *)arg2;
- (void)takeCanvasSnapshotWithCanvasId:(unsigned int)arg1 imageBlock:(void (^)(UIImage *))arg2;
- (void)startUpCoverViewReadyWithBizName:(NSString *)arg1 frameSetId:(NSString *)arg2;
- (void)setGestureRectsWithBizName:(NSString *)arg1 frameSetId:(NSString *)arg2 canvasId:(unsigned int)arg3 rects:(NSArray *)arg4;
- (void)reportFrameSetReadyWithFrameSetId:(NSString *)arg1;
- (_TtC6WeChat16MagicSclFrameSet *)getFrameSetWithFrameSetId:(NSString *)arg1;
- (void)setFrameSetStatusWithFrameSetId:(NSString *)arg1 params:(NSDictionary *)arg2;
- (void)setCanvasStatusWithBizName:(NSString *)arg1 frameSetId:(NSString *)arg2 params:(NSDictionary *)arg3;
@end

