//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveGameTeamInfo;

@interface MMLiveGamePlayTogetherJoinTeamItem : NSObject
{
    MMFinderLiveGameTeamInfo *_teamInfo;
}

@property(retain, nonatomic) MMFinderLiveGameTeamInfo *teamInfo; // @synthesize teamInfo=_teamInfo;
- (double)heightForCell;
- (id)initWithTeamInfo:(id)arg1;

@end

