//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@class WCFinderSearchContactCellContentView, WCFinderSearchInfo;
@protocol WCFinderSearchContactCellDelegate;

@interface WCFinderSearchContactCell : UITableViewCell
{
    id <WCFinderSearchContactCellDelegate> _delegate;
    WCFinderSearchInfo *_searchInfo;
    WCFinderSearchContactCellContentView *_cellContentView;
}

+ (double)cellHeightWith:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderSearchContactCellContentView *cellContentView; // @synthesize cellContentView=_cellContentView;
@property(retain, nonatomic) WCFinderSearchInfo *searchInfo; // @synthesize searchInfo=_searchInfo;
@property(nonatomic) __weak id <WCFinderSearchContactCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getAttributeText:(id)arg1;
- (void)updateUIWith:(id)arg1 params:(id)arg2;
- (void)updateUIWith:(id)arg1 isShowSeparatorLine:(_Bool)arg2 shouldHideFollow:(_Bool)arg3 useRoundHeader:(_Bool)arg4;
- (void)prepareForReuse;
- (void)initSubview;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

