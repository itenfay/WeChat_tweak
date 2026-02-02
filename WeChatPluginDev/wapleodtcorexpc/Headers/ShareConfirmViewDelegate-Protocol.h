//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ShareConfirmView;

@protocol ShareConfirmViewDelegate <NSObject>

@optional
- (void)OnStayAtWeChat:(ShareConfirmView *)arg1;
- (void)OnBackToApp:(ShareConfirmView *)arg1;
- (void)OnError:(ShareConfirmView *)arg1;
- (void)OnCancel:(ShareConfirmView *)arg1;
- (void)OnSend:(ShareConfirmView *)arg1;
@end

