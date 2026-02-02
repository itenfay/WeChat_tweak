//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol TXILocalVideoRenderer;

@protocol TXILocalVideoRendererDelegate <NSObject>
- (void)videoRenderer:(id <TXILocalVideoRenderer>)arg1 onPinchScale:(double)arg2;
- (void)videoRenderer:(id <TXILocalVideoRenderer>)arg1 onTouchPoint:(struct CGPoint)arg2;
@end

