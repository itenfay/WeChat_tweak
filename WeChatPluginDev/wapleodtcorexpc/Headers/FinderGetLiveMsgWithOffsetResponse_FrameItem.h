//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderGetLiveMsgResp, NSString;

@interface FinderGetLiveMsgWithOffsetResponse_FrameItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *frameId; // @dynamic frameId;
@property(nonatomic) unsigned int frameOffsetInSecond; // @dynamic frameOffsetInSecond;
@property(retain, nonatomic) FinderGetLiveMsgResp *getLiveMsgResponse; // @dynamic getLiveMsgResponse;

@end

