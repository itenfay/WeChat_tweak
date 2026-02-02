//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetProfileInfoResponse_RelievedBuyInfo, UIView, WAProfileServiceHeaderView;

@interface WAProfileServiceViewController
{
    GetProfileInfoResponse_RelievedBuyInfo *_buyInfo;
    WAProfileServiceHeaderView *_headerView;
    UIView *_halfAdapterHeaderView;
    CDUnknownBlockType _halfAdapterCloseAction;
}

+ (double)viewHeightByBuyInfo:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType halfAdapterCloseAction; // @synthesize halfAdapterCloseAction=_halfAdapterCloseAction;
@property(retain, nonatomic) UIView *halfAdapterHeaderView; // @synthesize halfAdapterHeaderView=_halfAdapterHeaderView;
@property(retain, nonatomic) WAProfileServiceHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) GetProfileInfoResponse_RelievedBuyInfo *buyInfo; // @synthesize buyInfo=_buyInfo;
- (id)halfAdapterHeaderWithCloseAction:(CDUnknownBlockType)arg1;
- (void)reloadUI;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithBuyInfo:(id)arg1;

@end

