//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "RoomContactSelectDelegate-Protocol.h"

@class NSArray;

@protocol MultiRoomContactSelectViewControllerDelegate <RoomContactSelectDelegate>

@optional
- (void)onMultiSelectContactCancel;
- (void)onMultiSelectContactReturn:(NSArray *)arg1;
@end

