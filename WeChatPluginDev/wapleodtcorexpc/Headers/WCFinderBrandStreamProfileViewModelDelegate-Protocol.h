//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderBrandStreamProfileViewModel;

@protocol WCFinderBrandStreamProfileViewModelDelegate <NSObject>
- (void)finderBrandStreamProfileViewModel:(WCFinderBrandStreamProfileViewModel *)arg1 onShowJustWatchTidChangeWithOldTid:(NSString *)arg2;
- (void)finderBrandStreamProfileViewModel:(WCFinderBrandStreamProfileViewModel *)arg1 justWatchBannerStatusFrom:(long long)arg2 to:(long long)arg3;
- (void)finderBrandStreamProfileRequestFailWithErrorCode:(int)arg1;
- (void)finderBrandStreamProfileNoMoreData;
- (void)finderBrandStreamProfileAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)finderBrandStreamProfileReloadAllData;
@end

