//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, WAAppTaskReferrerInfo, WAAppTaskTransitInfo;

@interface WAJSCoreServiceOpenData : NSObject
{
    _Bool _reLaunch;
    unsigned int _launchMode;
    unsigned int _secFlagForSinglePageMode;
    WAAppTaskReferrerInfo *_referrerInfo;
    WAAppTaskTransitInfo *_transitInfo;
    NSString *_path;
    NSDictionary *_extraParamInfo;
    NSDictionary *_hostExtraData;
    NSString *_debugLaunchInfo;
    NSString *_chatroomUsername;
    NSString *_chatUsername;
    long long _enterForegroundReason;
    NSString *_mpShortLink;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int secFlagForSinglePageMode; // @synthesize secFlagForSinglePageMode=_secFlagForSinglePageMode;
@property(copy, nonatomic) NSString *mpShortLink; // @synthesize mpShortLink=_mpShortLink;
@property(nonatomic) long long enterForegroundReason; // @synthesize enterForegroundReason=_enterForegroundReason;
@property(nonatomic) unsigned int launchMode; // @synthesize launchMode=_launchMode;
@property(copy, nonatomic) NSString *chatUsername; // @synthesize chatUsername=_chatUsername;
@property(copy, nonatomic) NSString *chatroomUsername; // @synthesize chatroomUsername=_chatroomUsername;
@property(copy, nonatomic) NSString *debugLaunchInfo; // @synthesize debugLaunchInfo=_debugLaunchInfo;
@property(retain, nonatomic) NSDictionary *hostExtraData; // @synthesize hostExtraData=_hostExtraData;
@property(retain, nonatomic) NSDictionary *extraParamInfo; // @synthesize extraParamInfo=_extraParamInfo;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) _Bool reLaunch; // @synthesize reLaunch=_reLaunch;
@property(retain, nonatomic) WAAppTaskTransitInfo *transitInfo; // @synthesize transitInfo=_transitInfo;
@property(retain, nonatomic) WAAppTaskReferrerInfo *referrerInfo; // @synthesize referrerInfo=_referrerInfo;

@end

