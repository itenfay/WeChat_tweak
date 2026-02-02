//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MinimizeTaskContainerInfo, NSString;

@interface OuterContentInfo : NSObject
{
    NSString *_taskKey;
    MinimizeTaskContainerInfo *_contentInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MinimizeTaskContainerInfo *contentInfo; // @synthesize contentInfo=_contentInfo;
@property(retain, nonatomic) NSString *taskKey; // @synthesize taskKey=_taskKey;

@end

