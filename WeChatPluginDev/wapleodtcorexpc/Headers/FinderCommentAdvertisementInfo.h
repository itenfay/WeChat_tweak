//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class DislikeInfo, FinderJumpInfo, NSMutableArray, NSString;

@interface FinderCommentAdvertisementInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderJumpInfo *accountJumpInfo; // @dynamic accountJumpInfo;
@property(retain, nonatomic) NSString *adLableName; // @dynamic adLableName;
@property(retain, nonatomic) FinderJumpInfo *adLablePageJumpInfo; // @dynamic adLablePageJumpInfo;
@property(nonatomic) unsigned long long aid; // @dynamic aid;
@property(retain, nonatomic) DislikeInfo *dislikeInfo; // @dynamic dislikeInfo;
@property(retain, nonatomic) NSMutableArray *dislikeReasonList; // @dynamic dislikeReasonList;
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) NSString *reportBypData; // @dynamic reportBypData;
@property(retain, nonatomic) NSString *reportExtraData; // @dynamic reportExtraData;
@property(retain, nonatomic) NSString *traceId; // @dynamic traceId;
@property(retain, nonatomic) NSString *uxinfo; // @dynamic uxinfo;

@end

