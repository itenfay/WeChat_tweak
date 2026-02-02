//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CBaseEvent, NSDictionary;

@protocol NotifyFromEventDelegate

@optional
- (void)SpeedyNotifyFromEvent:(CBaseEvent *)arg1 Message:(unsigned int)arg2 MessageInfo:(NSDictionary *)arg3;
- (void)NotifyFromEvent:(CBaseEvent *)arg1 Message:(unsigned int)arg2 MessageInfo:(NSDictionary *)arg3;
@end

