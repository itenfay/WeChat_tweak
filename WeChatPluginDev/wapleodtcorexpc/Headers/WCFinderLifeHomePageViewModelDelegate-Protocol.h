//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, WCFinderLifeHomePageViewModel;

@protocol WCFinderLifeHomePageViewModelDelegate <NSObject>
- (void)onPageViewModelScrollToTop:(WCFinderLifeHomePageViewModel *)arg1;
- (void)onPageViewModelStateChanged:(WCFinderLifeHomePageViewModel *)arg1;
- (void)onPageViewModel:(WCFinderLifeHomePageViewModel *)arg1 dataChanged:(NSArray *)arg2;
- (void)onPageViewModel:(WCFinderLifeHomePageViewModel *)arg1 requestDataFinish:(_Bool)arg2;
@end

