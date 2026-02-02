//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSString;

@interface MMLiveBeautyBadgeCollection : NSObject
{
    NSString *_collectionId;
    NSMutableDictionary *_containedBadges;
    NSMutableSet *_activeBadges;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *activeBadges; // @synthesize activeBadges=_activeBadges;
@property(retain, nonatomic) NSMutableDictionary *containedBadges; // @synthesize containedBadges=_containedBadges;
@property(retain, nonatomic) NSString *collectionId; // @synthesize collectionId=_collectionId;
- (void)onBeautyBadgeDismissed:(id)arg1;
- (void)addBadges:(id)arg1;
- (void)addBadge:(id)arg1;
- (void)removeEventSubscriber:(id)arg1;
- (void)addEventSubscriber:(id)arg1;
@property(readonly, nonatomic) _Bool containsActiveBadges;
@property(readonly, nonatomic) NSDictionary *badges;
- (id)initWithCollectionId:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

