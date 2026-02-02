//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSNumber, NSString;

@interface WAReportUpdatableMsgActionItem
{
    unsigned int _subscribeState;
    NSString *_shareTicket;
    NSString *_chatName;
    NSString *_fullPagePath;
    unsigned long long _eventId;
    NSNumber *_pushMsgState;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int subscribeState; // @synthesize subscribeState=_subscribeState;
@property(retain, nonatomic) NSNumber *pushMsgState; // @synthesize pushMsgState=_pushMsgState;
@property(nonatomic) unsigned long long eventId; // @synthesize eventId=_eventId;
@property(retain, nonatomic) NSString *fullPagePath; // @synthesize fullPagePath=_fullPagePath;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(retain, nonatomic) NSString *shareTicket; // @synthesize shareTicket=_shareTicket;
- (id)reportString;
- (void)makeSafeString;
- (int)reportID;

@end

