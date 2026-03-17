//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderPOIRelatedStreamViewModelDelegate <NSObject>

@optional
- (int)feedViewControllerScene;
- (void)onFinderPoiTabListError;
- (void)onFinderPoiHeaderViewNeedRefresh;
@end

