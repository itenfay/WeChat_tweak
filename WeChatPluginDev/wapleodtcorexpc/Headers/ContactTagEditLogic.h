//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, NSArray, NSString;
@protocol ContactTagEditLogicDelegate;

@interface ContactTagEditLogic
{
    CContact *m_contact;
    unsigned int _uiJobID;
    int TagCountOfCreateTagScence;
    int TagCountOfExistTagScence;
    id <ContactTagEditLogicDelegate> delegate;
    NSArray *_arrTagNameList;
    NSArray *_arrAllTagNameList;
    NSArray *_arrContactTagNameList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *arrContactTagNameList; // @synthesize arrContactTagNameList=_arrContactTagNameList;
@property(retain, nonatomic) NSArray *arrAllTagNameList; // @synthesize arrAllTagNameList=_arrAllTagNameList;
@property(retain, nonatomic) NSArray *arrTagNameList; // @synthesize arrTagNameList=_arrTagNameList;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
@property(nonatomic) __weak id <ContactTagEditLogicDelegate> delegate; // @synthesize delegate;
- (void)setContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onAddContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)callDelegate:(int)arg1;
- (unsigned int)JobForContactTagChanged;
- (unsigned int)JobForCreateTagNameWithServer;
- (void)JobForTagEdit:(id)arg1 withAllTags:(id)arg2 contactTags:(id)arg3;
- (_Bool)isModContactTagName;
- (_Bool)isCreateNewTagName;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

