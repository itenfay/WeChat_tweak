//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseResponse, NSString;

@class WXPBGeneratedMessage;

@interface MMBizScanConfSyncResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *confStr; // @dynamic confStr;
@property(retain, nonatomic) NSString *guide; // @dynamic guide;
@property(retain, nonatomic) NSString *retrievalLiteSuccText; // @dynamic retrievalLiteSuccText;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) NSString *version; // @dynamic version;

@end

