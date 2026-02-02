//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, WSReddot;

@interface WSTabInfo : NSObject
{
    int _finderCommentScene;
    int _finderTabType;
    NSDictionary *_originalDictionary;
    long long _category;
    unsigned long long _bizType;
    unsigned long long _searchScene;
    unsigned long long _searchType;
    NSString *_reddotPath;
    NSString *_title;
    NSString *_extTabInfo;
    NSString *_liteAppId;
    NSString *_liteAppPage;
    WSReddot *_entranceRedDotInfo;
    NSString *_liteAppExpKey;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *liteAppExpKey; // @synthesize liteAppExpKey=_liteAppExpKey;
@property(retain, nonatomic) WSReddot *entranceRedDotInfo; // @synthesize entranceRedDotInfo=_entranceRedDotInfo;
@property(copy, nonatomic) NSString *liteAppPage; // @synthesize liteAppPage=_liteAppPage;
@property(copy, nonatomic) NSString *liteAppId; // @synthesize liteAppId=_liteAppId;
@property(copy, nonatomic) NSString *extTabInfo; // @synthesize extTabInfo=_extTabInfo;
@property(nonatomic) int finderTabType; // @synthesize finderTabType=_finderTabType;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int finderCommentScene; // @synthesize finderCommentScene=_finderCommentScene;
@property(copy, nonatomic) NSString *reddotPath; // @synthesize reddotPath=_reddotPath;
@property(nonatomic) unsigned long long searchType; // @synthesize searchType=_searchType;
@property(nonatomic) unsigned long long searchScene; // @synthesize searchScene=_searchScene;
@property(nonatomic) unsigned long long bizType; // @synthesize bizType=_bizType;
@property(nonatomic) long long category; // @synthesize category=_category;
@property(retain, nonatomic) NSDictionary *originalDictionary; // @synthesize originalDictionary=_originalDictionary;
- (id)description;
- (id)titleFromK1KConfig:(id)arg1;
- (_Bool)useLiteApp;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithParams:(id)arg1;
- (id)currentUniformEntranceReddot;

@end

