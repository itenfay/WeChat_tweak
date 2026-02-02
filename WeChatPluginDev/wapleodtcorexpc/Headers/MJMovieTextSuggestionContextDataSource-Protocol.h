//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLocation, MJMovieTextSuggestionContext, MJMovieTextSuggestionSnapshot, NSMutableArray, NSString;

@protocol MJMovieTextSuggestionContextDataSource <NSObject>
- (NSString *)templateIDForMovieTextSuggestionContext:(MJMovieTextSuggestionContext *)arg1;
- (NSString *)musicIDForMovieTextSuggestionContext:(MJMovieTextSuggestionContext *)arg1;
- (FinderLocation *)userLocationForMovieTextSuggestionContext:(MJMovieTextSuggestionContext *)arg1;
- (NSMutableArray *)feedLocationsForMovieTextSuggestionContext:(MJMovieTextSuggestionContext *)arg1;
- (MJMovieTextSuggestionSnapshot *)snapshotDataForMovieTextSuggestionContext:(MJMovieTextSuggestionContext *)arg1;
@end

