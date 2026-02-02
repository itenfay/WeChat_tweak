//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayFaceHBConfig : NSObject
{
    unsigned int _resourceVersion;
    unsigned int _uiTotalCount;
    unsigned long long _uiTotalMount;
}

+ (void)initialize;
+ (void)PBArrayAdd_uiTotalCount;
+ (void)PBArrayAdd_uiTotalMount;
+ (void)PBArrayAdd_resourceVersion;
@property(nonatomic) unsigned int uiTotalCount; // @synthesize uiTotalCount=_uiTotalCount;
@property(nonatomic) unsigned long long uiTotalMount; // @synthesize uiTotalMount=_uiTotalMount;
@property(nonatomic) unsigned int resourceVersion; // @synthesize resourceVersion=_resourceVersion;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

