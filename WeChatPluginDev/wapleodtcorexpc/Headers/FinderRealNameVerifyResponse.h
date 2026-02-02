//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderLiveErrorPage, FinderRealNameVerifyPrepareInfo, NSString;

@interface FinderRealNameVerifyResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) FinderLiveErrorPage *errPage; // @dynamic errPage;
@property(retain, nonatomic) NSString *faceVerifyUrl; // @dynamic faceVerifyUrl;
@property(nonatomic) unsigned int lastVerifyResult; // @dynamic lastVerifyResult;
@property(nonatomic) unsigned int needFaceVerify; // @dynamic needFaceVerify;
@property(retain, nonatomic) FinderRealNameVerifyPrepareInfo *prepareInfo; // @dynamic prepareInfo;
@property(retain, nonatomic) NSString *verifyUrl; // @dynamic verifyUrl;

@end

