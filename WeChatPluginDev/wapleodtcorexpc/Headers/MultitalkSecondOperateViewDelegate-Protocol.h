//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MultitalkSecondOperateViewDelegate <NSObject>
- (int)multitalkSecondOperatePanelLayoutType;
- (unsigned long long)multitalkSecondOperateRoomKey;
- (unsigned long long)multitalkSecondOperateRoomID;
- (void)onMultitalkSecondOperateViewShareScreen;
- (void)onMultitalkSecondOperateViewAddMember;
- (void)onMultitalkSecondOperateViewMinimizeButtonClick;
@end

