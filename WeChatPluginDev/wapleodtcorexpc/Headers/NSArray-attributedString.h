//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSArray.h>

@class NSMutableAttributedString, NSMutableString;

@interface NSArray (attributedString)
+ (id)concertItemToString:(id)arg1;
- (id)stringWithDelimiter:(id)arg1;
@property(readonly, copy, nonatomic) NSMutableString *string;
@property(readonly, copy, nonatomic) NSMutableAttributedString *attributedString;
@end

