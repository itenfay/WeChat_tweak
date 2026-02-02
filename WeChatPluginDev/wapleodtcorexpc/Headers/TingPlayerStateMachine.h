//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface TingPlayerStateMachine : NSObject
{
    int _status;
    CDUnknownBlockType _statusChangedHandler;
    NSArray *_routes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *routes; // @synthesize routes=_routes;
@property(copy, nonatomic) CDUnknownBlockType statusChangedHandler; // @synthesize statusChangedHandler=_statusChangedHandler;
@property(nonatomic) int status; // @synthesize status=_status;
- (void)reset;
- (void)onEvent:(int)arg1 userInfo:(id)arg2;
- (void)onEvent:(int)arg1;
- (id)init;

@end

