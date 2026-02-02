//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ChatBackgroundItem, NSIndexPath;
@protocol ChatBackgroundViewDelegate;

@interface ChatBackgroundView
{
    ChatBackgroundItem *m_cbItem;
    NSIndexPath *m_indexPath;
    id <ChatBackgroundViewDelegate> m_delegate;
    long long m_index;
    _Bool _bShowSelect;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bShowSelect; // @synthesize bShowSelect=_bShowSelect;
@property(nonatomic) long long m_index; // @synthesize m_index;
@property(nonatomic) __weak id <ChatBackgroundViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSIndexPath *m_indexPath; // @synthesize m_indexPath;
@property(retain, nonatomic) ChatBackgroundItem *m_cbItem; // @synthesize m_cbItem;
- (void)startDownloadingAnimation;
- (id)initWithFrame:(struct CGRect)arg1 andData:(id)arg2;
- (void)setStatus:(long long)arg1;
- (long long)getStatus;
- (void)onClick;
- (void)initViewWithData;

@end

