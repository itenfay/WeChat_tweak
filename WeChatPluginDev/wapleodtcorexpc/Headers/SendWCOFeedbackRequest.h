//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray;

@interface SendWCOFeedbackRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) int fbcount; // @dynamic fbcount;
@property(retain, nonatomic) NSMutableArray *fblist; // @dynamic fblist;
@property(nonatomic) int level; // @dynamic level;
@property(nonatomic) unsigned int roomId; // @dynamic roomId;

@end

