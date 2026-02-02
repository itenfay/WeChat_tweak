//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLivePromoteInfoRedPacketCover;

@interface MMFinderLiveRedPacketAnchorPromoteInfo
{
    FinderLivePromoteInfoRedPacketCover *_redPacketInfo;
}

+ (id)createRedPacketAnchorPromoteInfoFrom:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderLivePromoteInfoRedPacketCover *redPacketInfo; // @synthesize redPacketInfo=_redPacketInfo;
- (id)promoteKey;

@end

