//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface AppWxGameCardMessageViewModel
{
    _Bool _isShouldLayout;
    double _dynamicCardHeight;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
@property(nonatomic) _Bool isShouldLayout; // @synthesize isShouldLayout=_isShouldLayout;
@property(nonatomic) double dynamicCardHeight; // @synthesize dynamicCardHeight=_dynamicCardHeight;
- (double)getMsgViewInfo;
- (void)showMsgPopupMenu;
- (_Bool)shouldLayoutIfNeeded;
- (void)notifyViewRemove;
- (void)notifySizeChange:(long long)arg1;
@property(readonly, nonatomic) double messageViewHeight;
@property(readonly, nonatomic) double messageViewWidth;
- (id)accessibilityMessageType;
- (id)additionalAccessibilityDescription;
- (_Bool)isShowSourceView;
- (_Bool)isShowChatRoomDisplayName;
- (_Bool)isShowHeadImage;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)cellViewClassName;

@end

