//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCTimelineInputMonitor : NSObject
{
}

+ (long long)getMarkedLengthFromTextView:(id)arg1;
+ (void)input:(id)arg1 didCommit:(id)arg2 withPastedText:(id)arg3;
+ (_Bool)input:(id)arg1 didChange:(id)arg2 withMarkedLength:(long long)arg3;

@end

