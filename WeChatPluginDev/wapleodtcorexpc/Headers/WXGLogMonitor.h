//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WXGLogMonitor : NSObject
{
    NSString *_lastDate;
}

+ (id)sharedMonitor;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *lastDate; // @synthesize lastDate=_lastDate;
- (void)monitorLogSize;

@end

