//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveGameTeamInfo_FinderGameLiveWxaExtraJoinInfo, FinderLiveGameTeamInfo_WeappJumpInfo;

@interface MMFinderLiveGameTeamWAGameJumpInfo : NSObject
{
    FinderLiveGameTeamInfo_WeappJumpInfo *_wxaJumpInfo;
    FinderLiveGameTeamInfo_FinderGameLiveWxaExtraJoinInfo *_wxaExtraJoinInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveGameTeamInfo_FinderGameLiveWxaExtraJoinInfo *wxaExtraJoinInfo; // @synthesize wxaExtraJoinInfo=_wxaExtraJoinInfo;
@property(retain, nonatomic) FinderLiveGameTeamInfo_WeappJumpInfo *wxaJumpInfo; // @synthesize wxaJumpInfo=_wxaJumpInfo;

@end

