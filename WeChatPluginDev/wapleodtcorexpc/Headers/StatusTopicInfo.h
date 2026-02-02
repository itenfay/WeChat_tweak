//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSMutableArray, NSString, StatusClusterPresent, StatusFooter;

@interface StatusTopicInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;

// Remaining properties
@property(nonatomic) unsigned int characterSetType; // @dynamic characterSetType;
@property(retain, nonatomic) NSString *clusterIdDeprecated; // @dynamic clusterIdDeprecated;
@property(retain, nonatomic) StatusClusterPresent *clusterPresentDeprecated; // @dynamic clusterPresentDeprecated;
@property(retain, nonatomic) NSMutableArray *clusterPresents; // @dynamic clusterPresents;
@property(retain, nonatomic) NSData *clusterShowInfo; // @dynamic clusterShowInfo;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(retain, nonatomic) NSData *deprecatedBuffer; // @dynamic deprecatedBuffer;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) StatusFooter *footer; // @dynamic footer;
@property(retain, nonatomic) NSString *footerVerifyInfo; // @dynamic footerVerifyInfo;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSMutableArray *iconActions; // @dynamic iconActions;
@property(retain, nonatomic) NSString *iconId; // @dynamic iconId;
@property(retain, nonatomic) NSMutableArray *jumpElements; // @dynamic jumpElements;
@property(retain, nonatomic) NSMutableArray *jumpInfos; // @dynamic jumpInfos;
@property(retain, nonatomic) NSString *locale; // @dynamic locale;
@property(retain, nonatomic) NSString *mpSignature; // @dynamic mpSignature;
@property(retain, nonatomic) NSString *sourceActivityId; // @dynamic sourceActivityId;
@property(retain, nonatomic) NSString *sourceIcon; // @dynamic sourceIcon;
@property(retain, nonatomic) NSString *sourceId; // @dynamic sourceId;
@property(retain, nonatomic) NSMutableArray *sourceJumpInfos; // @dynamic sourceJumpInfos;
@property(retain, nonatomic) NSString *sourceName; // @dynamic sourceName;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *topicId; // @dynamic topicId;
@property(retain, nonatomic) NSMutableArray *topics; // @dynamic topics;

@end

