//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenCommentInfo, NSString;

@interface MMListenCommentInfoResponse_Result : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(retain, nonatomic) MMListenCommentInfo *commentInfo; // @dynamic commentInfo;
@property(retain, nonatomic) NSString *listenId; // @dynamic listenId;

@end

