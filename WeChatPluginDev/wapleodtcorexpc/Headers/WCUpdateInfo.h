//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UUIDInfo;

@interface WCUpdateInfo : NSObject
{
    unsigned int _NewClientVersion;
    unsigned int _LogLevel;
    UUIDInfo *_uuidInfo;
    NSString *_pid;
    NSString *_minIOSVersion;
    NSString *_maxIOSVersion;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *maxIOSVersion; // @synthesize maxIOSVersion=_maxIOSVersion;
@property(retain, nonatomic) NSString *minIOSVersion; // @synthesize minIOSVersion=_minIOSVersion;
@property(retain, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(nonatomic) unsigned int LogLevel; // @synthesize LogLevel=_LogLevel;
@property(nonatomic) unsigned int NewClientVersion; // @synthesize NewClientVersion=_NewClientVersion;
@property(retain, nonatomic) UUIDInfo *uuidInfo; // @synthesize uuidInfo=_uuidInfo;

@end

