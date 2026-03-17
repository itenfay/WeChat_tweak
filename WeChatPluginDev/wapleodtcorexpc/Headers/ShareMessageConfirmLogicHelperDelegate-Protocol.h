//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ShareMessageConfirmLogicHelper;

@protocol ShareMessageConfirmLogicHelperDelegate <NSObject>

@optional
- (void)OnStayAtWeChat:(ShareMessageConfirmLogicHelper *)arg1;
- (void)OnBackTo3rdApp:(ShareMessageConfirmLogicHelper *)arg1;
- (void)OnSendMessageCancel:(ShareMessageConfirmLogicHelper *)arg1;
- (void)OnSendMessageFail:(ShareMessageConfirmLogicHelper *)arg1 WithError:(unsigned long long)arg2;
- (void)OnSendMessageOK:(ShareMessageConfirmLogicHelper *)arg1;
@end

