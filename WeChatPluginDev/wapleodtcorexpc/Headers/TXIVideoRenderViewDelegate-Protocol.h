//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol TXIVideoRenderViewInterface;

@protocol TXIVideoRenderViewDelegate <NSObject>
- (void)renderView:(id <TXIVideoRenderViewInterface>)arg1 onPinchScale:(double)arg2;
- (void)renderView:(id <TXIVideoRenderViewInterface>)arg1 onTouchPoint:(struct CGPoint)arg2;
- (void)renderView:(id <TXIVideoRenderViewInterface>)arg1 onSizeChange:(struct CGSize)arg2;
@end

