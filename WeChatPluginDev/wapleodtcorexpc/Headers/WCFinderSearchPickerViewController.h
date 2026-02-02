//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFinderFeedPickerParams;
@protocol WCFinderSearchPickerViewControllerDelegate;

@interface WCFinderSearchPickerViewController
{
    id <WCFinderSearchPickerViewControllerDelegate> _delegate;
    WCFinderFeedPickerParams *_params;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFeedPickerParams *params; // @synthesize params=_params;
@property(nonatomic) __weak id <WCFinderSearchPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (int)searchHistoryListViewEnterScene;
- (id)getSearchViewModel;
- (void)customHandleSelectedItem:(id)arg1 viewModel:(id)arg2 index:(long long)arg3;
- (_Bool)shouldCustomHandleSelectedItem;
- (void)viewDidLoad;
- (id)initWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

