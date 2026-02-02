//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class WCFinderSearchContactCellContentView, WCFinderSearchInfo;
@protocol WCFinderMoreLiveSearchContactCellDelegate;

@interface WCFinderMoreLiveSearchContactCell : UITableViewCell
{
    id <WCFinderMoreLiveSearchContactCellDelegate> _delegate;
    WCFinderSearchInfo *_searchInfo;
    WCFinderSearchContactCellContentView *_cellContentView;
}

+ (double)cellHeightWith:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderSearchContactCellContentView *cellContentView; // @synthesize cellContentView=_cellContentView;
@property(retain, nonatomic) WCFinderSearchInfo *searchInfo; // @synthesize searchInfo=_searchInfo;
@property(nonatomic) __weak id <WCFinderMoreLiveSearchContactCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getAttributeText:(id)arg1;
- (void)updateUIWith:(id)arg1 isShowSeparatorLine:(_Bool)arg2 shouldHideFollow:(_Bool)arg3 useRoundHeader:(_Bool)arg4;
- (void)prepareForReuse;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)initSubview;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

