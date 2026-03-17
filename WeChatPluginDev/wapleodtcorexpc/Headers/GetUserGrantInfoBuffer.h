//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSData, NSMutableArray, UserGrantInterfaceConfig;

@class WXPBGeneratedMessage;

@interface GetUserGrantInfoBuffer : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSData *contextBuffer; // @dynamic contextBuffer;
@property(retain, nonatomic) UserGrantInterfaceConfig *interfaceConfig; // @dynamic interfaceConfig;
@property(retain, nonatomic) NSMutableArray *userGrantInfoList; // @dynamic userGrantInfoList;

@end

