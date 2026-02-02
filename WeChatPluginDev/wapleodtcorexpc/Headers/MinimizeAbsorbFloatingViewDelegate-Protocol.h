//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MinimizeTaskContainerMoveContext, MinimizeTaskData, NSString;

@protocol MinimizeAbsorbFloatingViewDelegate <NSObject>
- (void)onAbsorbFloatingViewOuterContentTap:(NSString *)arg1;
- (void)onAbsorbFloatingViewTap;

@optional
- (struct CGRect)getLimitedFrameOfOriginFrame:(struct CGRect)arg1;
- (void)onAbsorbFloatingViewFoldStateChange:(_Bool)arg1;
- (void)onAbsorbFloatingViewOuterContentSizeChanged:(struct CGSize)arg1 taskKey:(NSString *)arg2;
- (MinimizeTaskData *)hasMinimizeTask:(NSString *)arg1;
- (void)onAbsorbFloatingViewLongPress:(struct CGPoint)arg1;
- (void)onAbsorbFloatingViewEndResultMoveTo:(struct CGPoint)arg1 moveContext:(MinimizeTaskContainerMoveContext *)arg2;
- (void)onAbsorbFloatingViewMoveEnd:(struct CGPoint)arg1;
- (void)onAbsorbFloatingViewMoveTo:(struct CGPoint)arg1;
- (void)onAbsorbFloatingViewMoveLong;
- (void)onAbsorbFloatingViewBegin:(struct CGPoint)arg1;
@end

