//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCPlayerReporter;

@interface WCResourceLoaderMoniter : NSObject
{
    unsigned int _currentSameCount;
    unsigned int _threshold;
    unsigned int _taskId;
    long long _currentRequestLength;
    WCPlayerReporter *_reporter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPlayerReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) unsigned int taskId; // @synthesize taskId=_taskId;
@property(nonatomic) unsigned int threshold; // @synthesize threshold=_threshold;
@property(nonatomic) unsigned int currentSameCount; // @synthesize currentSameCount=_currentSameCount;
@property(nonatomic) long long currentRequestLength; // @synthesize currentRequestLength=_currentRequestLength;
- (void)checkData:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3;
- (_Bool)shouldLowerPriorityWithLoadingRequest:(id)arg1;
- (id)init;

@end

