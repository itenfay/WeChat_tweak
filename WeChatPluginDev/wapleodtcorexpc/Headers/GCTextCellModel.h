//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GCTextCellLayoutInfo;

@interface GCTextCellModel
{
    unsigned long long _textCellModelType;
    GCTextCellLayoutInfo *_textLayoutInfo;
    unsigned long long _subType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long subType; // @synthesize subType=_subType;
@property(retain, nonatomic) GCTextCellLayoutInfo *textLayoutInfo; // @synthesize textLayoutInfo=_textLayoutInfo;
@property(nonatomic) unsigned long long textCellModelType; // @synthesize textCellModelType=_textCellModelType;
- (void)clearCachedLayoutInfo;
- (_Bool)subClassHandleLongPress:(id)arg1;
- (id)bindTextCell;
- (void)handleLongPress:(id)arg1;
- (void)configureWithEasyConfig:(id)arg1;
- (void)onChatroomMessageInitEnd;
- (Class)bindCellClass;
- (id)getContentStrFromContentModel:(id)arg1;
- (void)onUpdateContentModel;
- (id)contentModelFromMsgTpl:(id)arg1;
- (void)initContentModeFromChatRoomMessage:(id)arg1;
- (id)initWithChatroomMessage:(id)arg1;

@end

