//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIColor, UIFont;

@protocol IWCRichTextLabelProtocol <NSObject>
- (_Bool)hasLinks;
- (void)setContent:(NSString *)arg1;
- (void)setFWidth:(double)arg1;
- (void)setLineNumber:(double)arg1;
- (void)setParserType:(unsigned long long)arg1;
- (void)setOTextColor:(UIColor *)arg1;
- (void)setLineSpacing:(double)arg1;
- (void)setOFont:(UIFont *)arg1;
- (void)setRichTextAlignment:(long long)arg1;
@end

