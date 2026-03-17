//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCMomentsPlayerSourceController, WCPlayerView;

@protocol WCMomentsPlayerSourceControllerDataSource <NSObject>

@optional
- (WCPlayerView *)currentPlayerViewForPlayerSourceController:(WCMomentsPlayerSourceController *)arg1;
@end

