//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAPackageSweeperExtendKeepDurationMark : NSObject
{
    unsigned int _expirationTimeStamp;
    unsigned int _aboveVersion;
}

+ (void)initialize;
+ (void)PBArrayAdd_aboveVersion;
+ (void)PBArrayAdd_expirationTimeStamp;
@property(nonatomic) unsigned int aboveVersion; // @synthesize aboveVersion=_aboveVersion;
@property(nonatomic) unsigned int expirationTimeStamp; // @synthesize expirationTimeStamp=_expirationTimeStamp;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

