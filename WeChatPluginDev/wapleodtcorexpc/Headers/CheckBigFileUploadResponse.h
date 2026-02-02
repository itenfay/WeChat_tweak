//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface CheckBigFileUploadResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *fakeAeskey; // @dynamic fakeAeskey;
@property(retain, nonatomic) NSString *fakeSignature; // @dynamic fakeSignature;
@property(nonatomic) unsigned int fakeuin; // @dynamic fakeuin;
@property(retain, nonatomic) NSString *signature; // @dynamic signature;

@end

