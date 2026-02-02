//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray;

@interface SetUserGrantInfoBuffer : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *contextBuffer; // @dynamic contextBuffer;
@property(nonatomic) unsigned int submitValue; // @dynamic submitValue;
@property(retain, nonatomic) NSMutableArray *userGrantInfoList; // @dynamic userGrantInfoList;

@end

