//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandAttributedNotificationCellViewModel, NSMutableArray;

@interface BrandAttributedNotificationCellView : NSObject
{
    NSMutableArray *m_attributedMsgLabelArr;
}

- (id)accessibilityLabel;
- (void)layoutSubviews;
- (void)updateViewModel:(id)arg1;
- (void)resetMessageLabel;
- (void)initMessageLabel;

// Remaining properties
@property(readonly, nonatomic) BrandAttributedNotificationCellViewModel *viewModel;

@end

