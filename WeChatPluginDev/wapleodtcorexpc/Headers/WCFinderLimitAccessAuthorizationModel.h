//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveRouterParams, NSMutableDictionary, NSString, UINavigationController, WCFinderPushFeedViewParams, WCFinderShareListReportModel;

@interface WCFinderLimitAccessAuthorizationModel : NSObject
{
    NSString *_encrytedObjectidTid;
    UINavigationController *_navVC;
    unsigned long long _shareScene;
    NSMutableDictionary *_paraDic;
    WCFinderPushFeedViewParams *_funcParams;
    WCFinderShareListReportModel *_reportModel;
    unsigned long long _entryCardType;
    NSString *_feedId;
    NSString *_nonceId;
    NSString *_bizKey;
    MMFinderLiveRouterParams *_liveParams;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveRouterParams *liveParams; // @synthesize liveParams=_liveParams;
@property(copy, nonatomic) NSString *bizKey; // @synthesize bizKey=_bizKey;
@property(copy, nonatomic) NSString *nonceId; // @synthesize nonceId=_nonceId;
@property(copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(nonatomic) unsigned long long entryCardType; // @synthesize entryCardType=_entryCardType;
@property(retain, nonatomic) WCFinderShareListReportModel *reportModel; // @synthesize reportModel=_reportModel;
@property(retain, nonatomic) WCFinderPushFeedViewParams *funcParams; // @synthesize funcParams=_funcParams;
@property(retain, nonatomic) NSMutableDictionary *paraDic; // @synthesize paraDic=_paraDic;
@property(nonatomic) unsigned long long shareScene; // @synthesize shareScene=_shareScene;
@property(retain, nonatomic) UINavigationController *navVC; // @synthesize navVC=_navVC;
@property(copy, nonatomic) NSString *encrytedObjectidTid; // @synthesize encrytedObjectidTid=_encrytedObjectidTid;
- (id)initWithEncrytedObjectidTid:(id)arg1 nonceID:(id)arg2 currentNavController:(id)arg3 enterScene:(unsigned long long)arg4 customParam:(id)arg5 functionalParams:(id)arg6 reportModel:(id)arg7 cardType:(unsigned long long)arg8;
- (id)initWithFeedID:(id)arg1 nonceID:(id)arg2 currentNavController:(id)arg3 enterScene:(unsigned long long)arg4 customParam:(id)arg5 functionalParams:(id)arg6 reportModel:(id)arg7 cardType:(unsigned long long)arg8;

@end

