//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class WCFinderGameLiveListContentView;

@interface WCFinderGameLiveListCollectionViewCell : UICollectionViewCell
{
    WCFinderGameLiveListContentView *_liveListContentView;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderGameLiveListContentView *liveListContentView; // @synthesize liveListContentView=_liveListContentView;
- (void)updateCellWithRectCorner:(unsigned long long)arg1;
- (void)updateWithGameInfo:(id)arg1 searchText:(id)arg2;
- (void)unToggle;
- (void)toggle;
- (void)removeSeparator;
- (void)drawSeparator;
- (void)updateWithGameInfo:(id)arg1 isSelect:(_Bool)arg2;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

