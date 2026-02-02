//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderAttachmentList, FinderBaseRequest, FinderObjectDesc, FinderPostTraceInfo, NSData, NSString;

@interface FinderPostDraftRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderAttachmentList *attachmentList; // @dynamic attachmentList;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *clientId; // @dynamic clientId;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(nonatomic) unsigned int handleFlag; // @dynamic handleFlag;
@property(retain, nonatomic) FinderObjectDesc *objectDesc; // @dynamic objectDesc;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(nonatomic) unsigned int objectType; // @dynamic objectType;
@property(nonatomic) unsigned long long postFlag; // @dynamic postFlag;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSData *sdkMediaFeature; // @dynamic sdkMediaFeature;
@property(retain, nonatomic) FinderPostTraceInfo *traceInfo; // @dynamic traceInfo;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

