//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, WCDataItem, WCTagsView;
@protocol WCAdActionLinkDetailViewDelegate;

@interface WCAdActionLinkDetailView
{
    id <WCAdActionLinkDetailViewDelegate> _delegate;
    WCDataItem *_dataItem;
    MMUIButton *_detailBtn;
    WCTagsView *_weAppSpecialTagIcon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTagsView *weAppSpecialTagIcon; // @synthesize weAppSpecialTagIcon=_weAppSpecialTagIcon;
@property(retain, nonatomic) MMUIButton *detailBtn; // @synthesize detailBtn=_detailBtn;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) __weak id <WCAdActionLinkDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateWeAppSpecialTagIcon;
- (void)onDetailButtonClicked;
- (void)updateDetailViewWithDataItem:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)generateSubviews;
- (id)initWithFrame:(struct CGRect)arg1 dataItem:(id)arg2;

@end

