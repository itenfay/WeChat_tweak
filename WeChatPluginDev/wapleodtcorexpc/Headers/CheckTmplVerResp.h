//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface CheckTmplVerResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *cdnUrl; // @dynamic cdnUrl;
@property(nonatomic) unsigned int checkColdDown; // @dynamic checkColdDown;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(retain, nonatomic) NSMutableArray *tmplInfoList; // @dynamic tmplInfoList;
@property(nonatomic) unsigned int version; // @dynamic version;
@property(nonatomic) unsigned int versionLowerBound; // @dynamic versionLowerBound;

@end

