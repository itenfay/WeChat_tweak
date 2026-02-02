//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;
@protocol WCVideoEditResultActionSheetRecentForwardDelegate;

@interface WCVideoEditResultActionSheet
{
    NSArray *_actions;
    id <WCVideoEditResultActionSheetRecentForwardDelegate> _recentForwardDelegate;
}

+ (id)allActions;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCVideoEditResultActionSheetRecentForwardDelegate> recentForwardDelegate; // @synthesize recentForwardDelegate=_recentForwardDelegate;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (_Bool)disableScrollSheetItem:(long long)arg1;
- (id)seperatorBackgroundColor;
- (id)containerViewBlurBackgroundColor;
- (id)cancelButtonBackgroundColor;
- (id)cancelButtonTitleColor;
- (id)titleLabelColor;
- (id)bottomPadddingViewBackgroundColor;
- (id)transparentViewBackgroundColor;
- (id)buildItemArray;
- (void)loadData;
- (id)init;
- (id)initWithActions:(id)arg1;
- (void)initRecentForwardScrollView;
- (void)relayoutScrollSheet;
- (void)clickRFItemCallBack:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

