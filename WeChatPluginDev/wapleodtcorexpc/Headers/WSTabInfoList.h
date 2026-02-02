//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WSTabInfoList : NSObject
{
    long long _jumpCategoryInFutrue;
    NSArray *_tabs;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *tabs; // @synthesize tabs=_tabs;
@property(nonatomic) long long jumpCategoryInFutrue; // @synthesize jumpCategoryInFutrue=_jumpCategoryInFutrue;
- (void)configureJumpCategory:(int)arg1;
- (_Bool)hasNewlifeTab;
- (id)tabInfoForFinderTabType:(int)arg1;
- (id)tabInfoForReddotPath:(id)arg1;
- (long long)indexForCategory:(long long)arg1;
- (id)tabInfoForCategory:(long long)arg1;
- (long long)topStoriesCategoryIdForTab:(long long)arg1;
@property(readonly, nonatomic) NSArray *k1kTabs;
- (void)cacheCurrentTabsInfo;
- (id)genTabsIdentifier;
@property(readonly, nonatomic) long long lastSelectedFinderEntryType;
@property(nonatomic) long long lastSelectedTabCategory;
@property(copy, nonatomic) NSString *lastTabsIdentifier;
@property(nonatomic) unsigned int lastTabsCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithParams:(id)arg1;

@end

