//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class AdditionalContactList, ChatRoomMemberData, CustomizedInfo, NSMutableArray, NSString, PhoneNumListInfo, RingBackSetting, SKBuiltinBuffer_t, SKBuiltinString_t, SnsUserInfo;

@interface ModContact : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int addContactScene; // @dynamic addContactScene;
@property(retain, nonatomic) AdditionalContactList *additionalContactList; // @dynamic additionalContactList;
@property(retain, nonatomic) NSString *albumBgimgId; // @dynamic albumBgimgId;
@property(nonatomic) int albumFlag; // @dynamic albumFlag;
@property(nonatomic) int albumStyle; // @dynamic albumStyle;
@property(retain, nonatomic) NSString *alias; // @dynamic alias;
@property(retain, nonatomic) NSString *bigHeadImgUrl; // @dynamic bigHeadImgUrl;
@property(nonatomic) unsigned int bitMask; // @dynamic bitMask;
@property(nonatomic) unsigned long long bitMask2; // @dynamic bitMask2;
@property(nonatomic) unsigned int bitVal; // @dynamic bitVal;
@property(nonatomic) unsigned long long bitValue2; // @dynamic bitValue2;
@property(retain, nonatomic) NSString *cardImgUrl; // @dynamic cardImgUrl;
@property(nonatomic) unsigned long long chatRoomBusinessType; // @dynamic chatRoomBusinessType;
@property(retain, nonatomic) NSString *chatRoomData; // @dynamic chatRoomData;
@property(nonatomic) unsigned int chatRoomNotify; // @dynamic chatRoomNotify;
@property(retain, nonatomic) NSString *chatRoomOwner; // @dynamic chatRoomOwner;
@property(nonatomic) unsigned int chatroomAccessType; // @dynamic chatroomAccessType;
@property(nonatomic) unsigned int chatroomInfoVersion; // @dynamic chatroomInfoVersion;
@property(nonatomic) unsigned int chatroomMaxCount; // @dynamic chatroomMaxCount;
@property(nonatomic) unsigned int chatroomStatus; // @dynamic chatroomStatus;
@property(nonatomic) unsigned int chatroomVersion; // @dynamic chatroomVersion;
@property(retain, nonatomic) NSString *city; // @dynamic city;
@property(retain, nonatomic) SKBuiltinBuffer_t *contactExtraInfoBuf; // @dynamic contactExtraInfoBuf;
@property(nonatomic) unsigned int contactType; // @dynamic contactType;
@property(retain, nonatomic) NSString *country; // @dynamic country;
@property(nonatomic) unsigned int createTime; // @dynamic createTime;
@property(retain, nonatomic) CustomizedInfo *customizedInfo; // @dynamic customizedInfo;
@property(nonatomic) unsigned int deleteContactScene; // @dynamic deleteContactScene;
@property(nonatomic) int deleteFlag; // @dynamic deleteFlag;
@property(retain, nonatomic) NSString *description; // @dynamic description;
@property(retain, nonatomic) SKBuiltinString_t *domainList; // @dynamic domainList;
@property(retain, nonatomic) NSString *encryptUserName; // @dynamic encryptUserName;
@property(nonatomic) unsigned int eraseChatRoomMemberData; // @dynamic eraseChatRoomMemberData;
@property(nonatomic) unsigned int extFlag; // @dynamic extFlag;
@property(retain, nonatomic) NSString *extInfo; // @dynamic extInfo;
@property(retain, nonatomic) NSString *friendUserName; // @dynamic friendUserName;
@property(nonatomic) unsigned int hasWeiXinHdHeadImg; // @dynamic hasWeiXinHdHeadImg;
@property(retain, nonatomic) NSString *headImgMd5; // @dynamic headImgMd5;
@property(retain, nonatomic) NSString *idcardNum; // @dynamic idcardNum;
@property(retain, nonatomic) SKBuiltinBuffer_t *imgBuf; // @dynamic imgBuf;
@property(nonatomic) unsigned int imgFlag; // @dynamic imgFlag;
@property(nonatomic) unsigned int isInChatRoom; // @dynamic isInChatRoom;
@property(retain, nonatomic) NSString *labelIdlist; // @dynamic labelIdlist;
@property(nonatomic) int level; // @dynamic level;
@property(retain, nonatomic) NSString *mobileFullHash; // @dynamic mobileFullHash;
@property(retain, nonatomic) NSString *mobileHash; // @dynamic mobileHash;
@property(retain, nonatomic) NSString *myBrandList; // @dynamic myBrandList;
@property(retain, nonatomic) ChatRoomMemberData *newChatroomData; // @dynamic newChatroomData;
@property(retain, nonatomic) SKBuiltinString_t *nickName; // @dynamic nickName;
@property(nonatomic) unsigned int personalCard; // @dynamic personalCard;
@property(retain, nonatomic) PhoneNumListInfo *phoneNumListInfo; // @dynamic phoneNumListInfo;
@property(retain, nonatomic) NSString *province; // @dynamic province;
@property(retain, nonatomic) SKBuiltinString_t *pyinitial; // @dynamic pyinitial;
@property(retain, nonatomic) SKBuiltinString_t *quanPin; // @dynamic quanPin;
@property(retain, nonatomic) NSString *realName; // @dynamic realName;
@property(retain, nonatomic) SKBuiltinString_t *remark; // @dynamic remark;
@property(retain, nonatomic) SKBuiltinString_t *remarkPyinitial; // @dynamic remarkPyinitial;
@property(retain, nonatomic) SKBuiltinString_t *remarkQuanPin; // @dynamic remarkQuanPin;
@property(retain, nonatomic) RingBackSetting *ringBackSetting; // @dynamic ringBackSetting;
@property(nonatomic) unsigned int roomInfoCount; // @dynamic roomInfoCount;
@property(retain, nonatomic) NSMutableArray *roomInfoList; // @dynamic roomInfoList;
@property(nonatomic) int sex; // @dynamic sex;
@property(retain, nonatomic) NSString *signature; // @dynamic signature;
@property(retain, nonatomic) NSString *smallHeadImgUrl; // @dynamic smallHeadImgUrl;
@property(retain, nonatomic) SnsUserInfo *snsUserInfo; // @dynamic snsUserInfo;
@property(nonatomic) unsigned int source; // @dynamic source;
@property(retain, nonatomic) NSString *sourceExtInfo; // @dynamic sourceExtInfo;
@property(retain, nonatomic) NSString *textStatus; // @dynamic textStatus;
@property(retain, nonatomic) NSString *textStatusExtInfo; // @dynamic textStatusExtInfo;
@property(nonatomic) unsigned int textStatusFlag; // @dynamic textStatusFlag;
@property(retain, nonatomic) NSString *textStatusId; // @dynamic textStatusId;
@property(retain, nonatomic) SKBuiltinString_t *userName; // @dynamic userName;
@property(retain, nonatomic) NSString *verifyContent; // @dynamic verifyContent;
@property(nonatomic) unsigned int verifyFlag; // @dynamic verifyFlag;
@property(retain, nonatomic) NSString *verifyInfo; // @dynamic verifyInfo;
@property(retain, nonatomic) NSString *weiDianInfo; // @dynamic weiDianInfo;
@property(retain, nonatomic) NSString *weibo; // @dynamic weibo;
@property(nonatomic) unsigned int weiboFlag; // @dynamic weiboFlag;
@property(retain, nonatomic) NSString *weiboNickname; // @dynamic weiboNickname;

@end

