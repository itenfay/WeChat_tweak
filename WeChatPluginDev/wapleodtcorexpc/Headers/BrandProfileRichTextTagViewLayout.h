//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface BrandProfileRichTextTagViewLayout : NSObject
{
    _Bool _hasTag;
    struct CGSize _tagImageSize;
}

@property(nonatomic) struct CGSize tagImageSize; // @synthesize tagImageSize=_tagImageSize;
@property(nonatomic) _Bool hasTag; // @synthesize hasTag=_hasTag;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

