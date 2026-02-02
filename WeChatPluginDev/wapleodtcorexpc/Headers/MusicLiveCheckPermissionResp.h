//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSString;

@interface MusicLiveCheckPermissionResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) NSString *finderunicommentAppname; // @dynamic finderunicommentAppname;
@property(retain, nonatomic) NSString *finderunicommentEntityId; // @dynamic finderunicommentEntityId;
@property(nonatomic) unsigned long long permissionBits; // @dynamic permissionBits;
@property(retain, nonatomic) NSString *songid; // @dynamic songid;
@property(retain, nonatomic) NSString *statusVerifyInfo; // @dynamic statusVerifyInfo;

@end

