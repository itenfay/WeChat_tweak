//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DBContactBrand : NSObject
{
    unsigned int _brandSubscriptionSettings;
    NSString *_brandExternalInfo;
    NSString *_brandSubscriptConfigUrl;
    NSString *_brandIconUrl;
    NSString *_certificationInfo;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_certificationInfo;
+ (void)PBArrayAdd_brandIconUrl;
+ (void)PBArrayAdd_brandSubscriptionSettings;
+ (void)PBArrayAdd_brandSubscriptConfigUrl;
+ (void)PBArrayAdd_brandExternalInfo;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *certificationInfo; // @synthesize certificationInfo=_certificationInfo;
@property(retain, nonatomic) NSString *brandIconUrl; // @synthesize brandIconUrl=_brandIconUrl;
@property(nonatomic) unsigned int brandSubscriptionSettings; // @synthesize brandSubscriptionSettings=_brandSubscriptionSettings;
@property(retain, nonatomic) NSString *brandSubscriptConfigUrl; // @synthesize brandSubscriptConfigUrl=_brandSubscriptConfigUrl;
@property(retain, nonatomic) NSString *brandExternalInfo; // @synthesize brandExternalInfo=_brandExternalInfo;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

