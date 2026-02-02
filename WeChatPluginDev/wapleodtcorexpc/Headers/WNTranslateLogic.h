//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, WeNoteDataController;
@protocol WNTranslateDelegate;

@interface WNTranslateLogic : NSObject
{
    long long m_textBeginIndex;
    unsigned long long m_curIndex;
    unsigned long long m_curLocation;
    NSMutableDictionary *m_dataIdToIndexInfo;
    NSMutableArray *m_fontAttributes;
    NSMutableDictionary *m_sentenceSeqToAttachmentDic;
    NSMutableDictionary *m_sentenceSeqToBreakStrDic;
    NSMutableDictionary *m_sentenceStyleDic;
    _Bool m_hasMoreContent;
    NSMutableArray *m_translatedSentenceList;
    _Bool _isFromTitleBtn;
    _Bool _isServerAntiGarbage;
    id <WNTranslateDelegate> _delegate;
    WeNoteDataController *_dataController;
    long long _translateState;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isServerAntiGarbage; // @synthesize isServerAntiGarbage=_isServerAntiGarbage;
@property(nonatomic) _Bool isFromTitleBtn; // @synthesize isFromTitleBtn=_isFromTitleBtn;
@property(nonatomic) long long translateState; // @synthesize translateState=_translateState;
@property(nonatomic) __weak WeNoteDataController *dataController; // @synthesize dataController=_dataController;
@property(nonatomic) __weak id <WNTranslateDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleWebTranslationResp:(id)arg1 Event:(unsigned int)arg2;
- (void)sendWebTranslationReqWith:(id)arg1;
- (id)getTranslatedDataInfoWith:(id)arg1;
- (void)rebuildContentStorage;
- (void)extractStyleOfSentence:(id)arg1 WithOriginRange:(struct _NSRange)arg2 sentenceList:(id)arg3;
- (void)confirmAttachmentSeperationInRange:(struct _NSRange)arg1 with:(id)arg2;
- (void)increaseBreakCountWithSentenceSeq:(unsigned long long)arg1;
- (void)realTranslateWith:(id)arg1;
- (void)translate;
- (void)initFontAttributes;
- (_Bool)checkPullNoticeScreenBefore;
- (void)clearState;
- (void)cancelTranslate;
- (id)init;

@end

