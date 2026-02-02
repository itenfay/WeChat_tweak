//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmotionBannerSet, NSArray, NSMutableArray, NSString, SKBuiltinBuffer_t;
@protocol StoreEmotionGetDesignerEmojiListCgiDelegate;

@interface StoreEmotionGetDesignerEmojiListCgi
{
    NSMutableArray *m_designerEmojiList;
    unsigned int m_designerUin;
    unsigned int m_opCode;
    unsigned int m_tagId;
    NSString *m_keyword;
    unsigned long long m_searchId;
    EmotionBannerSet *m_bannerSet;
    SKBuiltinBuffer_t *m_pageBuf;
    _Bool m_hasMore;
    _Bool m_isNoSuchProduct;
    unsigned int m_eventID;
    id <StoreEmotionGetDesignerEmojiListCgiDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <StoreEmotionGetDesignerEmojiListCgiDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isNoSuchProduct; // @synthesize isNoSuchProduct=m_isNoSuchProduct;
@property(readonly, nonatomic) _Bool hasMore; // @synthesize hasMore=m_hasMore;
- (void)callFailedDelegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)startRequest;
- (id)initWithBannerSet:(id)arg1;
- (id)initWithTagId:(unsigned int)arg1;
- (id)initWithKeyword:(id)arg1 searchId:(unsigned long long)arg2;
- (id)initWithDesignerUin:(unsigned int)arg1;
- (id)init;
@property(readonly, nonatomic) _Bool isRequesting;
@property(readonly, nonatomic) NSArray *emojiList;

@end

