//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class CoverInfo, MiniProgramInfo, NSString;

@class WXPBGeneratedMessage;

@interface QRButtonInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) CoverInfo *coverInfo; // @dynamic coverInfo;
@property(retain, nonatomic) MiniProgramInfo *jumpMiniprogram; // @dynamic jumpMiniprogram;
@property(retain, nonatomic) NSString *jumpUrl; // @dynamic jumpUrl;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end

