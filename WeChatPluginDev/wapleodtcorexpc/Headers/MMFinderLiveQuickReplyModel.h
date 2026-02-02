//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MMFinderLiveQuickReplyModel : NSObject
{
    long long _type;
    NSString *_title;
    NSString *_originTitle;
    double _maxContentWidth;
    double _font;
    NSArray *_styles;
    long long _wordingType;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(nonatomic) long long wordingType; // @synthesize wordingType=_wordingType;
@property(retain, nonatomic) NSArray *styles; // @synthesize styles=_styles;
@property(nonatomic) double font; // @synthesize font=_font;
@property(nonatomic) double maxContentWidth; // @synthesize maxContentWidth=_maxContentWidth;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *originTitle; // @synthesize originTitle=_originTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

