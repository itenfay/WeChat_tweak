//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTimer, NSDate, NSMutableArray, NSMutableDictionary, NSString;
@protocol RTEAttachmentViewProviderDelegate;

@interface RTEAttachmentViewProvider
{
    NSMutableDictionary *m_registerViewDictionary;
    NSMutableDictionary *m_activeAttachmentViews;
    NSMutableDictionary *m_reuseAttachmentViews;
    NSMutableArray *m_pendingReuseAttachmentViews;
    MMTimer *m_clearTimer;
    NSDate *m_lastResuseDate;
    id <RTEAttachmentViewProviderDelegate> _delegate;
    Class _defaultViewClass;
    unsigned long long _colorType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long colorType; // @synthesize colorType=_colorType;
@property(nonatomic) Class defaultViewClass; // @synthesize defaultViewClass=_defaultViewClass;
@property(nonatomic) __weak id <RTEAttachmentViewProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clearPendingReuseView;
- (void)tryReuseAttachmentView:(id)arg1;
- (void)reLayoutAllAttachmentView;
- (id)getAllAttachmentViewOfType:(unsigned int)arg1;
- (void)updateContentOffset:(struct CGPoint)arg1 inSuperView:(id)arg2;
- (void)didRemoveAttachmentView:(id)arg1;
- (void)invalidViewForAttachment:(id)arg1;
- (id)getViewForAttachment:(id)arg1;
- (id)getViewForAttribute:(id)arg1;
- (id)reuseAttachmentViewsForType:(unsigned int)arg1;
- (id)activeAttachmentViewsForType:(unsigned int)arg1;
- (void)registerAttachmentViewClass:(Class)arg1 forAttachmentType:(unsigned int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

