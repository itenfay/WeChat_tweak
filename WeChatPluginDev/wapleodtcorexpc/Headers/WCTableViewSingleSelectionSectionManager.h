//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCTableViewSingleSelectionSectionManagerDelegate;

@interface WCTableViewSingleSelectionSectionManager
{
    id <WCTableViewSingleSelectionSectionManagerDelegate> _delegate;
    long long _selectedIndex;
}

- (void).cxx_destruct;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak id <WCTableViewSingleSelectionSectionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reloadCells:(id)arg1;
- (void)didBeClickedAt:(id)arg1;
- (id)init;
- (void)addSelectionCell:(id)arg1;

@end

