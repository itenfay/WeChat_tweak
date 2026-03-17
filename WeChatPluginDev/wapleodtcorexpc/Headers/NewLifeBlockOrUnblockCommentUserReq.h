//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class FinderCommentInfo, NSString;

@class WXPBGeneratedMessage;

@interface NewLifeBlockOrUnblockCommentUserReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderCommentInfo *comment; // @dynamic comment;
@property(nonatomic) unsigned long long feedId; // @dynamic feedId;
@property(retain, nonatomic) NSString *nonceId; // @dynamic nonceId;

@end

