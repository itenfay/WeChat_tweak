//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIFont;

@protocol WAAppPageSystemMsgViewDelegate <NSObject>
- (void)onLinkClicked;
- (_Bool)WAAppPageSystemMsgView_isUseLightStyle;
- (UIFont *)fontOfSystemMsg;
@end

