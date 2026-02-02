//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveCommentBaseContentView;

@protocol MMFinderLiveCommentBaseContentDelegate <NSObject>

@optional
- (void)onHandleChangeToContentBox:(unsigned int)arg1;
- (void)onHandleVerticalDragInteractiveEnded:(double)arg1 speed:(struct CGPoint)arg2 fromContentView:(MMFinderLiveCommentBaseContentView *)arg3;
- (void)onHandleVerticalDragInteractiveChanged:(double)arg1 speed:(struct CGPoint)arg2 fromContentView:(MMFinderLiveCommentBaseContentView *)arg3;
- (void)onHandleHorizontalDragInteractiveEnded:(double)arg1 speed:(struct CGPoint)arg2 fromContentView:(MMFinderLiveCommentBaseContentView *)arg3;
- (void)onHandleHorizontalDragInteractiveChanged:(double)arg1 fromContentView:(MMFinderLiveCommentBaseContentView *)arg2;
- (_Bool)finderLiveCommentContentViewCanDragHorizontally:(MMFinderLiveCommentBaseContentView *)arg1;
@end

