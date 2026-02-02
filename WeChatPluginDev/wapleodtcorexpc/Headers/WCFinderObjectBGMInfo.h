//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderMusicInfoModel;

@interface WCFinderObjectBGMInfo : NSObject
{
    unsigned int _hasBgm;
    WCFinderMusicInfoModel *_musicInfo;
    NSString *_groupId;
    unsigned long long _postMusicType;
}

+ (void)initialize;
+ (void)PBArrayAdd_postMusicType;
+ (void)PBArrayAdd_hasBgm;
+ (void)PBArrayAdd_groupId;
+ (void)PBArrayAdd_musicInfo;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long postMusicType; // @synthesize postMusicType=_postMusicType;
@property(nonatomic) unsigned int hasBgm; // @synthesize hasBgm=_hasBgm;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) WCFinderMusicInfoModel *musicInfo; // @synthesize musicInfo=_musicInfo;
- (id)genFinderObjectBGMInfo;
- (id)initWithFinderObjectBGMInfo:(id)arg1;
- (id)initWithEditMusicInfo:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

