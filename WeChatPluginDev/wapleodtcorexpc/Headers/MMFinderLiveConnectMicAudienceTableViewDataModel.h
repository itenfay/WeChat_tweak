//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MMFinderLiveConnectMicAudienceTableViewDataModel : NSObject
{
    NSMutableArray *_sectionTypeList;
    unsigned long long _cellCountInMicUserSection;
    unsigned long long _cellCountInApplyingMicUserSection;
    unsigned long long _cellCountInCanBeInvitedMicUserSection;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long cellCountInCanBeInvitedMicUserSection; // @synthesize cellCountInCanBeInvitedMicUserSection=_cellCountInCanBeInvitedMicUserSection;
@property(nonatomic) unsigned long long cellCountInApplyingMicUserSection; // @synthesize cellCountInApplyingMicUserSection=_cellCountInApplyingMicUserSection;
@property(nonatomic) unsigned long long cellCountInMicUserSection; // @synthesize cellCountInMicUserSection=_cellCountInMicUserSection;
@property(retain, nonatomic) NSMutableArray *sectionTypeList; // @synthesize sectionTypeList=_sectionTypeList;
- (unsigned long long)sectionTypeForSection:(long long)arg1;
- (unsigned long long)cellTypeForRowAtIndexPath:(id)arg1;
- (long long)numberOfSections;
- (long long)numberOfRowsInSection:(long long)arg1;
- (id)initWithMicUsersCount:(unsigned long long)arg1 applyingMicUsersCount:(unsigned long long)arg2 isAudiencePkEnable:(_Bool)arg3 canBeInvitedMicUsersCount:(unsigned long long)arg4 isPaidConnectMic:(_Bool)arg5 canShowKtvSongList:(_Bool)arg6;

@end

