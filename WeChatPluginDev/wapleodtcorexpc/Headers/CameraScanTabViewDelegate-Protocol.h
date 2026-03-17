//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CameraScanTabView;

@protocol CameraScanTabViewDelegate <NSObject>
- (_Bool)isForbidSwitchTabIndex;
- (void)tabView:(CameraScanTabView *)arg1 didSelectTag:(unsigned long long)arg2 fromAction:(long long)arg3;
@end

