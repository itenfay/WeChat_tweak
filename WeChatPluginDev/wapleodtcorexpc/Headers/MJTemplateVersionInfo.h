//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MJTemplateVersionInfo : NSObject
{
    unsigned long long _iOSSDKVersionMin;
    unsigned long long _iOSSDKVersionMax;
    unsigned long long _AndroidSDKVersionMin;
    unsigned long long _AndroidSDKVersionMax;
}

+ (void)initialize;
+ (void)PBArrayAdd_AndroidSDKVersionMax;
+ (void)PBArrayAdd_AndroidSDKVersionMin;
+ (void)PBArrayAdd_iOSSDKVersionMax;
+ (void)PBArrayAdd_iOSSDKVersionMin;
@property(nonatomic) unsigned long long AndroidSDKVersionMax; // @synthesize AndroidSDKVersionMax=_AndroidSDKVersionMax;
@property(nonatomic) unsigned long long AndroidSDKVersionMin; // @synthesize AndroidSDKVersionMin=_AndroidSDKVersionMin;
@property(nonatomic) unsigned long long iOSSDKVersionMax; // @synthesize iOSSDKVersionMax=_iOSSDKVersionMax;
@property(nonatomic) unsigned long long iOSSDKVersionMin; // @synthesize iOSSDKVersionMin=_iOSSDKVersionMin;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVersionInfo:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

