//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAReportOperateRealtimeItem
{
    unsigned int _itemId;
    unsigned int _itemType;
    unsigned int _priority;
    unsigned int _retryInterval;
    unsigned int _retryCount;
    unsigned int _action;
}

@property(nonatomic) unsigned int action; // @synthesize action=_action;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) unsigned int retryInterval; // @synthesize retryInterval=_retryInterval;
@property(nonatomic) unsigned int priority; // @synthesize priority=_priority;
@property(nonatomic) unsigned int itemType; // @synthesize itemType=_itemType;
@property(nonatomic) unsigned int itemId; // @synthesize itemId=_itemId;
- (id)reportString;
- (int)reportID;

@end

