//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, NSMutableArray;

@interface BTMsgSectionData
{
    CMessageWrap *_msgWrap;
    NSMutableArray *_arrItemCellViewModel;
    unsigned int _displayMode;
}

+ (_Bool)canCreateSectionDataWithMsgWrap:(id)arg1;
+ (id)createSectionDataWithMsgWrap:(id)arg1 sectionWidth:(double)arg2 displayMode:(unsigned int)arg3 delegate:(id)arg4;
+ (void)initMsgSectionDataClassList;
+ (void)registerMsgSectionDataClass:(Class)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int displayMode; // @synthesize displayMode=_displayMode;
@property(readonly, nonatomic) NSMutableArray *arrItemCellViewModel; // @synthesize arrItemCellViewModel=_arrItemCellViewModel;
@property(readonly, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
- (void)msgWrapMarkValidExposed;
- (void)msgWrapMarkExposed;
- (void)updateMsgWrap:(id)arg1;
- (id)identifierWithRow:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool isExposed;
@property(readonly, nonatomic) double heightForSectionFooter;
- (unsigned long long)sectionType;
@property(readonly, nonatomic) unsigned int createTime;
@property(readonly, nonatomic) unsigned long long sequenceId;
- (id)initWithMsgWrap:(id)arg1 sectionWidth:(double)arg2 displayMode:(unsigned int)arg3 delegate:(id)arg4;

@end

