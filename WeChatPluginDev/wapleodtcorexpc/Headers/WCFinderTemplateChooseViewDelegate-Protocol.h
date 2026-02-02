//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UICollectionViewCell, WCFinderTemplateChooseView, WCFinderTemplateVideoEditViewModel;

@protocol WCFinderTemplateChooseViewDelegate <NSObject>

@optional
- (void)finderTemplateChooseView:(WCFinderTemplateChooseView *)arg1 willDisplayCell:(UICollectionViewCell *)arg2 forItemAtIndex:(unsigned long long)arg3;
- (void)finderTemplateChooseView:(WCFinderTemplateChooseView *)arg1 didSelectTemplateAtIndex:(unsigned long long)arg2;
- (_Bool)finderTemplateChooseView:(WCFinderTemplateChooseView *)arg1 canSelectTemplateAtIndex:(unsigned long long)arg2;
- (WCFinderTemplateVideoEditViewModel *)finderTemplateChooseViewGetViewModel;
@end

