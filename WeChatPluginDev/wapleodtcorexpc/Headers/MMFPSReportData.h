//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFPSReportData : NSObject
{
    double _totalTime;
    double _dropFrameTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_dropFrameTime;
+ (void)PBArrayAdd_totalTime;
@property(nonatomic) double dropFrameTime; // @synthesize dropFrameTime=_dropFrameTime;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

