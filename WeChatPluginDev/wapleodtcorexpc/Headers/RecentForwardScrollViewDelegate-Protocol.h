//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact;

@protocol RecentForwardScrollViewDelegate <NSObject>
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(CContact *)arg1;

@optional
- (void)finishDelectChatNewEditModel;
- (void)startDelectChatNewEditModel;
@end

