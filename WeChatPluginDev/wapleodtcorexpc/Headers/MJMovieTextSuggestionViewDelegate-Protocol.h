//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJMovieTextSuggestionView, NSString;

@protocol MJMovieTextSuggestionViewDelegate <NSObject>
- (void)movieTextSuggestionCollectionView:(MJMovieTextSuggestionView *)arg1 didSelectSuggestionWithTitle:(NSString *)arg2;
@end

