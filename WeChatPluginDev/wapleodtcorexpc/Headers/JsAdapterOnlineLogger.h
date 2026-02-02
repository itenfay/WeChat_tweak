//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface JsAdapterOnlineLogger : NSObject
{
    struct mutex _mutex;
    scoped_refptr_c1332177 _onlineLogger;
    queue_7efded04 _logQueue;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) scoped_refptr_c1332177 onlineLogger; // @synthesize onlineLogger=_onlineLogger;
@property(nonatomic) queue_7efded04 logQueue; // @synthesize logQueue=_logQueue;
- (void)log:(id)arg1;
- (void)consumeLog;
- (void)appendLog:(id)arg1;
- (void)updateUrl:(id)arg1;
- (id)init;

@end

