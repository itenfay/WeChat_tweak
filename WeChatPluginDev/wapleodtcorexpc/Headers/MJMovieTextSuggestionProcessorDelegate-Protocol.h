//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJMovieTextSuggestionProcessor, NSArray;

@protocol MJMovieTextSuggestionProcessorDelegate <NSObject>
- (void)movieTextSuggestionProcessor:(MJMovieTextSuggestionProcessor *)arg1 didUpdateSuggestions:(NSArray *)arg2;
@end

