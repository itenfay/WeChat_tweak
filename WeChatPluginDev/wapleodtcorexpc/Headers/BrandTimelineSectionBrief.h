//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface BrandTimelineSectionBrief : NSObject
{
    long long _rowCount;
    NSString *_sectionClassName;
    NSString *_briefDescription;
    unsigned long long _m_n64MesSvrId;
    long long _arrReaderWrapCount;
    long long _arrItemViewModelCount;
    long long _itemShowCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long itemShowCount; // @synthesize itemShowCount=_itemShowCount;
@property(nonatomic) long long arrItemViewModelCount; // @synthesize arrItemViewModelCount=_arrItemViewModelCount;
@property(nonatomic) long long arrReaderWrapCount; // @synthesize arrReaderWrapCount=_arrReaderWrapCount;
@property(nonatomic) unsigned long long m_n64MesSvrId; // @synthesize m_n64MesSvrId=_m_n64MesSvrId;
@property(retain, nonatomic) NSString *briefDescription; // @synthesize briefDescription=_briefDescription;
@property(retain, nonatomic) NSString *sectionClassName; // @synthesize sectionClassName=_sectionClassName;
@property(nonatomic) long long rowCount; // @synthesize rowCount=_rowCount;
- (id)description;
- (id)initWithBaseSectionData:(id)arg1 andRowCount:(long long)arg2;

@end

