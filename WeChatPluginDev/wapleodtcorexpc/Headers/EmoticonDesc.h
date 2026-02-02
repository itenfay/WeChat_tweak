//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface EmoticonDesc
{
    NSString *_m_md5;
    NSMutableArray *_m_LangList;
}

+ (void)initialize;
+ (void)PBArrayAdd_m_LangList;
+ (void)PBArrayAdd_m_md5;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *m_LangList; // @synthesize m_LangList=_m_LangList;
@property(retain, nonatomic) NSString *m_md5; // @synthesize m_md5=_m_md5;
- (_Bool)hasTheSameMd5WithDesc:(id)arg1;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

