//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCCardPkgBackTableViewDelegate;

@interface WCCardPkgBackTableView
{
    double _maxHeight;
    id <WCCardPkgBackTableViewDelegate> _wx_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCCardPkgBackTableViewDelegate> wx_delegate; // @synthesize wx_delegate=_wx_delegate;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
- (void)updateLayout;
- (void)reloadData;

@end

