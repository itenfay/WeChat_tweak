//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface EmoticonLangDesc
{
    NSString *_m_languageCode;
    NSString *_m_desc;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_desc;
+ (void)PBArrayAdd_m_languageCode;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_desc; // @synthesize m_desc=_m_desc;
@property(retain, nonatomic) NSString *m_languageCode; // @synthesize m_languageCode=_m_languageCode;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

