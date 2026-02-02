//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MMUIButton, MMUIView, UIPageControl, UIView, WCFinderDataItem, WCFinderFeedStaticCoverView;
@protocol WCFinderPostCoverInfoViewProtocol;

@interface WCFinderPostCoverInfoView
{
    id <WCFinderPostCoverInfoViewProtocol> _delegate;
    MMUIButton *_chooseCoverBtn;
    WCFinderFeedStaticCoverView *_previewView;
    MMUIButton *_addMediaBtn;
    UIPageControl *_pageCtrl;
    UIView *_gradientView;
    CAGradientLayer *_gradientLayer;
    MMUIView *_deleteBtn;
    MMUIButton *_deleteMediaButton;
    WCFinderDataItem *_dataItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) MMUIButton *deleteMediaButton; // @synthesize deleteMediaButton=_deleteMediaButton;
@property(retain, nonatomic) MMUIView *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIPageControl *pageCtrl; // @synthesize pageCtrl=_pageCtrl;
@property(retain, nonatomic) MMUIButton *addMediaBtn; // @synthesize addMediaBtn=_addMediaBtn;
@property(retain, nonatomic) WCFinderFeedStaticCoverView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) MMUIButton *chooseCoverBtn; // @synthesize chooseCoverBtn=_chooseCoverBtn;
@property(nonatomic) __weak id <WCFinderPostCoverInfoViewProtocol> delegate; // @synthesize delegate=_delegate;
- (void)onClickAddMediaBtn;
- (void)onClickPreviewAction;
- (void)onClickChooseCoverBtn;
- (void)onClickDeleteBtn;
- (void)loadCoverByDataItem:(id)arg1 configFlag:(unsigned long long)arg2;
- (void)hiddenAllSubviews;
- (void)layoutAllSubviews;
- (id)initWithFrame:(struct CGRect)arg1 dataItem:(id)arg2 configFlag:(unsigned long long)arg3;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

