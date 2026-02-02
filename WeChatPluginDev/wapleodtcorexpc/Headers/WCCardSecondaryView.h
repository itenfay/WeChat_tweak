//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCCardDataSource, WCCardSecondaryViewDelegate;

@interface WCCardSecondaryView
{
    id <WCCardDataSource> _cardDataSource;
    id <WCCardSecondaryViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCCardSecondaryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fieldClicked:(id)arg1;
- (void)layoutSubviews;
- (id)initWithCardDataSource:(id)arg1;
- (void)dealloc;

@end

