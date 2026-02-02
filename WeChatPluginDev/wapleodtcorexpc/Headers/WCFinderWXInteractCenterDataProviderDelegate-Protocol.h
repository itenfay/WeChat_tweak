//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderWXInteractCenterDataProviderDelegate <NSObject>

@optional
- (void)onWXInteractCenterDataLoadFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)onWXInteractCenterDataFail;
- (void)onWXInteractCenterDataFetchSuc;
- (void)onWXInteractCenterDataLoadLocal;
@end

