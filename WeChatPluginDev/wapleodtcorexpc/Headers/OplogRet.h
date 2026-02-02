//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface OplogRet : WXPBGeneratedMessage
{
    int retMemoizedSerializedSize;
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int count; // @dynamic count;
@property(retain, nonatomic) NSMutableArray *errMsg; // @dynamic errMsg;
@property(retain, nonatomic) NSMutableArray *ret; // @dynamic ret;

@end

