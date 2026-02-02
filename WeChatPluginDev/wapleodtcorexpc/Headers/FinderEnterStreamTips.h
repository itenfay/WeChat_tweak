//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderEnterStreamTipsBypassInfo, FinderJumpInfo, NSMutableArray, NSString;

@interface FinderEnterStreamTips : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *allowedCommentScene; // @dynamic allowedCommentScene;
@property(retain, nonatomic) FinderEnterStreamTipsBypassInfo *bypassInfo; // @dynamic bypassInfo;
@property(nonatomic) unsigned int endTs; // @dynamic endTs;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(nonatomic) unsigned long long seq; // @dynamic seq;
@property(nonatomic) unsigned int streamTipType; // @dynamic streamTipType;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end

