//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveNoticeInfo, NSMutableDictionary, NSString;

@interface WCFinderLiveAudienceNoticeReportStruct : NSObject
{
    NSString *_finderUsername;
    unsigned long long _actionType;
    unsigned long long _enterLiveID;
    unsigned long long _enterStatus;
    NSString *_commentScene;
    NSString *_sceneNote;
    NSString *_addData;
    NSString *_forceNoticeID;
    NSString *_noticeType;
    NSString *_feedID;
    NSString *_sessionBuffer;
    NSMutableDictionary *_channelExtra;
    NSString *_channelExtraString;
    NSMutableDictionary *_scene;
    FinderLiveNoticeInfo *_noticeInfo;
}

+ (id)replaceCommaToSemicolon:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;
@property(retain, nonatomic) NSMutableDictionary *scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *channelExtraString; // @synthesize channelExtraString=_channelExtraString;
@property(retain, nonatomic) NSMutableDictionary *channelExtra; // @synthesize channelExtra=_channelExtra;
@property(copy, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(copy, nonatomic) NSString *noticeType; // @synthesize noticeType=_noticeType;
@property(copy, nonatomic) NSString *forceNoticeID; // @synthesize forceNoticeID=_forceNoticeID;
@property(copy, nonatomic) NSString *addData; // @synthesize addData=_addData;
@property(copy, nonatomic) NSString *sceneNote; // @synthesize sceneNote=_sceneNote;
@property(copy, nonatomic) NSString *commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) unsigned long long enterStatus; // @synthesize enterStatus=_enterStatus;
@property(nonatomic) unsigned long long enterLiveID; // @synthesize enterLiveID=_enterLiveID;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(copy, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
- (id)toLogStrForForceNotice;
- (id)toLogStr;
- (id)init;

@end

