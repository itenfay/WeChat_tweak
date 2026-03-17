//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderGameLiveStarterViewModel, MMUIViewController, NSString;

@protocol WCFinderGameLiveListViewControllerDelegate <NSObject>

@optional
- (void)onHeaderAction;
- (void)onSearchAction;
- (void)leftButtonAction;
- (void)onMMLiveStarterViewControllerRepoortWithActionType:(unsigned long long)arg1 gameId:(NSString *)arg2;
- (void)onMMLiveStarterViewControllerStartGameLiveWithViewModel:(MMFinderGameLiveStarterViewModel *)arg1 currentController:(MMUIViewController *)arg2;
@end

