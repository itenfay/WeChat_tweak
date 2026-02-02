//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCGetMainThreadUtil : NSObject
{
}

+ (int)getCurrentMainThreadStack:(CDUnknownBlockType)arg1 withMaxEntries:(unsigned long long)arg2 withThreadCount:(unsigned long long *)arg3;
+ (int)getCurrentMainThreadStack:(CDUnknownBlockType)arg1 withMaxEntries:(unsigned long long)arg2;
+ (void)getCurrentMainThreadStack:(CDUnknownBlockType)arg1;

@end

