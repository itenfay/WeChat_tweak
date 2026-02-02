//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPayOfflinePayCodeView;

@protocol WCPayOfflinePayCodeViewDelegate <NSObject>
- (void)wcPayOfflinePayCodeViewBeginToShowFullScreen;
- (void)wcPayOfflinePayCodeViewClickViewBarCodeBtn;
- (void)wcPayOfflinePayCodeViewAutoRefreshCountingFinished:(WCPayOfflinePayCodeView *)arg1;
- (void)wcPayOfflinePayCodeViewExitFullScreenAnimationFinished:(WCPayOfflinePayCodeView *)arg1;
@end

