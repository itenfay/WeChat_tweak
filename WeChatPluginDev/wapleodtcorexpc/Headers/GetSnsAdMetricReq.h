//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface GetSnsAdMetricReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *actionString; // @dynamic actionString;
@property(nonatomic) unsigned int actionType; // @dynamic actionType;
@property(retain, nonatomic) NSString *aid; // @dynamic aid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int commentCnt; // @dynamic commentCnt;
@property(nonatomic) unsigned int likeCnt; // @dynamic likeCnt;
@property(nonatomic) unsigned int likeCommentCnt; // @dynamic likeCommentCnt;
@property(retain, nonatomic) NSString *snsAdId; // @dynamic snsAdId;
@property(retain, nonatomic) NSString *uxinfo; // @dynamic uxinfo;

@end

