//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSData, NSString, RTEHTMLParser, WNContentStorage, WNHTMLTagNode;
@protocol WNContentStorageBuilderDelegate;

@interface WNContentStorageBuilder
{
    NSData *m_htmlData;
    NSArray *m_favDataList;
    WNContentStorage *m_tmpStorage;
    WNHTMLTagNode *m_rootTag;
    WNHTMLTagNode *m_currentTag;
    RTEHTMLParser *m_parser;
    _Bool m_bInList;
    _Bool m_bLastInList;
    const char *m_remainContent;
    id <WNContentStorageBuilderDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WNContentStorageBuilderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tryOutputContent;
- (_Bool)isBlockTag:(id)arg1;
- (void)applyCSSStyle:(id)arg1 toTag:(id)arg2;
- (void)applyAttributes:(id)arg1 toTag:(id)arg2;
- (id)parserCustomElementLoopupTable:(id)arg1;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 attributes:(id)arg3;
- (void)parserDidEndDocument:(id)arg1;
- (void)parserDidStartDocument:(id)arg1;
- (_Bool)bInList;
- (id)getRemianContent;
- (void)stopGenerateContentStorage;
- (void)startGenerateContentStorage;
- (void)dealloc;
- (id)initWithHTMLData:(id)arg1 favDataList:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

