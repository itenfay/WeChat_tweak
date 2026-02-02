//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface OMJDimensionLevel : NSObject
{
    unsigned long long _level;
}

@property(readonly, nonatomic) unsigned long long level; // @synthesize level=_level;
- (id)description;
- (id)initWithLevel:(unsigned long long)arg1;

@end

