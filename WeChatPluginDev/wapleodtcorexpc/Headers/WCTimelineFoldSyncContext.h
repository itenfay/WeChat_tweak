//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCTimelineFoldSyncContext : NSObject
{
    unsigned int _foldSectionSize;
    unsigned long long _nearbyFoldId;
    unsigned long long _minIndexId;
}

@property(nonatomic) unsigned int foldSectionSize; // @synthesize foldSectionSize=_foldSectionSize;
@property(nonatomic) unsigned long long minIndexId; // @synthesize minIndexId=_minIndexId;
@property(nonatomic) unsigned long long nearbyFoldId; // @synthesize nearbyFoldId=_nearbyFoldId;
- (id)description;

@end

