//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, DesignerLinkInfo, NSData, NSMutableArray, NSString, PersonalDesigner, SKBuiltinBuffer_t;

@interface GetPersonalDesignerResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *bannerSetList; // @dynamic bannerSetList;
@property(retain, nonatomic) NSString *bannerUrl; // @dynamic bannerUrl;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *bizName; // @dynamic bizName;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) NSData *designerIplistContext; // @dynamic designerIplistContext;
@property(retain, nonatomic) DesignerLinkInfo *designerLinkInfo; // @dynamic designerLinkInfo;
@property(retain, nonatomic) NSMutableArray *emojiList; // @dynamic emojiList;
@property(nonatomic) unsigned int emojiTotalCount; // @dynamic emojiTotalCount;
@property(retain, nonatomic) NSMutableArray *emotionList; // @dynamic emotionList;
@property(nonatomic) unsigned int emotionTotalCount; // @dynamic emotionTotalCount;
@property(retain, nonatomic) NSString *headUrl; // @dynamic headUrl;
@property(retain, nonatomic) NSMutableArray *ipsetList; // @dynamic ipsetList;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) PersonalDesigner *personalDesigner; // @dynamic personalDesigner;
@property(retain, nonatomic) SKBuiltinBuffer_t *reqBuf; // @dynamic reqBuf;

@end

