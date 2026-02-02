//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MyWCDB, NSDate, NSMutableArray, NSString, SnsObject, WCLocationInfo;

@interface SEWCUploadTask : NSObject
{
    NSString *serverID;
    NSString *clientID;
    _Bool isPrivate;
    NSMutableArray *sharedGroupIDS;
    long long type;
    NSString *title;
    NSString *desc;
    NSString *contentDesc;
    long long contentDescShowType;
    long long contentDescScene;
    NSMutableArray *withUserList;
    NSMutableArray *blackUserList;
    NSMutableArray *mediaList;
    SnsObject *snsObj;
    _Bool isSyncToWeibo;
    _Bool isSyncToFacebook;
    _Bool isSyncToTwitter;
    _Bool isSyncToQZone;
    NSString *linkUrl;
    NSString *statisticsData;
    NSString *sourceUserName;
    NSString *sourceNickName;
    NSDate *createTime;
    long long uploadResult;
    long long BGImgSetType;
    _Bool isUploadFailed;
    long long postSource;
    NSString *twitterOAuthToken;
    NSString *twitterOAuthTokenSecret;
    _Bool isDeleted;
    WCLocationInfo *locationInfo;
    NSMutableArray *sharedGroupIDs;
    MyWCDB *wcdb;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MyWCDB *wcdb; // @synthesize wcdb;
@property(retain, nonatomic) WCLocationInfo *locationInfo; // @synthesize locationInfo;
@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted;
@property(retain, nonatomic) NSString *twitterOAuthTokenSecret; // @synthesize twitterOAuthTokenSecret;
@property(retain, nonatomic) NSString *twitterOAuthToken; // @synthesize twitterOAuthToken;
@property(retain, nonatomic) NSString *sourceNickName; // @synthesize sourceNickName;
@property(retain, nonatomic) NSString *sourceUserName; // @synthesize sourceUserName;
@property(retain, nonatomic) NSString *statisticsData; // @synthesize statisticsData;
@property(nonatomic) long long postSource; // @synthesize postSource;
@property(nonatomic) _Bool isUploadFailed; // @synthesize isUploadFailed;
@property(nonatomic) long long BGImgSetType; // @synthesize BGImgSetType;
@property(nonatomic) long long uploadResult; // @synthesize uploadResult;
@property(retain, nonatomic) NSDate *createTime; // @synthesize createTime;
@property(retain, nonatomic) NSString *linkUrl; // @synthesize linkUrl;
@property(nonatomic) _Bool isSyncToQZone; // @synthesize isSyncToQZone;
@property(nonatomic) _Bool isSyncToTwitter; // @synthesize isSyncToTwitter;
@property(nonatomic) _Bool isSyncToFacebook; // @synthesize isSyncToFacebook;
@property(nonatomic) _Bool isSyncToWeibo; // @synthesize isSyncToWeibo;
@property(nonatomic) long long contentDescScene; // @synthesize contentDescScene;
@property(nonatomic) long long contentDescShowType; // @synthesize contentDescShowType;
@property(retain, nonatomic) NSString *contentDesc; // @synthesize contentDesc;
@property(retain, nonatomic) SnsObject *snsObj; // @synthesize snsObj;
@property(retain, nonatomic) NSMutableArray *mediaList; // @synthesize mediaList;
@property(retain, nonatomic) NSMutableArray *blackUserList; // @synthesize blackUserList;
@property(retain, nonatomic) NSMutableArray *withUserList; // @synthesize withUserList;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSMutableArray *sharedGroupIDs; // @synthesize sharedGroupIDs;
@property(nonatomic) long long type; // @synthesize type;
@property(nonatomic) _Bool isPrivate; // @synthesize isPrivate;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID;
@property(retain, nonatomic) NSString *serverID; // @synthesize serverID;
- (id)convert2WCUploadTask;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

