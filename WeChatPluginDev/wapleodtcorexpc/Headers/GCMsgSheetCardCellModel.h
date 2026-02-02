//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ChatroomMsgSheetCard;

@interface GCMsgSheetCardCellModel
{
    ChatroomMsgSheetCard *_sheetCard;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ChatroomMsgSheetCard *sheetCard; // @synthesize sheetCard=_sheetCard;
- (Class)bindCellClass;
- (id)bindMsgSheetCardCell;
- (id)initWithChatroomMessage:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onChatroomMessageInitEnd;

@end

