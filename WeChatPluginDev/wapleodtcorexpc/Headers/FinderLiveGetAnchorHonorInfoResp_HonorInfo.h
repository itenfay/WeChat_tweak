//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo, NSString;

@interface FinderLiveGetAnchorHonorInfoResp_HonorInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(nonatomic) unsigned int showType; // @dynamic showType;
@property(retain, nonatomic) NSString *subTitle; // @dynamic subTitle;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) NSString *typeIcon; // @dynamic typeIcon;

@end

