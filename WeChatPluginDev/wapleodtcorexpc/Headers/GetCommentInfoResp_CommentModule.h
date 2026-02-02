//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class GetCommentInfoResp_AppRecommendInfoList, GetCommentInfoResp_CommentModule_InviteInfo, NSString;

@interface GetCommentInfoResp_CommentModule : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) GetCommentInfoResp_CommentModule_InviteInfo *inviteInfo; // @dynamic inviteInfo;
@property(retain, nonatomic) NSString *moreAppid; // @dynamic moreAppid;
@property(retain, nonatomic) NSString *morePath; // @dynamic morePath;
@property(retain, nonatomic) NSString *moreQuery; // @dynamic moreQuery;
@property(retain, nonatomic) NSString *moreText; // @dynamic moreText;
@property(retain, nonatomic) NSString *nameImgUrl; // @dynamic nameImgUrl;
@property(retain, nonatomic) NSString *nameImgUrlBlack; // @dynamic nameImgUrlBlack;
@property(retain, nonatomic) NSString *nameText; // @dynamic nameText;
@property(retain, nonatomic) NSString *noScoreText; // @dynamic noScoreText;
@property(retain, nonatomic) NSString *recommend; // @dynamic recommend;
@property(retain, nonatomic) GetCommentInfoResp_AppRecommendInfoList *recommendList; // @dynamic recommendList;
@property(nonatomic) unsigned int scoreNum; // @dynamic scoreNum;
@property(retain, nonatomic) NSString *scoreStr; // @dynamic scoreStr;
@property(nonatomic) unsigned int showMenu; // @dynamic showMenu;
@property(nonatomic) unsigned int showProfile; // @dynamic showProfile;

@end

