//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIView, WAAppItemData, WAMainFrameTaskBarView;

@protocol WAMainFrameTaskBarViewDelegate <NSObject>

@optional
- (_Bool)tableViewIsDragging;
- (void)setTableViewContentOffset:(struct CGPoint)arg1;
- (UIView *)getLeftBarButton;
- (UIView *)getRightBarButton;
- (void)taskBarDidDragUpToClose:(WAMainFrameTaskBarView *)arg1;
- (void)taskBarViewOnEnterBackground:(WAMainFrameTaskBarView *)arg1;
- (void)taskBarViewOnEnterForeground:(WAMainFrameTaskBarView *)arg1;
- (double)getFullScreenHeight;
- (void)taskBarView:(WAMainFrameTaskBarView *)arg1 notifyOnTranslationYChanged:(double)arg2;
- (void)taskBarViewDidTapOnFakeRightMenuButton:(WAMainFrameTaskBarView *)arg1;
- (void)taskBarViewDidTapOnFoldButton:(WAMainFrameTaskBarView *)arg1;
- (void)taskBarViewDidSelectSearch;
- (void)taskBarView:(WAMainFrameTaskBarView *)arg1 didSelectMore:(_Bool)arg2 moreIconWeAppUsername:(NSString *)arg3;
- (void)taskBarView:(WAMainFrameTaskBarView *)arg1 onStarNodeShowStatusDidChangedTo:(_Bool)arg2;
- (void)taskBarView:(WAMainFrameTaskBarView *)arg1 didRotateToInterfaceOrientation:(long long)arg2;
- (void)taskBarView:(WAMainFrameTaskBarView *)arg1 heightDidChangeTo:(double)arg2;
- (void)taskBarView:(WAMainFrameTaskBarView *)arg1 didSelectTaskItem:(WAAppItemData *)arg2 onPosition:(unsigned long long)arg3 isMyWeApp:(_Bool)arg4;
@end

