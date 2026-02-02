//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderEventBaseResponse, NSData, NSMutableArray;

@interface RefreshCommentResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderEventBaseResponse *baseResp; // @dynamic baseResp;
@property(retain, nonatomic) NSMutableArray *comments; // @dynamic comments;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;

@end

