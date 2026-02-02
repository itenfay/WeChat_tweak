//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCScheduleItem;
@protocol WCSetScheduleCgiDelegate;

@interface WCSetScheduleCgi
{
    id <WCSetScheduleCgiDelegate> _delegate;
    WCScheduleItem *_handleItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCScheduleItem *handleItem; // @synthesize handleItem=_handleItem;
@property(nonatomic) __weak id <WCSetScheduleCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)removeScheduleItem:(id)arg1;
- (void)removeScheduleRemind:(id)arg1;
- (void)modifyScheduleRemind:(id)arg1 remindDate:(id)arg2;
- (void)addRemindOnceSchedule:(id)arg1 remindDate:(id)arg2;
- (void)addScheduleItem:(id)arg1;
- (id)init;

@end

