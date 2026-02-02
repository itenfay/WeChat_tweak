//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MJTemplateSessionOperation : NSObject
{
    NSString *_sessionKey;
    CDUnknownBlockType _completionHandler;
    long long _status;
    CDUnknownBlockType _statusChangedHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType statusChangedHandler; // @synthesize statusChangedHandler=_statusChangedHandler;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *sessionKey; // @synthesize sessionKey=_sessionKey;
- (id)boundTemplateId;
- (void)didStop;
- (void)start;
- (void)_updateStatus:(long long)arg1;
- (void)clearCompletionHandler;
- (void)dealloc;
- (id)initWithSessionKey:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

