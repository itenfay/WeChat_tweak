//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderBGCover : NSObject
{
    NSString *_url;
    NSString *_urlColorValue;
    NSString *_parsedColorValue;
}

+ (unsigned long long)columnType;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (id)BGCoverWithURL:(id)arg1 oldCover:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *parsedColorValue; // @synthesize parsedColorValue=_parsedColorValue;
@property(retain, nonatomic) NSString *urlColorValue; // @synthesize urlColorValue=_urlColorValue;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (id)archivedWCTValue;
- (id)parsedColor;
- (id)urlColor;

@end

