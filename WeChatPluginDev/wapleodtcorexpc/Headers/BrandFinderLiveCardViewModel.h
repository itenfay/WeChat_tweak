//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface BrandFinderLiveCardViewModel
{
    _Bool _isLive;
    unsigned long long _style;
    NSString *_title;
    NSString *_category;
    NSString *_recommendReason;
    NSString *_coverImageUrl;
    NSString *_liveStatusWording;
    double _cornerRadius;
}

- (void).cxx_destruct;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(copy, nonatomic) NSString *liveStatusWording; // @synthesize liveStatusWording=_liveStatusWording;
@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(copy, nonatomic) NSString *coverImageUrl; // @synthesize coverImageUrl=_coverImageUrl;
@property(copy, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (id)accessibilityStr;
- (id)recommendReasonLabelColor;
- (unsigned long long)titleParserDetectorTypes;
- (double)titleLineNumber;
- (double)titleLineSpacing;
- (id)titleFont;
- (id)titleColor;
- (double)titleMaxWidth:(double)arg1;
- (double)cardHeight:(double)arg1;
- (double)backgroundCoverHeight:(double)arg1;
- (id)description;

@end

