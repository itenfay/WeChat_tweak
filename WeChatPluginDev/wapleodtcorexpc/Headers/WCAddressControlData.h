//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, WCAddressBaseAddress;

@interface WCAddressControlData : NSObject
{
    _Bool _m_bNeedForbidStatusBarInset;
    _Bool _forbidDarkmode;
    _Bool _isInSheetMode;
    _Bool _needDismissToParentVCOnAddAddress;
    _Bool _isDirectOpenAddAddress;
    _Bool _isInGiftMode;
    _Bool _isSelectAddressFilledByFriend;
    int _entryScene;
    WCAddressBaseAddress *structSelectBaseAddress;
    WCAddressBaseAddress *structEditBaseAddress;
    NSArray *m_arrAllAddress;
    NSArray *m_arrAddressStageData;
}

+ (id)getSelectAddressDicFromAddress:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) int entryScene; // @synthesize entryScene=_entryScene;
@property(nonatomic) _Bool isSelectAddressFilledByFriend; // @synthesize isSelectAddressFilledByFriend=_isSelectAddressFilledByFriend;
@property(nonatomic) _Bool isInGiftMode; // @synthesize isInGiftMode=_isInGiftMode;
@property(nonatomic) _Bool isDirectOpenAddAddress; // @synthesize isDirectOpenAddAddress=_isDirectOpenAddAddress;
@property(nonatomic) _Bool needDismissToParentVCOnAddAddress; // @synthesize needDismissToParentVCOnAddAddress=_needDismissToParentVCOnAddAddress;
@property(nonatomic) _Bool isInSheetMode; // @synthesize isInSheetMode=_isInSheetMode;
@property(nonatomic) _Bool forbidDarkmode; // @synthesize forbidDarkmode=_forbidDarkmode;
@property(nonatomic) _Bool m_bNeedForbidStatusBarInset; // @synthesize m_bNeedForbidStatusBarInset=_m_bNeedForbidStatusBarInset;
@property(retain, nonatomic) NSArray *m_arrAddressStageData; // @synthesize m_arrAddressStageData;
@property(retain, nonatomic) NSArray *m_arrAllAddress; // @synthesize m_arrAllAddress;
@property(retain, nonatomic) WCAddressBaseAddress *structEditBaseAddress; // @synthesize structEditBaseAddress;
@property(retain, nonatomic) WCAddressBaseAddress *structSelectBaseAddress; // @synthesize structSelectBaseAddress;

@end

