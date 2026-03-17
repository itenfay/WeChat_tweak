//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class FinderGetRelatedListResp, MegaVideoFeed, NSString;

@class WXPBGeneratedMessage;

@interface MegaVideoPreFetchContinuePlayResult : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int errcode; // @dynamic errcode;
@property(retain, nonatomic) NSString *errmsg; // @dynamic errmsg;
@property(retain, nonatomic) MegaVideoFeed *feed; // @dynamic feed;
@property(retain, nonatomic) FinderGetRelatedListResp *resp; // @dynamic resp;

@end

