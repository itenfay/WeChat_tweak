//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MinimizeTaskOuterContentView;

@protocol MinimizeTaskOuterContentViewDelegate <NSObject>
- (void)onOuterContentViewSizeChanged:(MinimizeTaskOuterContentView *)arg1 toSize:(struct CGSize)arg2;
- (void)onOuterContentViewLongPress:(MinimizeTaskOuterContentView *)arg1;
- (void)onOuterContentViewTap:(MinimizeTaskOuterContentView *)arg1;
@end

