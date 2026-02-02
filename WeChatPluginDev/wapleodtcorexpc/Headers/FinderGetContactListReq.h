//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderContactExtRelationInfo, FinderContactWxFriendInfo, NSMutableArray, NSString;

@interface FinderGetContactListReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *commentContactList; // @dynamic commentContactList;
@property(retain, nonatomic) NSMutableArray *commentLikeContactList; // @dynamic commentLikeContactList;
@property(nonatomic) unsigned int contactType; // @dynamic contactType;
@property(nonatomic) unsigned int enterType; // @dynamic enterType;
@property(retain, nonatomic) FinderContactExtRelationInfo *extRelInfo; // @dynamic extRelInfo;
@property(retain, nonatomic) NSMutableArray *fansContactList; // @dynamic fansContactList;
@property(retain, nonatomic) NSMutableArray *favContactList; // @dynamic favContactList;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSMutableArray *finderUsernameList; // @dynamic finderUsernameList;
@property(retain, nonatomic) FinderContactWxFriendInfo *friendInfo; // @dynamic friendInfo;
@property(retain, nonatomic) NSMutableArray *msgContactList; // @dynamic msgContactList;
@property(nonatomic) unsigned int refCommentScene; // @dynamic refCommentScene;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSMutableArray *strangerInfos; // @dynamic strangerInfos;
@property(retain, nonatomic) NSString *wxUsername; // @dynamic wxUsername;

@end

