//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderUserPageTab, NSString, WCFinderStreamProfileHeadData;
@protocol WCFinderStreamProfilePageModelTabDelegate;

@interface WCFinderStreamProfilePageModel : NSObject
{
    FinderUserPageTab *_tabdef;
    WCFinderStreamProfileHeadData *_headData;
    id <WCFinderStreamProfilePageModelTabDelegate> _tabDelegate;
}

+ (id)overviewSectionTypes;
+ (int)tabId;
+ (_Bool)pageIsRequired;
+ (_Bool)allowLimitMode;
+ (_Bool)shouldDisplay:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCFinderStreamProfilePageModelTabDelegate> tabDelegate; // @synthesize tabDelegate=_tabDelegate;
@property(retain, nonatomic) WCFinderStreamProfileHeadData *headData; // @synthesize headData=_headData;
@property(retain, nonatomic) FinderUserPageTab *tabdef; // @synthesize tabdef=_tabdef;
- (id)fetchOverviewSection:(long long)arg1;
- (void)updateOverviewSection:(long long)arg1 necessary:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
- (void)notifyTabDisplayChanged:(id)arg1;
- (void)onOtherPageLoaded:(Class)arg1 finish:(CDUnknownBlockType)arg2;
- (void)onContactLoaded:(CDUnknownBlockType)arg1;
- (void)onFirstCgiFinish:(_Bool)arg1 cgiProfile:(id)arg2;
- (void)reportExposeTab:(int)arg1;
- (void)reportClickTab:(int)arg1;
- (id)reportParamsBlock;
@property(readonly, copy) NSString *description;
- (void)notifyOverviewSectionUpdate:(id)arg1;
- (void)notifyOverviewSecElementCountChanged:(long long)arg1 newCount:(long long)arg2;
- (void)notifyPageDisplay:(_Bool)arg1;
- (void)requestPageData;
- (void)doLoadCache;
- (id)overviewSectionTypes;
- (id)viewPageClassName;
- (_Bool)shouldDisplayTab;
- (id)displayName;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

