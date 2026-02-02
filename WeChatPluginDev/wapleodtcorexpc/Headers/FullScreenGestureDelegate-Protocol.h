//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol FullScreenGestureDelegate <NSObject>

@optional
- (_Bool)shouldSimultaneouslyWithOtherGesture;
- (_Bool)shouldPreventDragDownCloseGesture;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenLongPressBegin;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenClose;
- (void)onFullScreenSingleTap;
@end

