//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class FinderLiveSquareStyleInfo;

@interface WCFinderLiveFeedBaseStyleableCell : UICollectionViewCell
{
    FinderLiveSquareStyleInfo *_styleInfo;
}

+ (double)cellHeightInWidth:(double)arg1 styleInfo:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveSquareStyleInfo *styleInfo; // @synthesize styleInfo=_styleInfo;
- (void)updateStyle;
- (void)initViewsIfNeeded;
- (void)didEndDisplay;
- (void)willDisplay;
- (_Bool)enableBottomExtraInfo;
- (void)initializeIfNeeded:(id)arg1;

@end

