//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionReusableView.h>

@class NSArray, NSString, WCFinderTabSwitchView;
@protocol WCFinderSearchTabCellHeaderDelegate;

@interface WCFinderSearchTabCellHeader : UICollectionReusableView
{
    id <WCFinderSearchTabCellHeaderDelegate> _delegate;
    NSArray *_tabs;
    WCFinderTabSwitchView *_switchView;
}

+ (double)displayHeightForTab;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderTabSwitchView *switchView; // @synthesize switchView=_switchView;
@property(retain, nonatomic) NSArray *tabs; // @synthesize tabs=_tabs;
@property(nonatomic) __weak id <WCFinderSearchTabCellHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)onTabSwitchViewUserSelectIdx:(long long)arg1 oldIdx:(long long)arg2 animated:(_Bool)arg3 context:(void *)arg4 completion:(CDUnknownBlockType)arg5;
- (id)tabSwitchView:(id)arg1 uniqueObjectForIndex:(unsigned long long)arg2;
- (id)tabSwitchView:(id)arg1 titleForTabAtIndex:(long long)arg2;
- (long long)numberOfTabSwitchView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

