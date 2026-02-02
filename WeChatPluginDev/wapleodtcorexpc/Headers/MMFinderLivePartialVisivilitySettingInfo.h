//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray;

@interface MMFinderLivePartialVisivilitySettingInfo
{
    NSArray *_originalChoosedContactList;
    NSMutableArray *_chooseContactChatroomList;
    NSMutableArray *_chooseContactUsernameList;
    NSMutableArray *_selectedVisibleFileLists;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *selectedVisibleFileLists; // @synthesize selectedVisibleFileLists=_selectedVisibleFileLists;
@property(retain, nonatomic) NSMutableArray *chooseContactUsernameList; // @synthesize chooseContactUsernameList=_chooseContactUsernameList;
@property(retain, nonatomic) NSMutableArray *chooseContactChatroomList; // @synthesize chooseContactChatroomList=_chooseContactChatroomList;
@property(retain, nonatomic) NSArray *originalChoosedContactList; // @synthesize originalChoosedContactList=_originalChoosedContactList;
- (id)getDescriptionForCurrentSetting;
- (_Bool)isSettingEnabled;
- (void)recoverInfosToInitParam:(id)arg1;
- (void)copyInfosFromSettingInfo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

