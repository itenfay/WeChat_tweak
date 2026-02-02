//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FTSContext, UIView, WCTimeLineFooterView;

@interface FTSBaseViewController
{
    FTSContext *_context;
    UIView *_emptyFooterView;
    WCTimeLineFooterView *_footerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTimeLineFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *emptyFooterView; // @synthesize emptyFooterView=_emptyFooterView;
@property(retain, nonatomic) FTSContext *context; // @synthesize context=_context;
- (void)startSearchFrom:(id)arg1 searchBar:(id)arg2;
- (id)getFTSContext;
- (void)onNavigationCancelItemClick;
- (void)viewDidLoad;
- (id)initWithContext:(id)arg1;

@end

