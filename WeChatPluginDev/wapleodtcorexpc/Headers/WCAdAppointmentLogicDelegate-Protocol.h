//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCAdAppointmentLogicDelegate <NSObject>

@optional
- (void)onAppointmentSubmitForType:(int)arg1 isSuccess:(_Bool)arg2;
- (void)onAppointmentUpdatingStatus:(int)arg1;
- (void)onAppointmentConfirmViewDidConfirm;
@end

