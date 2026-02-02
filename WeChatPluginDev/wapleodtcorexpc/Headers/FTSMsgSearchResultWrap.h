//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, NSMutableArray, NSMutableDictionary, NSString, SearchMatchTip;

@interface FTSMsgSearchResultWrap : NSObject
{
    NSString *_keyword;
    CContact *_sessionContact;
    CContact *_talkerContact;
    SearchMatchTip *_matchTip;
    NSMutableArray *_arrMsgItems;
    NSMutableArray *_arrSessionResult;
    NSMutableDictionary *_dicSessionResult;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicSessionResult; // @synthesize dicSessionResult=_dicSessionResult;
@property(retain, nonatomic) NSMutableArray *arrSessionResult; // @synthesize arrSessionResult=_arrSessionResult;
@property(retain, nonatomic) NSMutableArray *arrMsgItems; // @synthesize arrMsgItems=_arrMsgItems;
@property(retain, nonatomic) SearchMatchTip *matchTip; // @synthesize matchTip=_matchTip;
@property(retain, nonatomic) CContact *talkerContact; // @synthesize talkerContact=_talkerContact;
@property(retain, nonatomic) CContact *sessionContact; // @synthesize sessionContact=_sessionContact;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (long long)getResultCountForDisplay;
- (void)resetSearchResult;

@end

