//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class WCFinderDataItem, WCFinderFeedStaticCoverView;

@interface WCFinderLiveCompleteLiveVideoContentItem : UIView
{
    WCFinderDataItem *_dataItem;
    WCFinderFeedStaticCoverView *_coverView;
    CDUnknownBlockType _action;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(retain, nonatomic) WCFinderFeedStaticCoverView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)onClickItem:(id)arg1;
- (void)updateDataItem:(id)arg1;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

