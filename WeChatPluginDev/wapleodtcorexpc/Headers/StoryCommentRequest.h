//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, StoryCommentDetail;

@interface StoryCommentRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *clientId; // @dynamic clientId;
@property(retain, nonatomic) StoryCommentDetail *commentDetail; // @dynamic commentDetail;
@property(nonatomic) unsigned int previewEnterScene; // @dynamic previewEnterScene;
@property(nonatomic) unsigned int profileSource; // @dynamic profileSource;
@property(retain, nonatomic) StoryCommentDetail *referCommentDetail; // @dynamic referCommentDetail;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;

@end

