//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, NSString, SyncVersionSingleReqInfo;

@class WXPBGeneratedMessage;

@interface PreDownloadCodeReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) SyncVersionSingleReqInfo *req; // @dynamic req;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) _Bool separate; // @dynamic separate;
@property(retain, nonatomic) NSString *specialNeedModuleName; // @dynamic specialNeedModuleName;

@end

