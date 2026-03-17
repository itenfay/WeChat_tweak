//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC11Ultramarine11DiskStorage : _TtCs12_SwiftObject
{
    MISSING_TYPE *$defaultActor;
    MISSING_TYPE *directory;
    MISSING_TYPE *sizeLimit;
    MISSING_TYPE *countLimit;
    MISSING_TYPE *trimRatio;
    MISSING_TYPE *observeTask;
    MISSING_TYPE *fileCountOfLastCheck;
    MISSING_TYPE *diskCostOfLastCheck;
    MISSING_TYPE *fileManager;
}

- (void)scheduleNextSweep;
- (void)doDeepClean;

@end

