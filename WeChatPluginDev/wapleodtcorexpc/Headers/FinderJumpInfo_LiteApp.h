//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface FinderJumpInfo_LiteApp : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (unsigned long long)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)archivedWCTValue;
- (id)genFinderLiteAppInfo;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(retain, nonatomic) NSString *defaultUrl; // @dynamic defaultUrl;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSData *extraData; // @dynamic extraData;
@property(nonatomic) float halfHeight; // @dynamic halfHeight;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned int heightPercent; // @dynamic heightPercent;
@property(nonatomic) _Bool isForbidRightgesture; // @dynamic isForbidRightgesture;
@property(nonatomic) _Bool isTransparent; // @dynamic isTransparent;
@property(retain, nonatomic) NSString *miniVersion; // @dynamic miniVersion;
@property(nonatomic) unsigned int openType; // @dynamic openType;
@property(retain, nonatomic) NSString *path; // @dynamic path;
@property(nonatomic) unsigned int position; // @dynamic position;
@property(retain, nonatomic) NSString *query; // @dynamic query;
@property(readonly) Class superclass;

@end

