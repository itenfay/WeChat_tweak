//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class SKBuiltinBuffer_t;

@class WXPBGeneratedMessage;

@interface GetPersonalDesignerRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int designerUin; // @dynamic designerUin;
@property(nonatomic) _Bool emotionNeedExposeThumb; // @dynamic emotionNeedExposeThumb;
@property(nonatomic) _Bool needGetStatisticsInfo; // @dynamic needGetStatisticsInfo;
@property(nonatomic) _Bool needUgcemoji; // @dynamic needUgcemoji;
@property(retain, nonatomic) SKBuiltinBuffer_t *reqBuf; // @dynamic reqBuf;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

