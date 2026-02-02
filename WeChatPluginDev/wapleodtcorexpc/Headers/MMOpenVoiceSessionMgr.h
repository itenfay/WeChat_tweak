//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface MMOpenVoiceSessionMgr : NSObject
{
    NSMutableDictionary *_sessionKeyPool;
    CDUnknownBlockType _currentCGIRequestCallback;
    NSString *_currentRequestAppId;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)sendRequest:(id)arg1 Retry:(int)arg2;
- (void)updateSessionKeyRemote:(id)arg1 privateData:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)add:(id)arg1 sessionKey:(id)arg2 lifeSpan:(unsigned int)arg3;
- (void)reset:(id)arg1;
- (void)get:(id)arg1 privateData:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)init;

@end

