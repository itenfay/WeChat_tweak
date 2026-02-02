//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WAAppStateChangedContextInfo;

@interface WAAppPlatformStateChangedContext
{
    unsigned int _changeReason;
    unsigned long long _platformType;
    unsigned long long _changeDirection;
    WAAppStateChangedContextInfo *_contextInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAAppStateChangedContextInfo *contextInfo; // @synthesize contextInfo=_contextInfo;
@property(nonatomic) unsigned int changeReason; // @synthesize changeReason=_changeReason;
@property(nonatomic) unsigned long long changeDirection; // @synthesize changeDirection=_changeDirection;
@property(nonatomic) unsigned long long platformType; // @synthesize platformType=_platformType;
- (id)description;

@end

