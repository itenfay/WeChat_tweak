//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, SecSdkImgInfo, SecSdkVideoInfo;

@interface SecClientSDKMediaFeature : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appname; // @dynamic appname;
@property(retain, nonatomic) NSMutableArray *imgInfoList; // @dynamic imgInfoList;
@property(retain, nonatomic) NSString *msgId; // @dynamic msgId;
@property(retain, nonatomic) SecSdkImgInfo *thumbInfo; // @dynamic thumbInfo;
@property(retain, nonatomic) SecSdkVideoInfo *videoInfo; // @dynamic videoInfo;

@end

