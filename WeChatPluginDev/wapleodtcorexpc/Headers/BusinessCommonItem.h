//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BusinessActionInfo, BusinessDetailInfo, BusinessExtendInfo, NSString;

@interface BusinessCommonItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BusinessActionInfo *actionInfo; // @dynamic actionInfo;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) BusinessDetailInfo *detailInfo; // @dynamic detailInfo;
@property(retain, nonatomic) BusinessExtendInfo *extendInfo; // @dynamic extendInfo;
@property(retain, nonatomic) NSString *thumbUrl; // @dynamic thumbUrl;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

