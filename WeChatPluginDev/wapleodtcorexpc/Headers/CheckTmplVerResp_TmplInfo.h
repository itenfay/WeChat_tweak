//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface CheckTmplVerResp_TmplInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *cdnUrl; // @dynamic cdnUrl;
@property(retain, nonatomic) NSString *fullVersion; // @dynamic fullVersion;
@property(retain, nonatomic) NSMutableArray *httpHeaderList; // @dynamic httpHeaderList;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(nonatomic) _Bool needGetA8Key; // @dynamic needGetA8Key;
@property(nonatomic) unsigned int reportId; // @dynamic reportId;
@property(nonatomic) int type; // @dynamic type;
@property(nonatomic) unsigned int version; // @dynamic version;
@property(retain, nonatomic) NSMutableArray *versionControlList; // @dynamic versionControlList;
@property(retain, nonatomic) NSString *versionGroup; // @dynamic versionGroup;
@property(nonatomic) unsigned int versionLowerBound; // @dynamic versionLowerBound;

@end

