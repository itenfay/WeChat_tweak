//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OVCCoverDesc : NSObject
{
    unsigned long long _type;
    CDStruct_1b6d18a9 _duration;
}

+ (id)coverDescWithTimelineSnapshotTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2;
+ (id)coverDescWithImageFilePath:(id)arg1 contentCropRegion:(struct CGRect)arg2 duration:(CDStruct_1b6d18a9)arg3;
+ (id)coverDescWithImageFilePath:(id)arg1 duration:(CDStruct_1b6d18a9)arg2;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)initWithType:(unsigned long long)arg1 duration:(CDStruct_1b6d18a9)arg2;

@end

