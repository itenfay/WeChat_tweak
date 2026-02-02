//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface V2TXLiveLogConfig : NSObject
{
    _Bool _enableObserver;
    _Bool _enableConsole;
    _Bool _enableLogFile;
    long long _logLevel;
    NSString *_logPath;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *logPath; // @synthesize logPath=_logPath;
@property(nonatomic) _Bool enableLogFile; // @synthesize enableLogFile=_enableLogFile;
@property(nonatomic) _Bool enableConsole; // @synthesize enableConsole=_enableConsole;
@property(nonatomic) _Bool enableObserver; // @synthesize enableObserver=_enableObserver;
@property(nonatomic) long long logLevel; // @synthesize logLevel=_logLevel;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

