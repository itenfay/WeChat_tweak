//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSThread, WCOSLogger;

@interface JSC2LoggerNew : NSObject
{
    int _pipeReadEnd;
    int _pipeWriteEnd;
    WCOSLogger *_logger;
    NSThread *_thread;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSThread *thread; // @synthesize thread=_thread;
@property(retain, nonatomic) WCOSLogger *logger; // @synthesize logger=_logger;
- (void)processBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (void)threadEntry;
- (void)internalStart;
- (void)start;
- (id)init;

@end

