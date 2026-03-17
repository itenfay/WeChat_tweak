//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSSet, NSString, WCMomentsContactTagSearchViewController;

@protocol WCMomentsContactTagSearchViewControllerDelegate <NSObject>
- (void)onSearchViewControllerDidCancelItemClick;
- (void)searchViewController:(WCMomentsContactTagSearchViewController *)arg1 didSelectTagDataSet:(NSSet *)arg2 multiSelectedFlag:(_Bool)arg3;
- (NSArray *)searchViewController:(WCMomentsContactTagSearchViewController *)arg1 searchWithQuery:(NSString *)arg2;
@end

