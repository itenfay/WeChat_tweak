//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class OSCPingThread;

@interface OSCWatchdog : NSObject
{
    OSCPingThread *_pingThread;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithThreashold:(double)arg1;

@end

