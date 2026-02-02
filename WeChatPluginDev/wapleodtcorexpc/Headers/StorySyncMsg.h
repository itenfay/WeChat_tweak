//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class StorySyncMsgDetail;

@interface StorySyncMsg : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long id; // @dynamic id;
@property(retain, nonatomic) StorySyncMsgDetail *referSyncMsgDetail; // @dynamic referSyncMsgDetail;
@property(retain, nonatomic) StorySyncMsgDetail *syncMsgDetail; // @dynamic syncMsgDetail;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

