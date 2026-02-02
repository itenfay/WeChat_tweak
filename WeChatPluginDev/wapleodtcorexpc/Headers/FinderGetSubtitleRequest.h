//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, NSData, NSMutableArray;

@interface FinderGetSubtitleRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSMutableArray *languageReq; // @dynamic languageReq;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(nonatomic) unsigned long long objectId; // @dynamic objectId;
@property(nonatomic) unsigned long long startTimestamp; // @dynamic startTimestamp;
@property(nonatomic) unsigned long long subtitleId; // @dynamic subtitleId;

@end

