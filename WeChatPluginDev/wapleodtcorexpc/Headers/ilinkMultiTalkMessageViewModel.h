//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;

@interface ilinkMultiTalkMessageViewModel
{
    NSMutableArray *m_allTalkedMembers;
    long long _ilinkMsgType;
    unsigned long long _roomID;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long roomID; // @synthesize roomID=_roomID;
@property(nonatomic) long long ilinkMsgType; // @synthesize ilinkMsgType=_ilinkMsgType;
@property(readonly, nonatomic) NSMutableArray *allTalkedMembers; // @synthesize allTalkedMembers=m_allTalkedMembers;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;
- (void)initIlinkMultiTalkNodeViewData;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;

@end

