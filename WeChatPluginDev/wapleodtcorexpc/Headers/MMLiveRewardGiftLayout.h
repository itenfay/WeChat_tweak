//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewFlowLayout.h>

@interface MMLiveRewardGiftLayout : UICollectionViewFlowLayout
{
    long long _rowCount;
    long long _columCount;
}

@property(nonatomic) long long columCount; // @synthesize columCount=_columCount;
@property(nonatomic) long long rowCount; // @synthesize rowCount=_rowCount;
- (struct CGRect)frameWithinPageForCellAtIndex:(unsigned long long)arg1;
- (CDStruct_2ec95fd7)visualLocationForCellAtIndex:(unsigned long long)arg1;

@end

