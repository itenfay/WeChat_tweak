//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveAutoTestCheckLogItem : NSObject
{
    unsigned long long _liveId;
    unsigned long long _timestamp;
    NSString *_type;
    NSString *_log;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *log; // @synthesize log=_log;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;

@end

