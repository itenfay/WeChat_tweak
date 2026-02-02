//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol EmoticonStoreGridViewDelegate;

@interface EmoticonStoreGridView
{
    NSString *m_emoticonPid;
    long long m_currentSelectIndex;
    id <EmoticonStoreGridViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <EmoticonStoreGridViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long m_currentSelectIndex; // @synthesize m_currentSelectIndex;
@property(retain, nonatomic) NSString *m_emoticonPid; // @synthesize m_emoticonPid;
- (id)showPreviewAtIndex:(long long)arg1;
- (long long)getRealIndexFromPoint:(struct CGPoint)arg1;
- (void)handleLongPress:(id)arg1;
- (void)handleTap:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

