//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo_Html5Info, FinderJumpInfo_MiniAppInfo, NSString;

@interface ThankRedPackageInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bannerWording; // @dynamic bannerWording;
@property(retain, nonatomic) FinderJumpInfo_Html5Info *h5Info; // @dynamic h5Info;
@property(retain, nonatomic) FinderJumpInfo_MiniAppInfo *miniAppInfo; // @dynamic miniAppInfo;
@property(nonatomic) unsigned int redpackageProgress; // @dynamic redpackageProgress;

@end

