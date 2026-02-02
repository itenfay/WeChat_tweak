//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class OrderedDictionary;
@protocol MultiRoomContactSelectViewControllerDelegate;

@interface MultiRoomContactSelectViewController
{
    OrderedDictionary *m_dicMultiSelect;
}

- (void).cxx_destruct;
- (void)onCancel:(id)arg1;
- (void)didSelectContact:(id)arg1;
- (_Bool)isSelected:(id)arg1;
- (void)makeCell:(id)arg1 contact:(id)arg2 tableView:(id)arg3 indexPath:(id)arg4;
- (void)updateRightBtn;
- (void)doClickRightBarButton;
- (void)setArrMultiSelect:(id)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <MultiRoomContactSelectViewControllerDelegate> m_delegate;

@end

