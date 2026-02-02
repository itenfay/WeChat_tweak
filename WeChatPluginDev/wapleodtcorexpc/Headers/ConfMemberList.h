//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface ConfMemberList : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long imroomid; // @dynamic imroomid;
@property(nonatomic) unsigned int memberChangeFrom; // @dynamic memberChangeFrom;
@property(nonatomic) unsigned int memberChangeSeq; // @dynamic memberChangeSeq;
@property(retain, nonatomic) NSMutableArray *memberList; // @dynamic memberList;
@property(nonatomic) unsigned long long roomid; // @dynamic roomid;

@end

