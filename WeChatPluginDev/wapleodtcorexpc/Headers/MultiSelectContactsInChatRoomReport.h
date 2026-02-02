//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MultiSelectContactsInChatRoomReport : NSObject
{
    long long m_clkEnterMutiUserModeInSearchCnt;
    long long m_clkExitMutiUserModeInSearchCnt;
    long long m_deleteBackWordsInSearchCnt;
    long long m_expandSelectedUsersInSearchCnt;
    long long m_deleteUserInSelectedUsersInSearchCnt;
    long long m_clkClearAllButtonCnt;
    NSMutableDictionary *_dicSelectionOperation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicSelectionOperation; // @synthesize dicSelectionOperation=_dicSelectionOperation;
- (void)reportDataWithEnterScene:(unsigned int)arg1 andExitScene:(unsigned int)arg2;
- (void)recordClkClearAllButtonCnt;
- (void)recordDeleteUserInSelectedUsersInSearchCnt;
- (void)recordExpandSelectedUsersInSearchCnt;
- (void)recordDeleteBackWordsInSearchCnt;
- (void)recordClkExitMutiUserModeInSearchCnt;
- (void)recordClkEnterMutiUserModeInSearchCnt;
- (void)clearSelectionOperationNoInFinalSelected:(id)arg1;
- (void)recordContactSelectionWithType:(unsigned int)arg1 arrSelectionContact:(id)arg2;
- (void)resetDicSelectionOperation;
- (void)initData;
- (id)init;

@end

