//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MJMovieTextSuggestionViewCellItem : NSObject
{
    NSString *_title;
    NSString *_viewerNumber;
    double _titleLabelWidth;
    double _viewerNumberLabelWidth;
}

+ (id)itemsWithSuggestions:(id)arg1;
+ (id)itemWithSuggestion:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) double viewerNumberLabelWidth; // @synthesize viewerNumberLabelWidth=_viewerNumberLabelWidth;
@property(readonly, nonatomic) double titleLabelWidth; // @synthesize titleLabelWidth=_titleLabelWidth;
@property(readonly, nonatomic) NSString *viewerNumber; // @synthesize viewerNumber=_viewerNumber;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithSuggestion:(id)arg1;

@end

