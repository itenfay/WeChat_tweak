//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, PatSuffixWrap, PatWrap, SendPatReportObject;

@interface SendPatWrap : NSObject
{
    unsigned int _associateMessageLocalID;
    NSString *_fromUserName;
    NSString *_pattedUserName;
    NSString *_chatUserName;
    unsigned long long _scene;
    PatWrap *_patWrap;
    unsigned long long _status;
    PatSuffixWrap *_cachedPatSuffixWrap;
    SendPatReportObject *_reportObject;
}

+ (id)sendPatWrapKeyForPat:(id)arg1 fromChat:(id)arg2;
+ (id)sendPatWrapFromMessageWrap:(id)arg1;
+ (id)chatUserNameFromMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) SendPatReportObject *reportObject; // @synthesize reportObject=_reportObject;
@property(nonatomic) unsigned int associateMessageLocalID; // @synthesize associateMessageLocalID=_associateMessageLocalID;
@property(retain, nonatomic) PatSuffixWrap *cachedPatSuffixWrap; // @synthesize cachedPatSuffixWrap=_cachedPatSuffixWrap;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) PatWrap *patWrap; // @synthesize patWrap=_patWrap;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *chatUserName; // @synthesize chatUserName=_chatUserName;
@property(retain, nonatomic) NSString *pattedUserName; // @synthesize pattedUserName=_pattedUserName;
@property(retain, nonatomic) NSString *fromUserName; // @synthesize fromUserName=_fromUserName;
- (id)description;
- (id)generateSystemMessage:(id)arg1;
- (id)messageWrapForRevokeOnly;
- (id)key;
- (void)updatePatSuffix:(id)arg1 andServerId:(long long)arg2;
- (id)associateMessageWrap;
@property(readonly, nonatomic, getter=isValid) _Bool valid;

@end

