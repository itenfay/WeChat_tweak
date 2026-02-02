//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveFansGroupAnchorEditViewModel, MMFinderLiveTaskId, NSArray, NSMutableArray;
@protocol MMFinderLiveAnchorCustomizeRewardViewModelDelegate;

@interface MMFinderLiveAnchorCustomizeRewardViewModel : UIView
{
    _Bool _isFansGroupDataAvailable;
    _Bool _isAnchorCustomizeDataAvailable;
    id <MMFinderLiveAnchorCustomizeRewardViewModelDelegate> _delegate;
    MMFinderLiveTaskId *_taskId;
    MMFinderLiveFansGroupAnchorEditViewModel *_fansGroupCustomizeRewardViewModel;
    NSMutableArray *_anchorCustomizeRewardItemMutableArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *anchorCustomizeRewardItemMutableArray; // @synthesize anchorCustomizeRewardItemMutableArray=_anchorCustomizeRewardItemMutableArray;
@property(retain, nonatomic) MMFinderLiveFansGroupAnchorEditViewModel *fansGroupCustomizeRewardViewModel; // @synthesize fansGroupCustomizeRewardViewModel=_fansGroupCustomizeRewardViewModel;
@property _Bool isAnchorCustomizeDataAvailable; // @synthesize isAnchorCustomizeDataAvailable=_isAnchorCustomizeDataAvailable;
@property _Bool isFansGroupDataAvailable; // @synthesize isFansGroupDataAvailable=_isFansGroupDataAvailable;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMFinderLiveAnchorCustomizeRewardViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)startFetchingCustomizeRewardData;
@property(readonly, nonatomic) NSArray *anchorCustomizeRewardItemArray;
@property(readonly, nonatomic) NSArray *fansGroupCustomizeRewardItemArray;
@property(readonly, nonatomic) _Bool isDataAvailable;
- (id)initWithTaskId:(id)arg1;

@end

