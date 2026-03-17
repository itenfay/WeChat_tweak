//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView;

@protocol WCAdDraggableImageViewDelegate <NSObject>
- (struct CGRect)draggableImageViewConvertRect:(struct CGRect)arg1 toView:(UIView *)arg2;
- (void)onDraggableImageViewDidDragToDestArea;
- (void)onDraggableImageViewDidDragEndWithDuration:(unsigned long long)arg1;
- (void)onDraggableImageViewDidBeginToDrag;
@end

