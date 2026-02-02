//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString, NoticeItem, RealNameInfo;

@interface CgiGetRewardQrcodeResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *amtList; // @dynamic amtList;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *buttonUrl; // @dynamic buttonUrl;
@property(retain, nonatomic) NSString *buttonWording; // @dynamic buttonWording;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(nonatomic) _Bool emptyFlag; // @dynamic emptyFlag;
@property(nonatomic) unsigned int iconLength; // @dynamic iconLength;
@property(nonatomic) unsigned int maxAmt; // @dynamic maxAmt;
@property(retain, nonatomic) NoticeItem *noticeItem; // @dynamic noticeItem;
@property(retain, nonatomic) NSString *photoAeskey; // @dynamic photoAeskey;
@property(retain, nonatomic) NSString *photoUrl; // @dynamic photoUrl;
@property(nonatomic) unsigned int photoWidth; // @dynamic photoWidth;
@property(retain, nonatomic) RealNameInfo *realNameInfo; // @dynamic realNameInfo;
@property(nonatomic) unsigned int retcode; // @dynamic retcode;
@property(retain, nonatomic) NSString *retmsg; // @dynamic retmsg;
@property(retain, nonatomic) NSString *rewardPhotoUrlV2; // @dynamic rewardPhotoUrlV2;
@property(retain, nonatomic) NSString *trueName; // @dynamic trueName;
@property(retain, nonatomic) NSString *word; // @dynamic word;

@end

