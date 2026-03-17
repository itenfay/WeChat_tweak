//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface VideoEncodeTaskParams : NSObject
{
    _Bool _isHighPriority;
    _Bool _isTaskReplicable;
    _Bool _keepsProcessInBackground;
    _Bool _isAutoRetryEnabled;
}

@property(nonatomic) _Bool isAutoRetryEnabled; // @synthesize isAutoRetryEnabled=_isAutoRetryEnabled;
@property(nonatomic) _Bool keepsProcessInBackground; // @synthesize keepsProcessInBackground=_keepsProcessInBackground;
@property(nonatomic) _Bool isTaskReplicable; // @synthesize isTaskReplicable=_isTaskReplicable;
@property(nonatomic) _Bool isHighPriority; // @synthesize isHighPriority=_isHighPriority;

@end

