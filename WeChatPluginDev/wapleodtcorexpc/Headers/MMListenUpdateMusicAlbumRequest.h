//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, MMListenUpdateMusicAlbumRequest_Task, NSMutableArray, NSString;

@interface MMListenUpdateMusicAlbumRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResquest; // @dynamic baseResquest;
@property(retain, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(retain, nonatomic) NSMutableArray *reorderTasks; // @dynamic reorderTasks;
@property(retain, nonatomic) MMListenUpdateMusicAlbumRequest_Task *task; // @dynamic task;

@end

