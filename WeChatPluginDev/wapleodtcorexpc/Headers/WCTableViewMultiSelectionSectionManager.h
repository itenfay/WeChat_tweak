//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;
@protocol WCTableViewMultiSelectionSectionManagerDelegate;

@interface WCTableViewMultiSelectionSectionManager
{
    id <WCTableViewMultiSelectionSectionManagerDelegate> _delegate;
    NSMutableArray *_selectedRows;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *selectedRows; // @synthesize selectedRows=_selectedRows;
@property(nonatomic) __weak id <WCTableViewMultiSelectionSectionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reloadCells:(id)arg1;
- (void)didBeClickedAt:(id)arg1;
- (id)init;
- (void)addSelectionCell:(id)arg1;

@end

