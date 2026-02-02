//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol TextInputTranslatingMgrDelegate;

@interface TextInputTranslatingMgr : NSObject
{
    _Bool _bInChatRoom;
    id <TextInputTranslatingMgrDelegate> _delegate;
    NSString *_nsTextViewContent;
    unsigned long long _lastUpdateTime;
    NSString *_language;
    NSString *_nsChatName;
    NSString *_nsLastUseResult;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nsLastUseResult; // @synthesize nsLastUseResult=_nsLastUseResult;
@property(retain, nonatomic) NSString *nsChatName; // @synthesize nsChatName=_nsChatName;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) _Bool bInChatRoom; // @synthesize bInChatRoom=_bInChatRoom;
@property(nonatomic) unsigned long long lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(retain, nonatomic) NSString *nsTextViewContent; // @synthesize nsTextViewContent=_nsTextViewContent;
@property(nonatomic) __weak id <TextInputTranslatingMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onRecieveTranslateResp:(id)arg1 orgMsg:(id)arg2 textViewContent:(id)arg3 inputID:(unsigned long long)arg4;
- (void)requestTransTextWithInputID:(unsigned long long)arg1;
- (id)getPrefix;
- (_Bool)changeTextViewContent:(id)arg1 inputID:(unsigned long long)arg2;
- (_Bool)startTranslateText:(id)arg1 inputID:(unsigned long long)arg2;
- (void)switchTranslateLanguage:(id)arg1 text:(id)arg2 inputID:(unsigned long long)arg3;
- (id)getCurrentTextViewContent;
- (void)onUseTransResult:(id)arg1 newContent:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end

