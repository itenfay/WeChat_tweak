//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface BrandServiceDataItem : NSObject
{
    _Bool _hasSetLocation;
    unsigned int _receiveSwitchOffTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_receiveSwitchOffTime;
+ (void)PBArrayAdd_hasSetLocation;
@property(nonatomic) unsigned int receiveSwitchOffTime; // @synthesize receiveSwitchOffTime=_receiveSwitchOffTime;
@property(nonatomic) _Bool hasSetLocation; // @synthesize hasSetLocation=_hasSetLocation;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

