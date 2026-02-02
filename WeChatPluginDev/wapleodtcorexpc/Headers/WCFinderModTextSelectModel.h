//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderModTextSelectModel : NSObject
{
    unsigned long long _sourceType;
    NSString *_selectText;
    struct _NSRange _selectRange;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *selectText; // @synthesize selectText=_selectText;
@property(nonatomic) struct _NSRange selectRange; // @synthesize selectRange=_selectRange;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
- (id)initWithSourceType:(unsigned long long)arg1 selectRange:(struct _NSRange)arg2 selectText:(id)arg3;

@end

