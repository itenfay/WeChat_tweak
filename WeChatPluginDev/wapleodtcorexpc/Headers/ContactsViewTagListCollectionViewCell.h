//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@interface ContactsViewTagListCollectionViewCell : UICollectionViewCell
{
    _Bool _isChosen;
}

@property(nonatomic) _Bool isChosen; // @synthesize isChosen=_isChosen;
- (void)makeCreateTagCell;
- (void)makeCell:(id)arg1;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;

@end

