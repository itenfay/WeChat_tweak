//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NewLifePlugin;

@interface NewLifeActionHandler : NSObject
{
    _Bool _running;
    NewLifePlugin *_plugin;
    NSString *_commandId;
    CDUnknownBlockType _completion;
    NSString *_handlerId;
}

+ (id)generateHandlerIdForCommand:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(retain, nonatomic) NSString *handlerId; // @synthesize handlerId=_handlerId;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSString *commandId; // @synthesize commandId=_commandId;
@property(nonatomic) __weak NewLifePlugin *plugin; // @synthesize plugin=_plugin;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToHandler:(id)arg1;
- (void)endActionWithEmptyResponse;
- (void)endActionWithResponse:(id)arg1;
- (void)endActionWithError:(id)arg1;
- (void)handleRequest:(id)arg1;
- (void)dealloc;
- (id)initWithCommandId:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

