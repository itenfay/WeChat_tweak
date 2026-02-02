//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLivePromoteInfoListMpArticleInfo, FinderLivePromoteInfoRedPacketCover, NSString;

@interface FinderLiveAnchorAddPromoteInfoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long adId; // @dynamic adId;
@property(retain, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(nonatomic) unsigned long long collectionId; // @dynamic collectionId;
@property(retain, nonatomic) NSString *jumpinfoId; // @dynamic jumpinfoId;
@property(retain, nonatomic) NSString *liveNoticeId; // @dynamic liveNoticeId;
@property(retain, nonatomic) FinderLivePromoteInfoListMpArticleInfo *mpArticleInfo; // @dynamic mpArticleInfo;
@property(retain, nonatomic) NSString *programmeListId; // @dynamic programmeListId;
@property(nonatomic) unsigned int promoteType; // @dynamic promoteType;
@property(retain, nonatomic) FinderLivePromoteInfoRedPacketCover *redPacketCoverInfo; // @dynamic redPacketCoverInfo;

@end

