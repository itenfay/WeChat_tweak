//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol CContactOPLogDelegate;

@interface CContactOPLog : NSObject
{
    NSMutableDictionary *m_dicSkipContacts;
    _Bool m_isHadReloadSkipContact;
    id <CContactOPLogDelegate> _m_delegate;
}

+ (unsigned int)start_ModifySocialBlackList:(id)arg1 modType:(long long)arg2;
+ (unsigned int)start_ModifyContact:(id)arg1;
+ (id)getModifyContactData:(id)arg1 addScene:(unsigned int)arg2 delScene:(unsigned int)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak id <CContactOPLogDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (_Bool)add_ModifyContact:(id)arg1 withPhone:(id)arg2 NeedSync:(_Bool)arg3;
- (_Bool)add_ModifyContact:(id)arg1 withDescription:(id)arg2 NeedSync:(_Bool)arg3;
- (_Bool)add_ModifyUnfoldSns:(id)arg1 withStatus:(unsigned int)arg2 NeedSync:(_Bool)arg3;
- (_Bool)add_ModifyNotifyStatus:(id)arg1 withStatus:(unsigned int)arg2 NeedSync:(_Bool)arg3;
- (_Bool)add_DeleteChatContact:(id)arg1 sync:(_Bool)arg2;
- (_Bool)add_ModifyContact:(id)arg1 delScene:(unsigned int)arg2 sync:(_Bool)arg3;
- (_Bool)add_ModifyContact:(id)arg1 addScene:(unsigned int)arg2 sync:(_Bool)arg3;
- (_Bool)add_ModifyContact:(id)arg1 sync:(_Bool)arg2;
- (_Bool)add_ModifyContact:(id)arg1 addScene:(unsigned int)arg2 delScene:(unsigned int)arg3 sync:(_Bool)arg4;
- (_Bool)isSkipContact:(id)arg1;
- (void)add_SkipContact:(id)arg1;
- (id)init;

@end

