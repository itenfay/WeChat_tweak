//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class WCFinderContactPreviewData, WCTableViewManager;
@protocol WCFinderHalfProfileInfoViewDelegate;

@interface WCFinderHalfProfileInfoView : UIView
{
    id <WCFinderHalfProfileInfoViewDelegate> _delegate;
    WCFinderContactPreviewData *_previewData;
    WCTableViewManager *_tableViewManager;
}

+ (double)finderHalfProfileInfoViewWithPreviewData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCTableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
@property(retain, nonatomic) WCFinderContactPreviewData *previewData; // @synthesize previewData=_previewData;
@property(nonatomic) __weak id <WCFinderHalfProfileInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getFinderCellViewWithPreviewData:(id)arg1;
- (void)addFinderEntranceCellAtSection:(id)arg1 previewData:(id)arg2;
- (void)showFinderProfile;
- (void)reloadData;
- (void)layoutSubviews;
- (void)updatePreViewData:(id)arg1;

@end

