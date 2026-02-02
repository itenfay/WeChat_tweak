//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCFinderFeedBaseViewControllerProtocol-Protocol.h"

@class NSString;

@protocol WCFinderMegaVideoViewModelDelegate <WCFinderFeedBaseViewControllerProtocol>
- (void)showPlayRate;
- (_Bool)canMinimize;
- (void)minimize;
- (unsigned long long)commentScene;
- (void)showErrorToastWithText:(NSString *)arg1;
- (void)showToastWithText:(NSString *)arg1;
- (void)stopLoading;
- (void)showLoadingWithText:(NSString *)arg1;

@optional
- (_Bool)isAuthorViewForMoreOptions;
@end

