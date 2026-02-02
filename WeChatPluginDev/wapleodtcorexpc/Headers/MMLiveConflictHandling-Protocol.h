//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveTask, NSArray, NSIndexPath, NSString, UINavigationController;

@protocol MMLiveConflictHandling <NSObject>
- (_Bool)handleConflictForEnableHomePageTransitionContentVMs:(NSArray *)arg1 exportIds:(NSArray *)arg2 selectedIndex:(NSIndexPath *)arg3 navigationController:(UINavigationController *)arg4 tabType:(long long)arg5 commentScene:(int)arg6;
- (_Bool)handleConflictWithNewFinderLiveContentVMs:(NSArray *)arg1 exportIds:(NSArray *)arg2 selectedIndex:(NSIndexPath *)arg3 navigationController:(UINavigationController *)arg4 tabType:(long long)arg5 commentScene:(int)arg6 replayEntryType:(NSString *)arg7;
- (_Bool)handleConflictWithNewLive:(MMLiveTask *)arg1 navigationController:(UINavigationController *)arg2;
- (_Bool)resolveExternalConflicts;
@end

