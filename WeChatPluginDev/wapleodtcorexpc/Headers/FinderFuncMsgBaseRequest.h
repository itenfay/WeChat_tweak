//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderBaseRequest, NSMutableArray, NSString;

@interface FinderFuncMsgBaseRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *clientAiInfo; // @dynamic clientAiInfo;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSMutableArray *list; // @dynamic list;
@property(nonatomic) unsigned int num; // @dynamic num;
@property(nonatomic) unsigned int scene; // @dynamic scene;

@end

