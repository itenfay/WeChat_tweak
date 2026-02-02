//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class MMFinderLiveMusicAddDataItem, MMUILabel, MMWebImageView, NSString, UIImageView;

@interface MMFinderLiveMusicSearchTableViewCell : UITableViewCell
{
    MMFinderLiveMusicAddDataItem *_searchMusicDataItem;
    CDUnknownBlockType _musicAddedCallback;
    MMWebImageView *_coverImageView;
    MMUILabel *_musicNameLabel;
    MMUILabel *_musicAnchorLabel;
    MMUILabel *_durationLabel;
    UIImageView *_addStateImage;
    double _contentWidth;
}

+ (id)identifier;
+ (double)preferLabelLeft;
+ (double)preferHeight;
- (void).cxx_destruct;
@property(nonatomic) double contentWidth; // @synthesize contentWidth=_contentWidth;
@property(retain, nonatomic) UIImageView *addStateImage; // @synthesize addStateImage=_addStateImage;
@property(retain, nonatomic) MMUILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) MMUILabel *musicAnchorLabel; // @synthesize musicAnchorLabel=_musicAnchorLabel;
@property(retain, nonatomic) MMUILabel *musicNameLabel; // @synthesize musicNameLabel=_musicNameLabel;
@property(retain, nonatomic) MMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(copy, nonatomic) CDUnknownBlockType musicAddedCallback; // @synthesize musicAddedCallback=_musicAddedCallback;
@property(retain, nonatomic) MMFinderLiveMusicAddDataItem *searchMusicDataItem; // @synthesize searchMusicDataItem=_searchMusicDataItem;
- (void)addButtonAction;
- (void)updateMusicAddedState;
- (void)onMusicSearchDataItemAdded:(id)arg1;
- (void)dealloc;
- (void)prepareForReuse;
- (id)highLightBrandAttrString:(id)arg1;
- (void)refreshContents;
- (void)layoutStateImg;
- (void)layoutDurationLabel;
- (void)layoutMusicAnchorLabel;
- (void)layoutMusicNameLabel;
- (void)layoutCoverImageView;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

