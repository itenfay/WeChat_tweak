//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmoticonBoardPageWrap, NSString, OrderedDictionary;

@interface EmoticonBoardCrossSectionInfo : NSObject
{
    _Bool _shouldShowLoadingIfNeeded;
    unsigned long long _sectionIndex;
    EmoticonBoardPageWrap *_pageWrap;
    OrderedDictionary *_qqEmojiDictionary;
    NSString *_pidNeedScrollTo;
    struct CGPoint _offsetInFatherCollection;
    struct CGPoint _offset;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldShowLoadingIfNeeded; // @synthesize shouldShowLoadingIfNeeded=_shouldShowLoadingIfNeeded;
@property(retain, nonatomic) NSString *pidNeedScrollTo; // @synthesize pidNeedScrollTo=_pidNeedScrollTo;
@property(retain, nonatomic) OrderedDictionary *qqEmojiDictionary; // @synthesize qqEmojiDictionary=_qqEmojiDictionary;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(nonatomic) struct CGPoint offsetInFatherCollection; // @synthesize offsetInFatherCollection=_offsetInFatherCollection;
@property(retain, nonatomic) EmoticonBoardPageWrap *pageWrap; // @synthesize pageWrap=_pageWrap;
@property(nonatomic) unsigned long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;

@end

