//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderSlideUpGuideExposureInfo : NSObject
{
    int _commentScene;
    unsigned long long _exposureTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_exposureTime;
+ (void)PBArrayAdd_commentScene;
@property(nonatomic) unsigned long long exposureTime; // @synthesize exposureTime=_exposureTime;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
- (id)getPBPropertyTable;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

