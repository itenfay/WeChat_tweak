//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveLiveVoteChoice, NSString;

@interface MMFinderLiveCreateVoteChoiceTableViewCell
{
    MMFinderLiveLiveVoteChoice *_choice;
}

+ (id)reuseId;
- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveLiveVoteChoice *choice; // @synthesize choice=_choice;
- (void)customizeTextField:(id)arg1;
- (void)textFieldDidChangeContent:(id)arg1;
- (long long)textFieldWordLimit;
- (id)getCurrentSongName;
- (void)configWithChoice:(id)arg1;
- (void)prepareForReuse;
- (void)customLayoutSubviews;
- (void)setIsAddCell:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

