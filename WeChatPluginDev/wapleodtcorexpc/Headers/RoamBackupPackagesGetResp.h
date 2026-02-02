//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray;

@interface RoamBackupPackagesGetResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *backupPackages; // @dynamic backupPackages;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;

@end

