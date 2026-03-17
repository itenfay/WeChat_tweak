//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "BaseMsgContentDelgate-Protocol.h"

@class NSData;

@protocol WASessionContentDelegate <BaseMsgContentDelgate>
- (_Bool)isFromBusiness;
- (void)onClickTitle;
- (void)onSessionContentViewDidBePoped;
- (void)onClickQuickSendSessionMsgBtn:(NSData *)arg1;
- (void)onHideQuickSendSessionMsgBtn;
@end

