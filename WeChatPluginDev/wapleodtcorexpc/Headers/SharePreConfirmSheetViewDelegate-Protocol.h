//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class SharePreConfirmSheetView;

@protocol SharePreConfirmSheetViewDelegate <NSObject>

@optional
- (unsigned long long)OnSharePreConfirmSheetViewGetLoadingType:(SharePreConfirmSheetView *)arg1;
- (void)OnSharePreConfirmSheetViewShowRoomContactSelector:(SharePreConfirmSheetView *)arg1;
- (void)OnSharePreConfirmSheetViewStayAtWeChat:(SharePreConfirmSheetView *)arg1;
- (void)OnSharePreConfirmSheetViewBackToApp:(SharePreConfirmSheetView *)arg1;
- (void)OnSharePreConfirmSheetViewClose:(SharePreConfirmSheetView *)arg1;
- (void)OnSharePreConfirmSheetViewCancel:(SharePreConfirmSheetView *)arg1;
- (void)OnSharePreConfirmSheetViewSend:(SharePreConfirmSheetView *)arg1;
@end

