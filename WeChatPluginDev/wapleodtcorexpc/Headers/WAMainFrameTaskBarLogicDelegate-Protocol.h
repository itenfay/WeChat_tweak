//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIView, WAAppItemData, WAMainFrameTaskBarView;

@protocol WAMainFrameTaskBarLogicDelegate <NSObject>

@optional
- (_Bool)tableViewIsDragging;
- (void)willOpenMainListVC;
- (void)setTableViewContentOffset:(struct CGPoint)arg1;
- (UIView *)getLeftBarButton;
- (UIView *)getRightBarButton;
- (_Bool)useWhiteStatusBarColorWhenShown;
- (void)taskBarDidDragUpToClose;
- (WAMainFrameTaskBarView *)getTaskBarView;
- (void)onEnterForeground;
- (void)didOpenWeapp:(WAAppItemData *)arg1 isSuccess:(_Bool)arg2;
- (void)willOpenWeapp:(WAAppItemData *)arg1;
- (void)didRotateToInterfaceOrientation:(long long)arg1;
- (void)willEndSearch;
- (double)getFullScreenHeight;
- (void)onTranslationYChanged:(double)arg1;
- (void)onSearchPageClickCancel;
- (void)didEnterWeappSearchPage;
- (void)onTapOnSearchButton;
- (void)onTapOnFakeRightMenuButton;
- (void)onTapOnFoldButton;
- (void)starDataDidUpdated;
- (void)onTaskBarHeightDidChangeTo:(double)arg1;
- (void)onStarNodeShowStatusDidChangedTo:(_Bool)arg1;
- (void)onDeleteToEmptyTaskBar;
- (void)onEndWhyPullMe;
- (void)onReceiveWhyPullMeTick;
- (void)onReceiveVisibleTick;
- (void)onTaskBarSectionShouldRemove:(NSString *)arg1;
- (void)doUpdateTaskBarData;
- (void)onTaskBarDataUpdatedFromSource:(unsigned long long)arg1;
- (void)onTaskBarDataStartUpdateFromSvr:(unsigned int)arg1;
@end

