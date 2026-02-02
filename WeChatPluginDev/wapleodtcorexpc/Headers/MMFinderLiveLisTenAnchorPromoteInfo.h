//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderLiveListenPromoteInfo;

@interface MMFinderLiveLisTenAnchorPromoteInfo : NSObject
{
    FinderLiveListenPromoteInfo *_liveListenPromoteInfo;
}

+ (id)createListenAnchorPromoteInfoFrom:(id)arg1;
@property(retain, nonatomic) FinderLiveListenPromoteInfo *liveListenPromoteInfo; // @synthesize liveListenPromoteInfo=_liveListenPromoteInfo;
- (id)promoteKey;

@end

