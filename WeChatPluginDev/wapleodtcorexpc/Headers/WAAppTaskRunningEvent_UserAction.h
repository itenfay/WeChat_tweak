//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAAppTaskRunningEvent_UserAction
{
    unsigned long long _action;
}

@property(nonatomic) unsigned long long action; // @synthesize action=_action;
- (id)description;
- (unsigned long long)eventType;

@end

