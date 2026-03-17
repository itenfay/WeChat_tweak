//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView;

@protocol EJScreenCanvasDelegate <NSObject>
- (void)onScreenCanvasFrameChanged:(unsigned int)arg1 view:(UIView *)arg2 frame:(struct CGRect)arg3;
- (void)onScreenCanvasDestroyed:(unsigned int)arg1 view:(UIView *)arg2;
- (void)onScreenCanvasCreated:(unsigned int)arg1 view:(UIView *)arg2;
- (UIView *)onCreateScreenCanvas:(unsigned int)arg1 viewId:(int)arg2;
@end

