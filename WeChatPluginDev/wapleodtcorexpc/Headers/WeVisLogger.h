//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol WeVisLogAdapterDelegate;

@interface WeVisLogger : NSObject
{
    id <WeVisLogAdapterDelegate> _adapter;
}

+ (id)sharedLogger;
- (void).cxx_destruct;
@property(retain, nonatomic) id <WeVisLogAdapterDelegate> adapter; // @synthesize adapter=_adapter;
- (void)setLogAdapter:(id)arg1;
- (CDUnknownFunctionPointerType)getLogCallback;
- (void)logWithLevel:(long long)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 funcName:(const char *)arg5 message:(id)arg6;

@end

