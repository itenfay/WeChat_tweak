//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class JumpInfoData, NSString;

@interface GetWebViewInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool forcePassExtraInfo; // @dynamic forcePassExtraInfo;
@property(retain, nonatomic) NSString *halfScreenBackGroundColor; // @dynamic halfScreenBackGroundColor;
@property(retain, nonatomic) NSString *html; // @dynamic html;
@property(retain, nonatomic) JumpInfoData *jumpInfo; // @dynamic jumpInfo;
@property(nonatomic) _Bool popCurrentVc; // @dynamic popCurrentVc;
@property(retain, nonatomic) NSString *preInjectData; // @dynamic preInjectData;
@property(retain, nonatomic) NSString *statusBarColor; // @dynamic statusBarColor;
@property(retain, nonatomic) NSString *statusBarStyle; // @dynamic statusBarStyle;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

