//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveSongItem, NSString, UILabel;

@interface MMFinderLiveAddSongItemTableViewCell
{
    MMFinderLiveSongItem *_item;
    UILabel *_warningLabel;
}

+ (double)heightWithItem:(id)arg1 maxWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *warningLabel; // @synthesize warningLabel=_warningLabel;
@property(retain, nonatomic) MMFinderLiveSongItem *item; // @synthesize item=_item;
- (void)textFieldDidChangeContent:(id)arg1;
- (id)getCurrentSongName;
- (void)customLayoutSubviews;
- (void)customizeTextField:(id)arg1;
- (long long)textFieldWordLimit;
- (void)configWithSongItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

