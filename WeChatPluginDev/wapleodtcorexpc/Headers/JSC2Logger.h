//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MemoryMappedKV, NSString, WCOSLogger;
@protocol OS_dispatch_source;

@interface JSC2Logger : NSObject
{
    BOOL _placeHolder;
    int _rawLogFD;
    WCOSLogger *_logger;
    NSObject<OS_dispatch_source> *_timer;
    MemoryMappedKV *_mmkv;
    NSString *_rawLogPath;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) BOOL placeHolder; // @synthesize placeHolder=_placeHolder;
@property(nonatomic) int rawLogFD; // @synthesize rawLogFD=_rawLogFD;
@property(copy, nonatomic) NSString *rawLogPath; // @synthesize rawLogPath=_rawLogPath;
@property(retain, nonatomic) MemoryMappedKV *mmkv; // @synthesize mmkv=_mmkv;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) WCOSLogger *logger; // @synthesize logger=_logger;
- (void)saveRawLogOffset:(long long)arg1;
- (long long)readRawLogOffset;
- (void)saveRawLogPath:(id)arg1;
- (id)readRawLogPath;
- (void)processBuffer:(const char *)arg1 size:(unsigned long long)arg2;
- (void)transferPreviousLog:(id)arg1 offset:(long long)arg2;
- (void)routine;
- (void)transferCurrentLog;
- (void)internalStart;
- (void)duplicateStderr;
- (void)start;
- (id)init;

@end

