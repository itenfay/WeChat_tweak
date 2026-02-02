//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface FinderJumpInfo_MiniAppInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)archivedWCTValue;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) NSString *appUsername; // @dynamic appUsername;
@property(nonatomic) unsigned int capsuleMenuType; // @dynamic capsuleMenuType;
@property(retain, nonatomic) NSData *extraData; // @dynamic extraData;
@property(retain, nonatomic) NSString *fetchInfoId; // @dynamic fetchInfoId;
@property(nonatomic) unsigned int halfPageCustomHeight; // @dynamic halfPageCustomHeight;
@property(nonatomic) _Bool hideDefaultBar; // @dynamic hideDefaultBar;
@property(nonatomic) _Bool hideDragBar; // @dynamic hideDragBar;
@property(nonatomic) unsigned int launchAnimationType; // @dynamic launchAnimationType;
@property(retain, nonatomic) NSString *openExtraData; // @dynamic openExtraData;
@property(retain, nonatomic) NSString *openPopupTitle; // @dynamic openPopupTitle;
@property(retain, nonatomic) NSString *openPopupWording; // @dynamic openPopupWording;
@property(nonatomic) unsigned long long outProductId; // @dynamic outProductId;
@property(retain, nonatomic) NSString *path; // @dynamic path;
@property(retain, nonatomic) NSString *productPathCookie; // @dynamic productPathCookie;
@property(retain, nonatomic) NSString *requestId; // @dynamic requestId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *sceneNote; // @dynamic sceneNote;
@property(retain, nonatomic) NSString *tooltipWording; // @dynamic tooltipWording;
@property(retain, nonatomic) NSString *transitCommonUxInfo; // @dynamic transitCommonUxInfo;
@property(nonatomic) _Bool transparentMode; // @dynamic transparentMode;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(nonatomic) _Bool useCapsuleMenuType; // @dynamic useCapsuleMenuType;
@property(nonatomic) unsigned int versionType; // @dynamic versionType;

@end

