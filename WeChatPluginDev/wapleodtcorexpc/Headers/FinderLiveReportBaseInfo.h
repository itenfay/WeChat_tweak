//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveReportBaseInfo_ChnlExtraInfo, FinderLiveReportBaseInfo_JoinliveExtraInfo, NSString;

@interface FinderLiveReportBaseInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long actionTs; // @dynamic actionTs;
@property(nonatomic) unsigned int adFlag; // @dynamic adFlag;
@property(retain, nonatomic) NSString *chnlEnterImmerseType; // @dynamic chnlEnterImmerseType;
@property(retain, nonatomic) NSString *chnlExposeType; // @dynamic chnlExposeType;
@property(retain, nonatomic) FinderLiveReportBaseInfo_ChnlExtraInfo *chnlExtra; // @dynamic chnlExtra;
@property(retain, nonatomic) NSString *chnlSessionBuffer; // @dynamic chnlSessionBuffer;
@property(retain, nonatomic) NSString *clickSubTabContextId; // @dynamic clickSubTabContextId;
@property(nonatomic) unsigned long long enterEntrance; // @dynamic enterEntrance;
@property(nonatomic) unsigned long long enterIconType; // @dynamic enterIconType;
@property(nonatomic) unsigned long long enterSessionId; // @dynamic enterSessionId;
@property(retain, nonatomic) FinderLiveReportBaseInfo_JoinliveExtraInfo *joinliveExtraInfo; // @dynamic joinliveExtraInfo;
@property(retain, nonatomic) NSString *legacyCommentScene; // @dynamic legacyCommentScene;
@property(nonatomic) unsigned int mainPagePosition; // @dynamic mainPagePosition;
@property(nonatomic) unsigned int noticeType; // @dynamic noticeType;
@property(retain, nonatomic) NSString *pullCommentScene; // @dynamic pullCommentScene;
@property(nonatomic) unsigned long long refObjectId; // @dynamic refObjectId;
@property(nonatomic) unsigned int relatedLiveShowPos; // @dynamic relatedLiveShowPos;
@property(retain, nonatomic) NSString *scenenoteAppid; // @dynamic scenenoteAppid;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;

@end

