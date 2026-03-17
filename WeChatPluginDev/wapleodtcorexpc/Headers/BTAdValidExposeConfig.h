//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface BTAdValidExposeConfig : NSObject
{
    double _ratio;
    double _time;
}

+ (void)initialize;
+ (void)PBArrayAdd_time;
+ (void)PBArrayAdd_ratio;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) double ratio; // @synthesize ratio=_ratio;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

