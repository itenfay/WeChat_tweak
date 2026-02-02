//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OMJILinkContextParamsSelfManaged : NSObject
{
    _Bool _useDebugServer;
    unsigned long long _sessionModuleType;
    NSString *_debugServerIP;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *debugServerIP; // @synthesize debugServerIP=_debugServerIP;
@property(readonly, nonatomic) _Bool useDebugServer; // @synthesize useDebugServer=_useDebugServer;
@property(readonly, nonatomic) unsigned long long sessionModuleType; // @synthesize sessionModuleType=_sessionModuleType;
- (id)initWithSessionModuleType:(unsigned long long)arg1 useDebugServer:(_Bool)arg2 debugServerIP:(id)arg3;

@end

