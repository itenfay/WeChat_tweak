//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface EmoticonBoardCrossCollectionStoreGridCellModel : NSObject
{
    _Bool _darkMode;
    unsigned long long _column;
    NSArray *_emoticonWrapArray;
    NSString *_packageId;
    double _totalWidth;
    unsigned long long _row;
    double _intervalX;
    double _intervalY;
    double _edgeLeft;
    double _edgeTop;
    double _totalHeight;
    struct CGSize _itemSize;
}

- (void).cxx_destruct;
@property(nonatomic) double totalHeight; // @synthesize totalHeight=_totalHeight;
@property(nonatomic) double edgeTop; // @synthesize edgeTop=_edgeTop;
@property(nonatomic) double edgeLeft; // @synthesize edgeLeft=_edgeLeft;
@property(nonatomic) double intervalY; // @synthesize intervalY=_intervalY;
@property(nonatomic) double intervalX; // @synthesize intervalX=_intervalX;
@property(nonatomic) unsigned long long row; // @synthesize row=_row;
@property(nonatomic) double totalWidth; // @synthesize totalWidth=_totalWidth;
@property(retain, nonatomic) NSString *packageId; // @synthesize packageId=_packageId;
@property(nonatomic) _Bool darkMode; // @synthesize darkMode=_darkMode;
@property(retain, nonatomic) NSArray *emoticonWrapArray; // @synthesize emoticonWrapArray=_emoticonWrapArray;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) unsigned long long column; // @synthesize column=_column;
- (void)genWholeModel;
- (id)init;

@end

