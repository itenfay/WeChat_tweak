//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, FinderBaseRequest, NSString;

@class WXPBGeneratedMessage;

@interface FinderPoiBasicInfoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(nonatomic) unsigned int fromCommentScene; // @dynamic fromCommentScene;
@property(retain, nonatomic) NSString *poiId; // @dynamic poiId;
@property(nonatomic) unsigned int prefetch; // @dynamic prefetch;

@end

