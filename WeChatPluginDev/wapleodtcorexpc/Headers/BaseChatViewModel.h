//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CBaseContact, CMessageWrap, NSString;
@protocol ChatViewModelDelegate;

@interface BaseChatViewModel : NSObject
{
    CBaseContact *m_chatContact;
    double m_layoutWidth;
    double m_cachedHeight;
    id m_cellView;
    _Bool _shouldReCreate;
    unsigned long long _modelType;
    unsigned long long _splitPosition;
    double _createTime;
    id <ChatViewModelDelegate> _delegate;
    NSString *_chatSplitWording;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *chatSplitWording; // @synthesize chatSplitWording=_chatSplitWording;
@property(nonatomic) _Bool shouldReCreate; // @synthesize shouldReCreate=_shouldReCreate;
@property(nonatomic) __weak id <ChatViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned long long splitPosition; // @synthesize splitPosition=_splitPosition;
@property(nonatomic) unsigned long long modelType; // @synthesize modelType=_modelType;
@property(retain, nonatomic) CBaseContact *chatContact; // @synthesize chatContact=m_chatContact;
- (double)chatViewControllerWidth;
- (_Bool)isShowInSubScene;
- (_Bool)isChatroomInDarkBkg;
- (_Bool)isUseLightStyle;
- (_Bool)isDisableEditMode;
- (_Bool)isTailPart;
- (_Bool)isHeadPart;
- (id)cellDataForRow:(unsigned long long)arg1;
- (long long)numberOfRowsInSection;
- (void)updateLayoutsWithoutReload;
- (void)updateLayoutsWithTryScroll:(_Bool)arg1 ReloadAll:(_Bool)arg2;
- (void)updateLayouts;
- (void)resetLayoutCache;
- (struct CGSize)measure:(struct CGSize)arg1;
- (double)rowHeight;
- (_Bool)shouldLayoutIfNeeded;
- (double)sectionHeight;
- (id)cellIdentifier;
- (id)cellViewClassName;
- (void)updateChatContact:(id)arg1;
- (id)initWithChatContact:(id)arg1;
@property(nonatomic) __weak id cellView;
@property(readonly, nonatomic) CMessageWrap *messageWrap;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

