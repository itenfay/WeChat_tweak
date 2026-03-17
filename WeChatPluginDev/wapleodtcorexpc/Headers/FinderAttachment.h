//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class FinderJumpInfoAttachment, FinderMiniAppAttachment, FinderVideoAttachment;

@class WXPBGeneratedMessage;

@interface FinderAttachment : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderJumpInfoAttachment *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) FinderMiniAppAttachment *miniApp; // @dynamic miniApp;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) FinderVideoAttachment *video; // @dynamic video;

@end

