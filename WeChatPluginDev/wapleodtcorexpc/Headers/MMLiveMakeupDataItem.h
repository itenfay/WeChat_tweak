//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveBeautyBadgeCollection, MMLiveBeautyBadgeItem, NSArray, NSString;

@interface MMLiveMakeupDataItem : NSObject
{
    NSString *_makeupId;
    NSString *_title;
    NSString *_coverColorString;
    NSString *_effectMaterialsFolderPath;
    NSArray *_makeupDetailItems;
    MMLiveBeautyBadgeItem *_badge;
    MMLiveBeautyBadgeCollection *_itemBadges;
    unsigned long long _order;
}

+ (id)defaultNoopItem;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long order; // @synthesize order=_order;
@property(retain, nonatomic) MMLiveBeautyBadgeCollection *itemBadges; // @synthesize itemBadges=_itemBadges;
@property(retain, nonatomic) MMLiveBeautyBadgeItem *badge; // @synthesize badge=_badge;
@property(retain, nonatomic) NSArray *makeupDetailItems; // @synthesize makeupDetailItems=_makeupDetailItems;
@property(retain, nonatomic) NSString *effectMaterialsFolderPath; // @synthesize effectMaterialsFolderPath=_effectMaterialsFolderPath;
@property(retain, nonatomic) NSString *coverColorString; // @synthesize coverColorString=_coverColorString;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *makeupId; // @synthesize makeupId=_makeupId;
- (void)setDetailValueDefault;
- (id)filterValueSaveKey;
@property(readonly, nonatomic) NSString *makeupValueSaveKey;
@property(readonly, nonatomic) _Bool effective;
- (id)init;

@end

