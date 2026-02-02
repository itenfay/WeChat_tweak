//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ChatroomMsgImgCard;

@interface GCImageCardCellModel
{
    ChatroomMsgImgCard *_imgCard;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ChatroomMsgImgCard *imgCard; // @synthesize imgCard=_imgCard;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (Class)bindCellClass;
- (id)initWithChatroomMessage:(id)arg1;

@end

