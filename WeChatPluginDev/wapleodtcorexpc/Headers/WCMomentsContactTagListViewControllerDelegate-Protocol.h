//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSOrderedSet, NSString, WCMomentsContactTagListViewController;

@protocol WCMomentsContactTagListViewControllerDelegate <NSObject>
- (void)contactTagListViewController:(WCMomentsContactTagListViewController *)arg1 didSelectContactTag:(NSOrderedSet *)arg2;

@optional
- (void)contactTagListViewControllerDidEndSearchWithDone:(_Bool)arg1 selectedCount:(unsigned long long)arg2 multiSelectedFlag:(_Bool)arg3;
- (void)contactTagListViewControllerCancelSelect:(WCMomentsContactTagListViewController *)arg1;
- (_Bool)contactTagListViewController:(WCMomentsContactTagListViewController *)arg1 shouldSelectContactTag:(NSString *)arg2;
@end

