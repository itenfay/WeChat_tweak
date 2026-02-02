//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, RichTextViewConfig;

@interface WCFinderMSActivityCellUIModel : NSObject
{
    _Bool _textContentExpand;
    _Bool _likeListContentExpand;
    _Bool _hideMoreIcon;
    _Bool _hideStickyTopIcon;
    NSMutableDictionary *_cacheSize;
    NSArray *_feedDescTextStyles;
    RichTextViewConfig *_feedDescTextConfig;
    long long _textLines;
    NSArray *_feedCommnetTextStyles;
    RichTextViewConfig *_feedCommnetTextConfig;
    long long _commnetTextLines;
    NSArray *_feedLikeListTextStyles;
    RichTextViewConfig *_feedLikeListTextConfig;
    long long _likeListTextLines;
    unsigned long long _showScene;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hideStickyTopIcon; // @synthesize hideStickyTopIcon=_hideStickyTopIcon;
@property(nonatomic) _Bool hideMoreIcon; // @synthesize hideMoreIcon=_hideMoreIcon;
@property(nonatomic) unsigned long long showScene; // @synthesize showScene=_showScene;
@property(nonatomic) long long likeListTextLines; // @synthesize likeListTextLines=_likeListTextLines;
@property(nonatomic) _Bool likeListContentExpand; // @synthesize likeListContentExpand=_likeListContentExpand;
@property(retain, nonatomic) RichTextViewConfig *feedLikeListTextConfig; // @synthesize feedLikeListTextConfig=_feedLikeListTextConfig;
@property(retain, nonatomic) NSArray *feedLikeListTextStyles; // @synthesize feedLikeListTextStyles=_feedLikeListTextStyles;
@property(nonatomic) long long commnetTextLines; // @synthesize commnetTextLines=_commnetTextLines;
@property(retain, nonatomic) RichTextViewConfig *feedCommnetTextConfig; // @synthesize feedCommnetTextConfig=_feedCommnetTextConfig;
@property(retain, nonatomic) NSArray *feedCommnetTextStyles; // @synthesize feedCommnetTextStyles=_feedCommnetTextStyles;
@property(nonatomic) long long textLines; // @synthesize textLines=_textLines;
@property(nonatomic) _Bool textContentExpand; // @synthesize textContentExpand=_textContentExpand;
@property(retain, nonatomic) RichTextViewConfig *feedDescTextConfig; // @synthesize feedDescTextConfig=_feedDescTextConfig;
@property(retain, nonatomic) NSArray *feedDescTextStyles; // @synthesize feedDescTextStyles=_feedDescTextStyles;
@property(retain, nonatomic) NSMutableDictionary *cacheSize; // @synthesize cacheSize=_cacheSize;

@end

