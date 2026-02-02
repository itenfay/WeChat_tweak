//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "GCChatBaseCellModelDelegate-Protocol.h"

@class Channel, GC23070Report, GCChatBaseCellModel, GCChatRoomServer, MMUIViewController, SendChatroomMsgRequest;

@protocol GCMessageViewModelDelegate <GCChatBaseCellModelDelegate>
- (void)channelAllDidLoadFirstPage;
- (Channel *)channelOfChannelId:(long long)arg1;
- (void)handleSendChatroomMsgRequest:(SendChatroomMsgRequest *)arg1 cellModel:(GCChatBaseCellModel *)arg2;
- (MMUIViewController *)viewModelViewController;
- (void)messageViewModelConfigData:(GC23070Report *)arg1 uiArea:(unsigned long long)arg2 positionId:(unsigned long long)arg3 op:(unsigned long long)arg4;
- (GCChatRoomServer *)viewModelChatRoomServer;
@end

