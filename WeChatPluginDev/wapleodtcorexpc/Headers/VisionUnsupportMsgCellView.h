//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class VisionUnsupportMsgViewModel;

@interface VisionUnsupportMsgCellView
{
}

- (_Bool)canShowMsgReplyMenuItem;
- (id)operationMenuItems;

// Remaining properties
@property(readonly, nonatomic) VisionUnsupportMsgViewModel *viewModel;

@end

