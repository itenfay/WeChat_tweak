//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSMutableDictionary;

@interface RightTopMenuData
{
    _Bool m_bShowNew;
    NSMutableArray *m_arrShowIDs;
    NSMutableDictionary *m_dicItemArchives;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *m_dicItemArchives; // @synthesize m_dicItemArchives;
@property(retain, nonatomic) NSMutableArray *m_arrShowIDs; // @synthesize m_arrShowIDs;
@property(nonatomic) _Bool m_bShowNew; // @synthesize m_bShowNew;
- (_Bool)clickMenu:(id)arg1;
- (_Bool)updateConfig:(id)arg1;
- (_Bool)updateFromOld;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

