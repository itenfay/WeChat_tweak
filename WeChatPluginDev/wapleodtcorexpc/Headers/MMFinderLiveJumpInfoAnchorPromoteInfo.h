//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FinderJumpInfo;

@interface MMFinderLiveJumpInfoAnchorPromoteInfo : NSObject
{
    FinderJumpInfo *_jumpInfo;
}

@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @synthesize jumpInfo=_jumpInfo;
- (id)promoteKey;

@end

