//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderSearchHotSpotViewModel;

@protocol WCFinderSearchHotSpotViewModelDelegate <NSObject>

@optional
- (void)onFinderSearchHotSpotVMDataChanged:(WCFinderSearchHotSpotViewModel *)arg1;
@end

