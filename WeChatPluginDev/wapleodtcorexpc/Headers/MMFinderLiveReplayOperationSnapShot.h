//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMFinderLiveReplayOperationSnapShot : NSObject
{
    unsigned long long _timeIndex;
}

@property(nonatomic) unsigned long long timeIndex; // @synthesize timeIndex=_timeIndex;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)snapShotKey;

@end

