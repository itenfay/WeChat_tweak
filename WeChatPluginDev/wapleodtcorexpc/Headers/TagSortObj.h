//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TagSortObj : NSObject
{
    NSString *_tagName;
    NSString *_tagPinyin;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *tagPinyin; // @synthesize tagPinyin=_tagPinyin;
@property(retain, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
- (id)initWithTag:(id)arg1;

@end

