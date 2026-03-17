//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderBusinessTabModel : NSObject
{
    long long _findRedDotExposeCount;
    long long _findRedDotClickCount;
    long long _lastUpdateTimeStamp;
}

+ (void)initialize;
+ (void)PBArrayAdd_lastUpdateTimeStamp;
+ (void)PBArrayAdd_findRedDotClickCount;
+ (void)PBArrayAdd_findRedDotExposeCount;
@property(nonatomic) long long lastUpdateTimeStamp; // @synthesize lastUpdateTimeStamp=_lastUpdateTimeStamp;
@property(nonatomic) long long findRedDotClickCount; // @synthesize findRedDotClickCount=_findRedDotClickCount;
@property(nonatomic) long long findRedDotExposeCount; // @synthesize findRedDotExposeCount=_findRedDotExposeCount;
- (void)cleanCount;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

