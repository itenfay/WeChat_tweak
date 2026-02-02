//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface DislikeInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *closeReasonList; // @dynamic closeReasonList;
@property(retain, nonatomic) NSMutableArray *dislikeReasonList; // @dynamic dislikeReasonList;
@property(retain, nonatomic) NSMutableArray *likeReasonList; // @dynamic likeReasonList;

@end

