//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface CCardContact
{
    NSString *_m_nsCardDesc;
    NSString *_m_nsCardDescIcon;
}

+ (id)contactFromShareCardMsgContentForFTS:(id)arg1;
+ (id)contactFromShareCardMsgContent:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsCardDescIcon; // @synthesize m_nsCardDescIcon=_m_nsCardDescIcon;
@property(retain, nonatomic) NSString *m_nsCardDesc; // @synthesize m_nsCardDesc=_m_nsCardDesc;
- (void)genContactFromShareCardMsgWrapContent:(id)arg1;

@end

