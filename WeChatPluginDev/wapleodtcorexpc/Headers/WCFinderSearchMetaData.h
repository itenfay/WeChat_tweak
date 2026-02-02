//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderSearchMetaData : NSObject
{
    int _searchScene;
    int _reportCommentScene;
    NSString *_searchSessionId;
    unsigned long long _searchSourceType;
    unsigned long long _reportSearchScene;
    long long _tabId;
}

- (void).cxx_destruct;
@property(nonatomic) long long tabId; // @synthesize tabId=_tabId;
@property(nonatomic) unsigned long long reportSearchScene; // @synthesize reportSearchScene=_reportSearchScene;
@property(nonatomic) unsigned long long searchSourceType; // @synthesize searchSourceType=_searchSourceType;
@property(nonatomic) int reportCommentScene; // @synthesize reportCommentScene=_reportCommentScene;
@property(copy, nonatomic) NSString *searchSessionId; // @synthesize searchSessionId=_searchSessionId;
@property(nonatomic) int searchScene; // @synthesize searchScene=_searchScene;
- (id)description;
- (id)init;

@end

