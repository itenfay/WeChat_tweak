//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CContact, ContactTagData;

@interface WCMomentsShareScopeCellViewModel : NSObject
{
    _Bool _shouldRoundTopCorner;
    _Bool _shouldRoundBottomCorner;
    _Bool _shouldDisplayBottomLine;
    _Bool _isFilterTagDataEnabled;
    long long _cellType;
    CContact *_contactData;
    ContactTagData *_tagData;
}

+ (long long)viewTypeOfSectionIdentifier:(id)arg1;
+ (id)sectionIdentifierOfType:(long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isFilterTagDataEnabled; // @synthesize isFilterTagDataEnabled=_isFilterTagDataEnabled;
@property(nonatomic) _Bool shouldDisplayBottomLine; // @synthesize shouldDisplayBottomLine=_shouldDisplayBottomLine;
@property(nonatomic) _Bool shouldRoundBottomCorner; // @synthesize shouldRoundBottomCorner=_shouldRoundBottomCorner;
@property(nonatomic) _Bool shouldRoundTopCorner; // @synthesize shouldRoundTopCorner=_shouldRoundTopCorner;
@property(retain, nonatomic) ContactTagData *tagData; // @synthesize tagData=_tagData;
@property(retain, nonatomic) CContact *contactData; // @synthesize contactData=_contactData;
@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
- (void)_initTagDataFromTagId:(unsigned int)arg1;
- (void)_initContactDataFromUsername:(id)arg1;
- (id)initAsLoadMoreCellVM;
- (id)initWithTagId:(unsigned int)arg1 isFilterTagDataEnabled:(_Bool)arg2;
- (id)initWithUsername:(id)arg1;

@end

