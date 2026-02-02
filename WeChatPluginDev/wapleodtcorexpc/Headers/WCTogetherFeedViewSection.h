//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WCTogetherFeedViewSection : NSObject
{
    _Bool _showsFooterSeparatorLine;
    NSString *_yearText;
    NSString *_dayText;
    NSString *_dateText;
    NSMutableArray *_viewItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *viewItems; // @synthesize viewItems=_viewItems;
@property(nonatomic) _Bool showsFooterSeparatorLine; // @synthesize showsFooterSeparatorLine=_showsFooterSeparatorLine;
@property(copy, nonatomic) NSString *dateText; // @synthesize dateText=_dateText;
@property(copy, nonatomic) NSString *dayText; // @synthesize dayText=_dayText;
@property(copy, nonatomic) NSString *yearText; // @synthesize yearText=_yearText;
@property(readonly, copy, nonatomic) Class footerViewClass;
@property(readonly, copy, nonatomic) Class headerViewClass;
- (id)init;

@end

