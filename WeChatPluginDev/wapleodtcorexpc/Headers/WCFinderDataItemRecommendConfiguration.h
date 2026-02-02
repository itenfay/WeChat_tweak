//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, RecommendConfiguration;

@interface WCFinderDataItemRecommendConfiguration : NSObject
{
    _Bool _favRelateListEnable;
    _Bool _favRelateListEnableOnClick;
    _Bool _likeRelateListEnable;
    unsigned long long _maxUnreadCount;
    RecommendConfiguration *_config;
}

+ (id)configurationWithConfig:(id)arg1 isFeedContainVideo:(_Bool)arg2;
+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)PBArrayAdd_likeRelateListEnable;
+ (void)PBArrayAdd_favRelateListEnableOnClick;
+ (void)PBArrayAdd_favRelateListEnable;
+ (void)PBArrayAdd_config;
+ (void)PBArrayAdd_maxUnreadCount;
- (void).cxx_destruct;
@property(nonatomic) _Bool likeRelateListEnable; // @synthesize likeRelateListEnable=_likeRelateListEnable;
@property(nonatomic) _Bool favRelateListEnableOnClick; // @synthesize favRelateListEnableOnClick=_favRelateListEnableOnClick;
@property(nonatomic) _Bool favRelateListEnable; // @synthesize favRelateListEnable=_favRelateListEnable;
@property(retain, nonatomic) RecommendConfiguration *config; // @synthesize config=_config;
@property(nonatomic) unsigned long long maxUnreadCount; // @synthesize maxUnreadCount=_maxUnreadCount;
@property(readonly, copy) NSString *description;
- (id)archivedWCTValue;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

