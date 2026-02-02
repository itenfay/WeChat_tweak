//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString;

@interface BrandProfileTopicInfo : NSObject
{
    _Bool _isFirstLine;
    NSString *_titleStr;
    NSString *_titleTruncatedStr;
    NSString *_descStr;
    NSString *_urlStr;
    unsigned long long _tagID;
    NSAttributedString *_topicAttributedStr;
    unsigned long long _row;
    unsigned long long _column;
    struct CGPoint _topicButtonOrigin;
    struct CGSize _topicButtonSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long column; // @synthesize column=_column;
@property(nonatomic) unsigned long long row; // @synthesize row=_row;
@property(retain, nonatomic) NSAttributedString *topicAttributedStr; // @synthesize topicAttributedStr=_topicAttributedStr;
@property(nonatomic) unsigned long long tagID; // @synthesize tagID=_tagID;
@property(retain, nonatomic) NSString *urlStr; // @synthesize urlStr=_urlStr;
@property(retain, nonatomic) NSString *descStr; // @synthesize descStr=_descStr;
@property(retain, nonatomic) NSString *titleTruncatedStr; // @synthesize titleTruncatedStr=_titleTruncatedStr;
@property(retain, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
@property(nonatomic) struct CGSize topicButtonSize; // @synthesize topicButtonSize=_topicButtonSize;
@property(nonatomic) struct CGPoint topicButtonOrigin; // @synthesize topicButtonOrigin=_topicButtonOrigin;
@property(nonatomic) _Bool isFirstLine; // @synthesize isFirstLine=_isFirstLine;

@end

