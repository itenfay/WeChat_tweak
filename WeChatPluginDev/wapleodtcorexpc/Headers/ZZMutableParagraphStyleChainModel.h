//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableParagraphStyle;

@interface ZZMutableParagraphStyleChainModel : NSObject
{
    NSMutableParagraphStyle *_object;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableParagraphStyle *object; // @synthesize object=_object;
@property(readonly, copy, nonatomic) CDUnknownBlockType hyphenationFactor;
@property(readonly, copy, nonatomic) CDUnknownBlockType paragraphSpacingBefore;
@property(readonly, copy, nonatomic) CDUnknownBlockType lineHeightMultiple;
@property(readonly, copy, nonatomic) CDUnknownBlockType baseWritingDirection;
@property(readonly, copy, nonatomic) CDUnknownBlockType maximumLineHeight;
@property(readonly, copy, nonatomic) CDUnknownBlockType minimumLineHeight;
@property(readonly, copy, nonatomic) CDUnknownBlockType lineBreakMode;
@property(readonly, copy, nonatomic) CDUnknownBlockType tailIndent;
@property(readonly, copy, nonatomic) CDUnknownBlockType headIndent;
@property(readonly, copy, nonatomic) CDUnknownBlockType firstLineHeadIndent;
@property(readonly, copy, nonatomic) CDUnknownBlockType alignment;
@property(readonly, copy, nonatomic) CDUnknownBlockType paragraphSpacing;
@property(readonly, copy, nonatomic) CDUnknownBlockType lineSpacing;
- (id)initWithObject:(id)arg1;

@end

