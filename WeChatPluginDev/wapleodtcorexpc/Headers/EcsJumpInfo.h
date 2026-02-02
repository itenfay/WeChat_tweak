//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class EcsJumpInfo_EcsNativeInfo, EcsJumpInfo_Html5Info, EcsJumpInfo_LiteAppInfo, EcsJumpInfo_MiniAppInfo, NSMutableArray;

@interface EcsJumpInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *featrueList; // @dynamic featrueList;
@property(retain, nonatomic) EcsJumpInfo_Html5Info *html5Info; // @dynamic html5Info;
@property(nonatomic) unsigned int jumpBizType; // @dynamic jumpBizType;
@property(retain, nonatomic) NSMutableArray *jumpPriority; // @dynamic jumpPriority;
@property(retain, nonatomic) EcsJumpInfo_LiteAppInfo *liteAppInfo; // @dynamic liteAppInfo;
@property(retain, nonatomic) EcsJumpInfo_MiniAppInfo *miniAppInfo; // @dynamic miniAppInfo;
@property(retain, nonatomic) EcsJumpInfo_EcsNativeInfo *nativeInfo; // @dynamic nativeInfo;

@end

