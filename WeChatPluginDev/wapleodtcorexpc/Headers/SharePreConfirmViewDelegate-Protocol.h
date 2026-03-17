//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMUIViewControllerDelegate-Protocol.h"

@class SharePreConfirmView;

@protocol SharePreConfirmViewDelegate <MMUIViewControllerDelegate>

@optional
- (void)OnSharePreConfirmViewShowRoomContactSelector:(SharePreConfirmView *)arg1;
- (unsigned long long)OnSharePreConfirmViewGetLoadingType:(SharePreConfirmView *)arg1;
- (void)OnSharePreConfirmViewDidHide:(SharePreConfirmView *)arg1;
- (void)OnSharePreConfirmViewStayAtWeChat:(SharePreConfirmView *)arg1;
- (void)OnSharePreConfirmViewBackToApp:(SharePreConfirmView *)arg1;
- (void)OnSharePreConfirmViewError:(SharePreConfirmView *)arg1;
- (void)OnSharePreConfirmViewCancel:(SharePreConfirmView *)arg1;
- (void)OnSharePreConfirmViewSend:(SharePreConfirmView *)arg1;
@end

