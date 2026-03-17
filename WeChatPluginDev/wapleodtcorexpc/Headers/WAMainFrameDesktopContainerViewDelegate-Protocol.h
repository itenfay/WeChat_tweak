//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WAMainFrameDesktopContainerViewDelegate <NSObject>
- (_Bool)needDisableCommUseAppForSearch;
- (void)notifyWeAppChanged;
- (void)desktopWillExit;
- (void)desktopWillEnter;
- (void)desktopWillEndSearch;
- (void)didEnterWeappSearchPage;
- (void)onSearchPageClickCancel;
- (void)onTapOnSearchButton;
- (void)dragUpToClose;
@end

