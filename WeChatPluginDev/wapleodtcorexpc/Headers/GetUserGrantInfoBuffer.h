//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray, UserGrantInterfaceConfig;

@interface GetUserGrantInfoBuffer : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *contextBuffer; // @dynamic contextBuffer;
@property(retain, nonatomic) UserGrantInterfaceConfig *interfaceConfig; // @dynamic interfaceConfig;
@property(retain, nonatomic) NSMutableArray *userGrantInfoList; // @dynamic userGrantInfoList;

@end

