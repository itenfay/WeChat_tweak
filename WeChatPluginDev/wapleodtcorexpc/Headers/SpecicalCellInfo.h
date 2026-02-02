//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact;

@interface SpecicalCellInfo
{
    unsigned long long m_cellType;
    CContact *m_Contact;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *m_Contact; // @synthesize m_Contact;
@property(nonatomic) unsigned long long m_cellType; // @synthesize m_cellType;

@end

