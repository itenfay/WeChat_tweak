//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSError, NSString, RTEHTMLParser;

@protocol RTEHTMLParserDelegate <NSObject>

@optional
- (void)parser:(RTEHTMLParser *)arg1 parseErrorOccurred:(NSError *)arg2;
- (void)parser:(RTEHTMLParser *)arg1 foundProcessingInstructionWithTarget:(NSString *)arg2 data:(NSString *)arg3;
- (void)parser:(RTEHTMLParser *)arg1 foundCDATA:(NSData *)arg2;
- (void)parser:(RTEHTMLParser *)arg1 foundComment:(NSString *)arg2;
- (void)parser:(RTEHTMLParser *)arg1 foundCharacters:(NSString *)arg2;
- (void)parser:(RTEHTMLParser *)arg1 didEndElement:(NSString *)arg2;
- (void)parser:(RTEHTMLParser *)arg1 didStartElement:(NSString *)arg2 attributes:(NSDictionary *)arg3;
- (void)parserDidEndDocument:(RTEHTMLParser *)arg1;
- (void)parserDidStartDocument:(RTEHTMLParser *)arg1;
@end

