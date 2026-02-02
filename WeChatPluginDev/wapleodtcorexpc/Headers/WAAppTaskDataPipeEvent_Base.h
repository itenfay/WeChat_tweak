//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, WAAppTask;

@interface WAAppTaskDataPipeEvent_Base : NSObject
{
    WAAppTask *_weakTask;
    NSDictionary *_dicData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *dicData; // @synthesize dicData=_dicData;
@property(nonatomic) __weak WAAppTask *weakTask; // @synthesize weakTask=_weakTask;
- (id)description;
- (unsigned long long)eventType;

@end

