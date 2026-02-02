//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ChatRoomToolWeAppInfo, MMUILabel, MMWebImageView;

@interface ChatRoomToolWeAppCollectionCell
{
    MMWebImageView *m_appIconView;
    MMUILabel *m_titleLabel;
    ChatRoomToolWeAppInfo *m_chatRoomToolWeAppInfo;
}

+ (struct CGSize)getCellIconSize;
+ (struct CGSize)getCellSize;
- (void).cxx_destruct;
@property(retain, nonatomic) ChatRoomToolWeAppInfo *m_chatRoomToolWeAppInfo; // @synthesize m_chatRoomToolWeAppInfo;
@property(retain, nonatomic) MMUILabel *m_titleLabel; // @synthesize m_titleLabel;
@property(retain, nonatomic) MMWebImageView *m_appIconView; // @synthesize m_appIconView;
- (void)resizeTitleLabel;
- (void)updateCellWithWeAppInfo:(id)arg1;
- (void)resetView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

