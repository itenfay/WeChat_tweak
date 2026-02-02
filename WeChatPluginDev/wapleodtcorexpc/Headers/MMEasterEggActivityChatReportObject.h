//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMEasterEggActivityChatReportObject : NSObject
{
    NSString *_sessionId;
    NSString *_keyword;
    unsigned long long _isChatRoom;
    NSString *_userName;
    unsigned long long _isReceiver;
    unsigned long long _effectType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long effectType; // @synthesize effectType=_effectType;
@property(nonatomic) unsigned long long isReceiver; // @synthesize isReceiver=_isReceiver;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) unsigned long long isChatRoom; // @synthesize isChatRoom=_isChatRoom;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void)reportEggJoinActionWithKeyword:(id)arg1;
- (void)reportTriggerWithAllKeyWords:(id)arg1;
- (void)reportChatAction:(unsigned long long)arg1 keyword:(id)arg2 extendString:(id)arg3 allKeyWords:(id)arg4;
- (void)reportChatAction:(unsigned long long)arg1 extendString:(id)arg2;
- (void)reportChatAction:(unsigned long long)arg1;
- (void)setupKeyword:(id)arg1 userName:(id)arg2 isChatRoom:(long long)arg3 isReceiver:(long long)arg4 effectType:(long long)arg5;
- (void)setupSessionId:(id)arg1;

@end

