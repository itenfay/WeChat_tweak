//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EKEvent, EKEventStore, NSDictionary, NSString;

@interface WAJSEventHandler_addPhoneCalendar
{
    NSDictionary *_dic;
    EKEventStore *_eventStore;
    EKEvent *_event;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EKEvent *event; // @synthesize event=_event;
@property(retain, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
@property(retain, nonatomic) NSDictionary *dic; // @synthesize dic=_dic;
- (id)eventEditViewControllerDefaultCalendarForNewEvents:(id)arg1;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (id)showEventEdit;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

