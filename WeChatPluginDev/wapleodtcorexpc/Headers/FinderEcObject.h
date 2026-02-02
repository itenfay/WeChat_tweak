//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo, FinderWxAppInfo, NSString;

@interface FinderEcObject : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) NSString *objectHeadImg; // @dynamic objectHeadImg;
@property(retain, nonatomic) NSString *objectSubTitle; // @dynamic objectSubTitle;
@property(retain, nonatomic) NSString *objectTitle; // @dynamic objectTitle;
@property(nonatomic) unsigned int payTime; // @dynamic payTime;
@property(retain, nonatomic) NSString *shopHeadImg; // @dynamic shopHeadImg;
@property(retain, nonatomic) NSString *shopName; // @dynamic shopName;
@property(retain, nonatomic) FinderWxAppInfo *shopWxaInfo; // @dynamic shopWxaInfo;
@property(nonatomic) unsigned long long spuId; // @dynamic spuId;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(retain, nonatomic) NSString *statusDesc; // @dynamic statusDesc;

@end

