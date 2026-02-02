//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QuickReplyMsgReporter : NSObject
{
    unsigned int _noticeTimestamp;
    unsigned int _noticeType;
    unsigned int _accountType;
    long long _bizType;
    NSString *_bizInfo;
    long long _currPage;
    NSString *_messageId;
    NSString *_messageType;
    long long _bannerType;
    NSString *_bannerMsg;
    NSString *_userName;
    NSString *_content;
    NSString *_liveId;
    NSString *_feedId;
}

+ (id)getMessageType:(id)arg1;
+ (id)getMessageId:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(retain, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(nonatomic) unsigned int accountType; // @synthesize accountType=_accountType;
@property(nonatomic) unsigned int noticeType; // @synthesize noticeType=_noticeType;
@property(nonatomic) unsigned int noticeTimestamp; // @synthesize noticeTimestamp=_noticeTimestamp;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *bannerMsg; // @synthesize bannerMsg=_bannerMsg;
@property(nonatomic) long long bannerType; // @synthesize bannerType=_bannerType;
@property(retain, nonatomic) NSString *messageType; // @synthesize messageType=_messageType;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(nonatomic) long long currPage; // @synthesize currPage=_currPage;
@property(retain, nonatomic) NSString *bizInfo; // @synthesize bizInfo=_bizInfo;
@property(nonatomic) long long bizType; // @synthesize bizType=_bizType;
- (void)reportServiceNotifyBannerWithOpType:(unsigned int)arg1;
- (void)reportSystemConfig;
- (id)getFeedId:(id)arg1;
- (id)getLiveId:(id)arg1;
- (unsigned int)getNoticeType:(id)arg1;
- (unsigned int)getAccountType:(id)arg1;
- (id)getContent:(id)arg1;
- (unsigned int)getNoticeTimestamp:(id)arg1;
- (id)getUserName:(id)arg1;
- (id)getPageName;
- (long long)getBannerType:(id)arg1;
- (id)getBannerMsg:(id)arg1;
- (void)updateWithMessages:(id)arg1;
- (void)reportWithAction:(long long)arg1 msgId:(id)arg2 msgType:(id)arg3 bannerType:(long long)arg4 bannerMsg:(id)arg5;
- (void)reportAction:(long long)arg1 messages:(id)arg2;
- (void)reportAction:(long long)arg1;
- (id)init;

@end

