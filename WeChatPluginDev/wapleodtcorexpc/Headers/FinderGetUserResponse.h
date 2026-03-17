//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, FinderGetUserResponse_QRCodeSource, NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface FinderGetUserResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSMutableArray *contactList; // @dynamic contactList;
@property(retain, nonatomic) NSString *exportUsernameBuffer; // @dynamic exportUsernameBuffer;
@property(retain, nonatomic) FinderGetUserResponse_QRCodeSource *qrcodeSource; // @dynamic qrcodeSource;

@end

