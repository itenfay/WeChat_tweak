//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class RTETextView;

@interface RTEContentSection
{
    unsigned long long _length;
    double _cellHeight;
    RTETextView *_cellView;
    unsigned long long _numOfParagraph;
}

+ (unsigned int)sectionSeparateStringLength;
+ (unsigned int)sectionSeparateParagraghNum;
+ (void)applyEditLocations:(id)arg1 inSections:(id)arg2 isAddParagraph:(_Bool)arg3;
+ (id)creatSectionArrayForString:(id)arg1;
+ (id)creatSectionForString:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long numOfParagraph; // @synthesize numOfParagraph=_numOfParagraph;
@property(retain, nonatomic) RTETextView *cellView; // @synthesize cellView=_cellView;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
- (void)clearCacheView;
- (_Bool)tryMergeSection:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

