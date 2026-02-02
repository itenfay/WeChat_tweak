//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ContactSearchMonitor, NSDictionary, NSMutableDictionary;

@interface SearchHelpDataItem : NSObject
{
    _Bool _isMultiKeyword;
    _Bool _hasAllContactLoaded;
    NSDictionary *_dicCacheLabelItem;
    NSDictionary *_dicCacheZoneItem;
    NSDictionary *_dicCacheContact;
    NSDictionary *_dicTopHitMMGroupMember;
    NSMutableDictionary *_dicMultiKeywordMatchFlag;
    ContactSearchMonitor *_monitor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ContactSearchMonitor *monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) NSMutableDictionary *dicMultiKeywordMatchFlag; // @synthesize dicMultiKeywordMatchFlag=_dicMultiKeywordMatchFlag;
@property(nonatomic) _Bool hasAllContactLoaded; // @synthesize hasAllContactLoaded=_hasAllContactLoaded;
@property(nonatomic) _Bool isMultiKeyword; // @synthesize isMultiKeyword=_isMultiKeyword;
@property(retain, nonatomic) NSDictionary *dicTopHitMMGroupMember; // @synthesize dicTopHitMMGroupMember=_dicTopHitMMGroupMember;
@property(retain, nonatomic) NSDictionary *dicCacheContact; // @synthesize dicCacheContact=_dicCacheContact;
@property(retain, nonatomic) NSDictionary *dicCacheZoneItem; // @synthesize dicCacheZoneItem=_dicCacheZoneItem;
@property(retain, nonatomic) NSDictionary *dicCacheLabelItem; // @synthesize dicCacheLabelItem=_dicCacheLabelItem;
- (id)init;

@end

