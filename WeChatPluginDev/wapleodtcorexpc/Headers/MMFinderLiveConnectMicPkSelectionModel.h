//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveMicInfo_Wording, MMFinderLiveBattleDurationItem, MMFinderLiveConnectMicPkSelectionResult, MMFinderLiveConnectMicUsersInfo, NSArray;

@interface MMFinderLiveConnectMicPkSelectionModel : NSObject
{
    _Bool _requireChanges;
    _Bool _disableModifyPlayMode;
    unsigned long long _opponentScenario;
    MMFinderLiveConnectMicUsersInfo *_connectMicUsersInfo;
    FinderLiveMicInfo_Wording *_wordings;
    NSArray *_durationOptions;
    MMFinderLiveBattleDurationItem *_defaultDurationOption;
    MMFinderLiveConnectMicPkSelectionResult *_currentPkSelectResult;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool disableModifyPlayMode; // @synthesize disableModifyPlayMode=_disableModifyPlayMode;
@property(nonatomic) _Bool requireChanges; // @synthesize requireChanges=_requireChanges;
@property(retain, nonatomic) MMFinderLiveConnectMicPkSelectionResult *currentPkSelectResult; // @synthesize currentPkSelectResult=_currentPkSelectResult;
@property(retain, nonatomic) MMFinderLiveBattleDurationItem *defaultDurationOption; // @synthesize defaultDurationOption=_defaultDurationOption;
@property(retain, nonatomic) NSArray *durationOptions; // @synthesize durationOptions=_durationOptions;
@property(retain, nonatomic) FinderLiveMicInfo_Wording *wordings; // @synthesize wordings=_wordings;
@property(retain, nonatomic) MMFinderLiveConnectMicUsersInfo *connectMicUsersInfo; // @synthesize connectMicUsersInfo=_connectMicUsersInfo;
@property(nonatomic) unsigned long long opponentScenario; // @synthesize opponentScenario=_opponentScenario;

@end

