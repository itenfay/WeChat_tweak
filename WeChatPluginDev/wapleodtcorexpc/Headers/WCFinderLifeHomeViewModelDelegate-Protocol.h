//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderLifeHomePageViewModel, WCFinderLifeHomeViewModel;

@protocol WCFinderLifeHomeViewModelDelegate <NSObject>
- (void)onLifeHomeVM:(WCFinderLifeHomeViewModel *)arg1 selectPage:(WCFinderLifeHomePageViewModel *)arg2;
- (void)onLifeHomeVM:(WCFinderLifeHomeViewModel *)arg1 pageDatasChangedAtIndex:(long long)arg2;
- (void)onLifeHomeVMLocationAuthChanged:(WCFinderLifeHomeViewModel *)arg1;
- (void)onLifeHomeVM:(WCFinderLifeHomeViewModel *)arg1 firstPageFinish:(_Bool)arg2;
@end

