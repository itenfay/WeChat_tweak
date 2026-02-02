//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderFollowNewLifeReportInfo, NSData, NSDictionary, NSString;

@interface WCFinderFollowCGIRequestParams : NSObject
{
    int _reportScene;
    unsigned int _enterType;
    unsigned int _enhanceFollowBtn;
    NSString *_posterUsername;
    NSString *_finderUsername;
    NSString *_refObjectID;
    unsigned long long _opType;
    NSString *_sessionBuffer;
    unsigned long long _followScene;
    NSString *_sessionExtraKey;
    NSData *_liveCookies;
    unsigned long long _fromMentionID;
    NSDictionary *_clientUdfKv;
    FinderFollowNewLifeReportInfo *_newlifeReportInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderFollowNewLifeReportInfo *newlifeReportInfo; // @synthesize newlifeReportInfo=_newlifeReportInfo;
@property(copy, nonatomic) NSDictionary *clientUdfKv; // @synthesize clientUdfKv=_clientUdfKv;
@property(nonatomic) unsigned int enhanceFollowBtn; // @synthesize enhanceFollowBtn=_enhanceFollowBtn;
@property(nonatomic) unsigned long long fromMentionID; // @synthesize fromMentionID=_fromMentionID;
@property(retain, nonatomic) NSData *liveCookies; // @synthesize liveCookies=_liveCookies;
@property(retain, nonatomic) NSString *sessionExtraKey; // @synthesize sessionExtraKey=_sessionExtraKey;
@property(nonatomic) unsigned long long followScene; // @synthesize followScene=_followScene;
@property(retain, nonatomic) NSString *sessionBuffer; // @synthesize sessionBuffer=_sessionBuffer;
@property(nonatomic) unsigned int enterType; // @synthesize enterType=_enterType;
@property(nonatomic) unsigned long long opType; // @synthesize opType=_opType;
@property(nonatomic) int reportScene; // @synthesize reportScene=_reportScene;
@property(retain, nonatomic) NSString *refObjectID; // @synthesize refObjectID=_refObjectID;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(retain, nonatomic) NSString *posterUsername; // @synthesize posterUsername=_posterUsername;
- (id)initWithPosterUsername:(id)arg1 reportScene:(int)arg2 optype:(unsigned long long)arg3 enterType:(unsigned int)arg4 followScene:(unsigned long long)arg5;

@end

