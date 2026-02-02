//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveAutoSwipeInfo, MMLiveTaskId;

@interface MMLivePivotAutoSwipeInfo : NSObject
{
    FinderLiveAutoSwipeInfo *_info;
    MMLiveTaskId *_taskId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) FinderLiveAutoSwipeInfo *info; // @synthesize info=_info;

@end

