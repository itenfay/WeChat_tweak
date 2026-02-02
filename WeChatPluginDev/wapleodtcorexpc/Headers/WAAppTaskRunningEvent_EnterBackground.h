//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAAppTaskReferrerInfo;

@interface WAAppTaskRunningEvent_EnterBackground
{
    long long _mode;
    long long _action;
    WAAppTaskReferrerInfo *_backReferrerInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAAppTaskReferrerInfo *backReferrerInfo; // @synthesize backReferrerInfo=_backReferrerInfo;
@property(nonatomic) long long action; // @synthesize action=_action;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (id)description;
- (unsigned long long)eventType;

@end

