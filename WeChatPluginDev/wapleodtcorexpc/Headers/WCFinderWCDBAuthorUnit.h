//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCTTable;

@interface WCFinderWCDBAuthorUnit : NSObject
{
    WCTTable *_blackListTable;
    WCTTable *_fansTable;
    WCTTable *_finderAuthorMentionTable;
    WCTTable *_authorFeedLikeList;
    WCTTable *_authorFeedFavList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTTable *authorFeedFavList; // @synthesize authorFeedFavList=_authorFeedFavList;
@property(retain, nonatomic) WCTTable *authorFeedLikeList; // @synthesize authorFeedLikeList=_authorFeedLikeList;
@property(retain, nonatomic) WCTTable *finderAuthorMentionTable; // @synthesize finderAuthorMentionTable=_finderAuthorMentionTable;
@property(retain, nonatomic) WCTTable *fansTable; // @synthesize fansTable=_fansTable;
@property(retain, nonatomic) WCTTable *blackListTable; // @synthesize blackListTable=_blackListTable;

@end

