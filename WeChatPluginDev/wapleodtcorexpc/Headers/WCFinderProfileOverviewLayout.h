//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCFinderProfileOverviewLayout : NSObject
{
    long long _secType;
    NSArray *_layouts;
}

+ (void)initialize;
+ (void)PBArrayAdd_layouts;
+ (void)PBArrayAdd_secType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *layouts; // @synthesize layouts=_layouts;
@property(nonatomic) long long secType; // @synthesize secType=_secType;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

