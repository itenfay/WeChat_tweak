//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableAttributedString;

@interface WCFinderHighlightedInfoModel : NSObject
{
    NSMutableAttributedString *_attriStr;
    NSMutableArray *_topicRangeArray;
    NSMutableArray *_mentionArray;
    NSMutableArray *_selectBkArray;
    NSMutableArray *_invalidCharacterArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *invalidCharacterArray; // @synthesize invalidCharacterArray=_invalidCharacterArray;
@property(retain, nonatomic) NSMutableArray *selectBkArray; // @synthesize selectBkArray=_selectBkArray;
@property(retain, nonatomic) NSMutableArray *mentionArray; // @synthesize mentionArray=_mentionArray;
@property(retain, nonatomic) NSMutableArray *topicRangeArray; // @synthesize topicRangeArray=_topicRangeArray;
@property(retain, nonatomic) NSMutableAttributedString *attriStr; // @synthesize attriStr=_attriStr;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

