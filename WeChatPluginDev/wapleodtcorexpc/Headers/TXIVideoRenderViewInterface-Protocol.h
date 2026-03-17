//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TXCDispatchQueue, UIView;
@protocol TXIGlContext, TXIVideoRenderViewDelegate;

@protocol TXIVideoRenderViewInterface <NSObject>
@property(readonly, nonatomic) struct CGSize viewSize;
@property(nonatomic) __weak id <TXIVideoRenderViewDelegate> renderDelegate;
- (void)showFocusViewAtPoint:(struct CGPoint)arg1;
- (void)snapshotWithImageSize:(struct CGSize)arg1 fillMode:(unsigned long long)arg2 rotation:(unsigned long long)arg3 onComplete:(void (^)(UIImage *))arg4;
- (void)render;
- (_Bool)prepareToRender;
- (void)embedViewIn:(UIView *)arg1;
- (id)initWithQueue:(TXCDispatchQueue *)arg1 context:(id <TXIGlContext>)arg2;
@end

