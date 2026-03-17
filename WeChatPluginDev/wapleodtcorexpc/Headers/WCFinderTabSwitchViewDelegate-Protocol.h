//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSIndexSet, WCFinderTabSwitchView;

@protocol WCFinderTabSwitchViewDelegate <NSObject>

@optional
- (void)onTabSwitchView:(WCFinderTabSwitchView *)arg1 selectedIndexChangedFrom:(long long)arg2 to:(long long)arg3;
- (void)onTabSwtichView:(WCFinderTabSwitchView *)arg1 exposeItems:(NSIndexSet *)arg2;
- (_Bool)onTabSwitchViewUserSelectIdx:(long long)arg1 oldIdx:(long long)arg2 animated:(_Bool)arg3 context:(void *)arg4 completion:(void (^)(void))arg5;
@end

