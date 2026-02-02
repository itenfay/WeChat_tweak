//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, OpenSdkFaceDetectInfo_FaceDetectPromptButton;

@interface OpenSdkFaceDetectInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) OpenSdkFaceDetectInfo_FaceDetectPromptButton *prompt; // @dynamic prompt;
@property(nonatomic) _Bool shouldFaceDetect; // @dynamic shouldFaceDetect;

@end

