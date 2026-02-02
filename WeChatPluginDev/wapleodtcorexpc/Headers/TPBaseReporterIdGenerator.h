//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TPRecursiveLock;

@interface TPBaseReporterIdGenerator : NSObject
{
    int _instanceID;
    TPRecursiveLock *_lock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) int instanceID; // @synthesize instanceID=_instanceID;
@property(retain, nonatomic) TPRecursiveLock *lock; // @synthesize lock=_lock;
- (int)reporterInstanceBaseID;
- (id)init;

@end

