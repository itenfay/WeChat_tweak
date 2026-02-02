//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveBeautyBadgeCollection, MMLiveBeautyBadgeItem, NSArray, NSString;

@interface MMLiveBeautySuite : NSObject
{
    _Bool _applyBlurring;
    NSString *_suiteId;
    NSString *_displayName;
    NSString *_colorHexString;
    MMLiveBeautyBadgeItem *_badge;
    NSArray *_itemGroups;
    NSArray *_items;
    NSArray *_exclusiveGroups;
    MMLiveBeautyBadgeCollection *_itemBadges;
    NSString *_resourcesPath;
    unsigned long long _order;
}

+ (id)equivalentSuiteIdForLegacyType:(unsigned long long)arg1;
+ (id)suiteInJsonDictionary:(id)arg1 fromLocalDirectory:(id)arg2 badges:(id)arg3 isLowSpecDevice:(_Bool)arg4;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long order; // @synthesize order=_order;
@property(retain, nonatomic) NSString *resourcesPath; // @synthesize resourcesPath=_resourcesPath;
@property(retain, nonatomic) MMLiveBeautyBadgeCollection *itemBadges; // @synthesize itemBadges=_itemBadges;
@property(retain, nonatomic) NSArray *exclusiveGroups; // @synthesize exclusiveGroups=_exclusiveGroups;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSArray *itemGroups; // @synthesize itemGroups=_itemGroups;
@property(retain, nonatomic) MMLiveBeautyBadgeItem *badge; // @synthesize badge=_badge;
@property(nonatomic) _Bool applyBlurring; // @synthesize applyBlurring=_applyBlurring;
@property(retain, nonatomic) NSString *colorHexString; // @synthesize colorHexString=_colorHexString;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *suiteId; // @synthesize suiteId=_suiteId;
- (id)legacySaveKey;
@property(readonly, nonatomic) _Bool effective;

@end

