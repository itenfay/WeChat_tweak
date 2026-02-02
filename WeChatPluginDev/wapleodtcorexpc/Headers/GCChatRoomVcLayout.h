//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GCLabelDynamicLayout;

@interface GCChatRoomVcLayout
{
    GCLabelDynamicLayout *_channelTitleLabelLayout;
    GCLabelDynamicLayout *_channelTitleNumberLayout;
    double _spaceBelowChannelTitle;
    double _spaceUpChatBtn;
    GCLabelDynamicLayout *_inputChannelTitleLayout;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GCLabelDynamicLayout *inputChannelTitleLayout; // @synthesize inputChannelTitleLayout=_inputChannelTitleLayout;
@property(nonatomic) double spaceUpChatBtn; // @synthesize spaceUpChatBtn=_spaceUpChatBtn;
@property(nonatomic) double spaceBelowChannelTitle; // @synthesize spaceBelowChannelTitle=_spaceBelowChannelTitle;
@property(retain, nonatomic) GCLabelDynamicLayout *channelTitleNumberLayout; // @synthesize channelTitleNumberLayout=_channelTitleNumberLayout;
@property(retain, nonatomic) GCLabelDynamicLayout *channelTitleLabelLayout; // @synthesize channelTitleLabelLayout=_channelTitleLabelLayout;
- (id)init;

@end

