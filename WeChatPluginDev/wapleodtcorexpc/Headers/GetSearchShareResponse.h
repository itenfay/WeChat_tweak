//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, GetSearchShareResponse_SearchShareContext, SearchBrandContactShare, SearchBrandFeedsShare, SearchEmoticonShare, SearchFinderAccountShare, SearchFinderFeedsShare, SearchLiteAppShare, SearchWeappFeedsShare, SearchWeappShare;

@interface GetSearchShareResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) SearchBrandFeedsShare *brandFeed; // @dynamic brandFeed;
@property(retain, nonatomic) SearchBrandContactShare *brandProfile; // @dynamic brandProfile;
@property(retain, nonatomic) GetSearchShareResponse_SearchShareContext *context; // @dynamic context;
@property(retain, nonatomic) SearchEmoticonShare *emoticon; // @dynamic emoticon;
@property(retain, nonatomic) SearchFinderFeedsShare *finderFeed; // @dynamic finderFeed;
@property(retain, nonatomic) SearchFinderAccountShare *finderProfile; // @dynamic finderProfile;
@property(retain, nonatomic) SearchLiteAppShare *liteApp; // @dynamic liteApp;
@property(retain, nonatomic) SearchWeappFeedsShare *weappFeed; // @dynamic weappFeed;
@property(retain, nonatomic) SearchWeappShare *weappProfile; // @dynamic weappProfile;

@end

