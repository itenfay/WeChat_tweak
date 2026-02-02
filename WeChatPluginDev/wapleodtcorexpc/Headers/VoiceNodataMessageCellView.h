//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class VoiceNodataMessageViewModel;

@interface VoiceNodataMessageCellView
{
}

- (void)updateStatus;
- (void)layoutContentView;

// Remaining properties
@property(readonly, nonatomic) VoiceNodataMessageViewModel *viewModel; // @dynamic viewModel;

@end

