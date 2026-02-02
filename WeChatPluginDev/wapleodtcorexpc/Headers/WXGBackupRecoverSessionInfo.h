//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WXGBackupRecoverSessionInfo : NSObject
{
    NSString *_sessionName;
    unsigned long long _startTime;
    unsigned long long _endTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *sessionName; // @synthesize sessionName=_sessionName;

@end

