//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;
@protocol ContactTagNoTagBatchSetEditLogicDelegate;

@interface ContactTagNoTagBatchSetEditLogic
{
    unsigned int m_uiJobID;
    NSArray *m_arrTagNameList;
    NSArray *m_arrAllTagNameList;
    NSArray *m_arrContactUserName;
    id <ContactTagNoTagBatchSetEditLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ContactTagNoTagBatchSetEditLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *m_arrContactUserName; // @synthesize m_arrContactUserName;
@property(retain, nonatomic) NSArray *m_arrAllTagNameList; // @synthesize m_arrAllTagNameList;
@property(retain, nonatomic) NSArray *m_arrTagNameList; // @synthesize m_arrTagNameList;
- (void)setContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onAddContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)callDelegate:(int)arg1;
- (unsigned int)JobForContactTagChanged;
- (unsigned int)JobForCreateTagNameWithServer;
- (void)JobForTagEdit:(id)arg1 withAllTags:(id)arg2 arrContactUserNames:(id)arg3;
- (_Bool)isCreateNewTagName;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

