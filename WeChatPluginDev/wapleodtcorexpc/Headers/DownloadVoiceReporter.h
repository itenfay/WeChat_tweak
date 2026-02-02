//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface DownloadVoiceReporter : NSObject
{
    unsigned long long _startTime;
}

+ (id)reporter;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
- (void)reportDownloadEnd:(id)arg1 ret:(int)arg2;
- (void)reportDownloadStart:(id)arg1;

@end

