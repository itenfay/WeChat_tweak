//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderContactExtRelationInfo, NSString;

@interface FinderUserPagePreviewRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int contactType; // @dynamic contactType;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(retain, nonatomic) NSString *msProviderFinderusername; // @dynamic msProviderFinderusername;
@property(retain, nonatomic) NSString *posterFinderusername; // @dynamic posterFinderusername;
@property(retain, nonatomic) FinderContactExtRelationInfo *relationInfo; // @dynamic relationInfo;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *wxUsername; // @dynamic wxUsername;

@end

