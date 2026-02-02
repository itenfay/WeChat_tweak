//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface CPKeyIncreaseInfo : NSObject
{
    NSString *_cpKey;
    unsigned long long _threadId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long threadId; // @synthesize threadId=_threadId;
@property(retain, nonatomic) NSString *cpKey; // @synthesize cpKey=_cpKey;

@end

