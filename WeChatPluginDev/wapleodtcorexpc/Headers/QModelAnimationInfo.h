//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QModelAnimationInfo : NSObject
{
    unsigned long long _index;
    NSString *_name;
    double _duration;
}

- (void).cxx_destruct;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;

@end

