//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WAWebViewMutiFuncMenuView;

@protocol WAWebViewMutiFuncMenuViewDataSource <NSObject>

@optional
- (NSString *)getAlertTitleWithFuncMenuView:(WAWebViewMutiFuncMenuView *)arg1;
- (NSString *)getWeAppNameWithFuncMenuView:(WAWebViewMutiFuncMenuView *)arg1;
- (_Bool)shouldShowAlertTitleViewEntryBtnForMultiFuncMenuView:(WAWebViewMutiFuncMenuView *)arg1;
- (_Bool)shouldShowAlertTitleViewForMultiFuncMenuView:(WAWebViewMutiFuncMenuView *)arg1;
- (unsigned long long)leftButtonTypeForMultiFuncMenuView:(WAWebViewMutiFuncMenuView *)arg1;
@end

