//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderUserPageReqPreload, NSString;

@interface FinderHomePageRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int enterType; // @dynamic enterType;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(nonatomic) unsigned long long flag; // @dynamic flag;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(retain, nonatomic) FinderUserPageReqPreload *preload; // @dynamic preload;
@property(nonatomic) unsigned long long refLiveObjectId; // @dynamic refLiveObjectId;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

