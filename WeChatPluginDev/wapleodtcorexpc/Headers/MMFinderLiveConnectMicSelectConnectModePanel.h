//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveConnectMicSelectConnectModeItemView;
@protocol MMFinderLiveConnectMicSelectConnectModeDelegate;

@interface MMFinderLiveConnectMicSelectConnectModePanel
{
    _Bool _canAutoConnect;
    id <MMFinderLiveConnectMicSelectConnectModeDelegate> _actionDelegate;
    MMFinderLiveConnectMicSelectConnectModeItemView *_anchorConfirmItemView;
    MMFinderLiveConnectMicSelectConnectModeItemView *_autoConnectItemView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveConnectMicSelectConnectModeItemView *autoConnectItemView; // @synthesize autoConnectItemView=_autoConnectItemView;
@property(retain, nonatomic) MMFinderLiveConnectMicSelectConnectModeItemView *anchorConfirmItemView; // @synthesize anchorConfirmItemView=_anchorConfirmItemView;
@property(nonatomic) _Bool canAutoConnect; // @synthesize canAutoConnect=_canAutoConnect;
@property(nonatomic) __weak id <MMFinderLiveConnectMicSelectConnectModeDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)pageSheetDidClose:(_Bool)arg1;
- (void)onTapAutoConnectItemView;
- (void)onTapAnchorConfirmItemView;
- (void)configAllSubviews;
- (id)initWithFrame:(struct CGRect)arg1 canAutoConnect:(_Bool)arg2;

@end

