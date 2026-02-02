//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSMutableArray, NSString;

@interface SystemMessageViewModel
{
    NSMutableArray *m_contentTextStyles;
    _Bool _hasParseForFold;
    _Bool _isFirstAccess;
    int _customRotorElementIndex;
    NSArray *_customRotorElements;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *customRotorElements; // @synthesize customRotorElements=_customRotorElements;
@property(nonatomic) int customRotorElementIndex; // @synthesize customRotorElementIndex=_customRotorElementIndex;
@property(nonatomic) _Bool isFirstAccess; // @synthesize isFirstAccess=_isFirstAccess;
@property(nonatomic) _Bool hasParseForFold; // @synthesize hasParseForFold=_hasParseForFold;
@property(readonly, nonatomic) NSMutableArray *contentTextStyles; // @synthesize contentTextStyles=m_contentTextStyles;
- (void)onHistoryMsgLoadSuccess:(id)arg1 attachHistoryMsg:(id)arg2;
- (void)onHistoryMsgLoadFail:(id)arg1;
- (void)onMessageForceUpdateLayout;
@property(readonly, nonatomic) long long parserType;
@property(readonly, nonatomic) double systemTextFontSize;
- (id)getCustomRotorItemResultWithPredicate:(id)arg1;
- (void)setUpCustomRotorElementWithLinks:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)accessibilityDescription;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

