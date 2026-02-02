//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AnimateEmojiConfig, DSMMatcher, NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface ExpressionMgr
{
    NSString *m_nsTotalEmoticonRegex;
    NSArray *m_qqEmojiKeyList;
    NSArray *m_emojiCodes;
    NSArray *m_emojiDescription;
    NSDictionary *m_emojiDescDic;
    NSDictionary *m_expressionWrapDic;
    NSDictionary *m_descToExpressionWrapDic;
    NSString *m_newEmojiConfigDirPath;
    NSString *m_emojiPanelConfiDirPath;
    NSArray *m_recentUseKeyArray;
    NSString *m_recentUseDataPath;
    NSArray *m_systemEmojiCategoriesNames;
    NSMutableDictionary *m_systemEmojiCategoriesDict;
    AnimateEmojiConfig *_animateEmojiConfig;
    NSString *_animateEmojiResDir;
    DSMMatcher *_expressionMatcher;
}

- (void).cxx_destruct;
@property(retain, nonatomic) DSMMatcher *expressionMatcher; // @synthesize expressionMatcher=_expressionMatcher;
@property(retain, nonatomic) NSString *animateEmojiResDir; // @synthesize animateEmojiResDir=_animateEmojiResDir;
@property(retain, nonatomic) AnimateEmojiConfig *animateEmojiConfig; // @synthesize animateEmojiConfig=_animateEmojiConfig;
- (id)getEmoticonRegex;
- (id)getExpressionWrap:(id)arg1 loadImageIfNeeded:(_Bool)arg2;
- (unsigned long long)getEmojiAnimVersion;
- (id)getAnimateEmojiByExpression:(id)arg1;
- (_Bool)isAnimateEmoji:(id)arg1;
- (void)reloadAnimateEmojiConfig;
- (id)getExpressionSymbolArray;
- (void)onEmoticonResUpdateForSubType:(unsigned int)arg1 dirPath:(id)arg2;
- (_Bool)isContainExpressions:(id)arg1;
- (id)fastExtractFirstExpressions:(id)arg1;
- (id)fastExtractExpressions:(id)arg1;
- (void)buildExpressionSearchModel;
- (void)onMatchModelErrorHappend;
- (void)enumerateItemUsingBlock:(CDUnknownBlockType)arg1;
- (id)getExpressionMatcherModelPath;
- (void)sendEmojiWithKey:(id)arg1 addAsRecentUse:(_Bool *)arg2;
- (id)rejectInvalidRecentUseKey:(id)arg1;
- (id)getRecentUseKeyArray;
- (id)getEmojiDescriptionAtIndex:(unsigned long long)arg1;
- (void)onLanguageChange;
- (id)getDescStrByEmoji:(id)arg1;
- (unsigned int)countOfEmoji:(id)arg1;
- (struct _NSRange)rangeOfEmoticon:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)getDescStrByExpression:(id)arg1;
- (id)getSystemEmojiBoardKeyList:(id)arg1;
- (id)getAllSystemEmojiBoardPageList;
- (id)getEmojiBoardKeyList;
- (_Bool)loadQQEmotionImageByExpression:(id)arg1 isSync:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isExpression:(id)arg1;
- (id)getImageByExpression:(id)arg1;
- (void)onServiceMemoryWarning;
- (void)loadSystemEmojiKeyList;
- (void)loadQQEmojiKeyList;
- (id)valueForKey:(const char *)arg1 inNode:(struct XmlReaderNode_t *)arg2;
- (void)loadQQEmojiKeyListConfig;
- (id)emoticonRegexForNewExpressionCongifWithWrapDic:(id)arg1 descToWrapDic:(id)arg2;
- (void)configEmoticonRegexWithNewExpressionRegexString:(id)arg1;
- (void)loadExpression;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

