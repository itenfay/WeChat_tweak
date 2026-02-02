//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderUserPageReqPreload, NSData, NSString;

@interface WCFinderUserPageParams : NSObject
{
    _Bool _needFansCount;
    _Bool _requestFansCount;
    _Bool _isAuthor;
    _Bool _fromNewTabList;
    int _tabType;
    unsigned int _enterType;
    int _commentScene;
    float _longitude;
    float _latitude;
    unsigned int _scene;
    unsigned int _direction;
    NSString *_username;
    NSString *_bizUsername;
    NSString *_pageMd5;
    NSString *_refObjectId;
    unsigned long long _maxTid;
    NSData *_lastBuffer;
    NSData *_upBuffer;
    unsigned long long _reportScene;
    unsigned long long _topicId;
    unsigned long long _refLiveObjectId;
    NSString *_liveNoticeId;
    unsigned long long _fromCollectionID;
    FinderUserPageReqPreload *_preloadBypass;
    NSString *_preloadIgnoreTid;
    NSString *_openSDKAPPID;
    unsigned long long _cgiFlag;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long cgiFlag; // @synthesize cgiFlag=_cgiFlag;
@property(nonatomic) unsigned int direction; // @synthesize direction=_direction;
@property(copy, nonatomic) NSString *openSDKAPPID; // @synthesize openSDKAPPID=_openSDKAPPID;
@property(copy, nonatomic) NSString *preloadIgnoreTid; // @synthesize preloadIgnoreTid=_preloadIgnoreTid;
@property(retain, nonatomic) FinderUserPageReqPreload *preloadBypass; // @synthesize preloadBypass=_preloadBypass;
@property(nonatomic) _Bool fromNewTabList; // @synthesize fromNewTabList=_fromNewTabList;
@property(nonatomic) _Bool isAuthor; // @synthesize isAuthor=_isAuthor;
@property(nonatomic) _Bool requestFansCount; // @synthesize requestFansCount=_requestFansCount;
@property(nonatomic) unsigned long long fromCollectionID; // @synthesize fromCollectionID=_fromCollectionID;
@property(copy, nonatomic) NSString *liveNoticeId; // @synthesize liveNoticeId=_liveNoticeId;
@property(nonatomic) unsigned long long refLiveObjectId; // @synthesize refLiveObjectId=_refLiveObjectId;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) float latitude; // @synthesize latitude=_latitude;
@property(nonatomic) float longitude; // @synthesize longitude=_longitude;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) unsigned int enterType; // @synthesize enterType=_enterType;
@property(nonatomic) unsigned long long topicId; // @synthesize topicId=_topicId;
@property(nonatomic) int tabType; // @synthesize tabType=_tabType;
@property(nonatomic) unsigned long long reportScene; // @synthesize reportScene=_reportScene;
@property(retain, nonatomic) NSData *upBuffer; // @synthesize upBuffer=_upBuffer;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) _Bool needFansCount; // @synthesize needFansCount=_needFansCount;
@property(nonatomic) unsigned long long maxTid; // @synthesize maxTid=_maxTid;
@property(copy, nonatomic) NSString *refObjectId; // @synthesize refObjectId=_refObjectId;
@property(copy, nonatomic) NSString *pageMd5; // @synthesize pageMd5=_pageMd5;
@property(copy, nonatomic) NSString *bizUsername; // @synthesize bizUsername=_bizUsername;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

