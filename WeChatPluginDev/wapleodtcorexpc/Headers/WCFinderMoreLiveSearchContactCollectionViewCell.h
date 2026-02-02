//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class WCFinderSearchContactCellContentView, WCFinderSearchInfo;
@protocol WCFinderMoreLiveSearchContactCollectionViewCellDelegate;

@interface WCFinderMoreLiveSearchContactCollectionViewCell : UICollectionViewCell
{
    id <WCFinderMoreLiveSearchContactCollectionViewCellDelegate> _delegate;
    WCFinderSearchInfo *_searchInfo;
    WCFinderSearchContactCellContentView *_cellContentView;
}

+ (double)cellHeightWith:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderSearchContactCellContentView *cellContentView; // @synthesize cellContentView=_cellContentView;
@property(retain, nonatomic) WCFinderSearchInfo *searchInfo; // @synthesize searchInfo=_searchInfo;
@property(nonatomic) __weak id <WCFinderMoreLiveSearchContactCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)accessibilityLabel;
- (id)getAttributeText:(id)arg1;
- (void)updateUIWith:(id)arg1 isShowSeparatorLine:(_Bool)arg2;
- (void)prepareForReuse;
- (void)initSubview;
- (id)initWithFrame:(struct CGRect)arg1;

@end

