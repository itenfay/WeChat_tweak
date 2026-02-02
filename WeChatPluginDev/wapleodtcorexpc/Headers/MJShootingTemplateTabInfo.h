//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MJShootingTemplateTabInfo : NSObject
{
    unsigned int _tabType;
    unsigned long long _tabId;
    NSString *_tabName;
    NSArray *_tags;
}

+ (void)initialize;
+ (void)PBArrayAdd_tabType;
+ (void)PBArrayAdd_tags;
+ (void)PBArrayAdd_tabName;
+ (void)PBArrayAdd_tabId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int tabType; // @synthesize tabType=_tabType;
@property(copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSString *tabName; // @synthesize tabName=_tabName;
@property(nonatomic) unsigned long long tabId; // @synthesize tabId=_tabId;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTemplateTab:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

