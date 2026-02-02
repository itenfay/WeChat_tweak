//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCPayOfflineAddNewCardTipsViewDelegate;

@interface WCPayOfflinePayAddNewCardTipsView
{
    id <WCPayOfflineAddNewCardTipsViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCPayOfflineAddNewCardTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewPayCardBtnPress;
- (void)addNewCardBtnPress;
- (void)setupContentView;
- (id)initAddNewCardTipsViewWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

@end

