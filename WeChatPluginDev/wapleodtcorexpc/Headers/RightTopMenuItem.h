//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface RightTopMenuItem
{
    NSString *m_nsID;
    _Bool m_bShowNew;
    _Bool m_bHasShowNew;
    unsigned int m_uiNewVersion;
    unsigned int m_uiOrder;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int m_uiOrder; // @synthesize m_uiOrder;
@property(nonatomic) unsigned int m_uiNewVersion; // @synthesize m_uiNewVersion;
@property(nonatomic) _Bool m_bHasShowNew; // @synthesize m_bHasShowNew;
@property(nonatomic) _Bool m_bShowNew; // @synthesize m_bShowNew;
@property(retain, nonatomic) NSString *m_nsID; // @synthesize m_nsID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

