//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ChatroomMsgShareLink;

@interface GCShareLinkCellModel
{
    ChatroomMsgShareLink *_shareLink;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ChatroomMsgShareLink *shareLink; // @synthesize shareLink=_shareLink;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (Class)bindCellClass;
- (id)initWithChatroomMessage:(id)arg1;

@end

