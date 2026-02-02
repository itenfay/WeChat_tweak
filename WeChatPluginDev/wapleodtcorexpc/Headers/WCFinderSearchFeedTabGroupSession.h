//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, WCFinderSearchFeedTabSession;

@interface WCFinderSearchFeedTabGroupSession : NSObject
{
    WCFinderSearchFeedTabSession *_activeTab;
    NSMutableArray *_mutTabs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutTabs; // @synthesize mutTabs=_mutTabs;
- (id)description;
- (void)clean;
@property(retain, nonatomic) WCFinderSearchFeedTabSession *activeTab;
@property(readonly, nonatomic) NSArray *tabs;
@property(readonly, nonatomic) _Bool displayTab;
@property(readonly, nonatomic) _Bool feedNotEmpty;

@end

