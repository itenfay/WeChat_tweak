//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCImageScrollViewDelegate <NSObject>

@optional
- (void)onFullScreenItemDidDragToRect:(struct CGRect)arg1;
- (void)onFullScreenItemDragLongPressBegin;
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)onDoubleTapWCImageScrollView;
- (void)onSingleTapWCImageScrollView;
@end

