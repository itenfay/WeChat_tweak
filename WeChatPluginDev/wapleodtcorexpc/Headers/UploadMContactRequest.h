//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface UploadMContactRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSMutableArray *emailList; // @dynamic emailList;
@property(nonatomic) int emailListSize; // @dynamic emailListSize;
@property(retain, nonatomic) NSString *mobile; // @dynamic mobile;
@property(retain, nonatomic) NSMutableArray *mobileList; // @dynamic mobileList;
@property(nonatomic) int mobileListSize; // @dynamic mobileListSize;
@property(nonatomic) int opcode; // @dynamic opcode;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;

@end

