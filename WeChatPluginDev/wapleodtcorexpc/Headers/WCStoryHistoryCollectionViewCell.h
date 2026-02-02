//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class MMUIImageView, MMUILabel, NSString, UIImage, WCStoryDataUnit, WCStoryMediaItem;

@interface WCStoryHistoryCollectionViewCell : UICollectionViewCell
{
    WCStoryDataUnit *_dataUnit;
    UIImage *_thumbImage;
    MMUIImageView *_thumbImageView;
    WCStoryMediaItem *_mediaItem;
    MMUILabel *_countLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) WCStoryMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) MMUIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(retain, nonatomic) WCStoryDataUnit *dataUnit; // @synthesize dataUnit=_dataUnit;
- (void)onStoryThumbDownloadFail:(id)arg1;
- (void)onStoryThumbDownloadSuccess:(id)arg1;
- (void)tryLoadThumbImage;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

