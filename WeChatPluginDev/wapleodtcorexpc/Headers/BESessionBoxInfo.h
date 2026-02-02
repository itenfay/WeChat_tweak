//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, NSString;

@interface BESessionBoxInfo : NSObject
{
    _Bool _needShowAllNoticeUnreadCntPrefix;
    _Bool _needShowAllArticleUnreadCntPrefix;
    unsigned int _unReadCnt;
    unsigned int _showRedDotType;
    unsigned int _unReadArticleMsgCnt;
    unsigned int _unReadNotiMsgCnt;
    NSString *_digest;
    NSString *_bizUsrName;
    unsigned long long _lastMsgSvrId;
    unsigned long long _boxLatestMsgTime;
    CMessageWrap *_lastMsg;
    CMessageWrap *_digestMsg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CMessageWrap *digestMsg; // @synthesize digestMsg=_digestMsg;
@property(retain, nonatomic) CMessageWrap *lastMsg; // @synthesize lastMsg=_lastMsg;
@property(nonatomic) unsigned long long boxLatestMsgTime; // @synthesize boxLatestMsgTime=_boxLatestMsgTime;
@property(nonatomic) unsigned int unReadNotiMsgCnt; // @synthesize unReadNotiMsgCnt=_unReadNotiMsgCnt;
@property(nonatomic) unsigned int unReadArticleMsgCnt; // @synthesize unReadArticleMsgCnt=_unReadArticleMsgCnt;
@property(nonatomic) _Bool needShowAllArticleUnreadCntPrefix; // @synthesize needShowAllArticleUnreadCntPrefix=_needShowAllArticleUnreadCntPrefix;
@property(nonatomic) _Bool needShowAllNoticeUnreadCntPrefix; // @synthesize needShowAllNoticeUnreadCntPrefix=_needShowAllNoticeUnreadCntPrefix;
@property(nonatomic) unsigned long long lastMsgSvrId; // @synthesize lastMsgSvrId=_lastMsgSvrId;
@property(retain, nonatomic) NSString *bizUsrName; // @synthesize bizUsrName=_bizUsrName;
@property(nonatomic) unsigned int showRedDotType; // @synthesize showRedDotType=_showRedDotType;
@property(retain, nonatomic) NSString *digest; // @synthesize digest=_digest;
@property(nonatomic) unsigned int unReadCnt; // @synthesize unReadCnt=_unReadCnt;
- (id)description;

@end

