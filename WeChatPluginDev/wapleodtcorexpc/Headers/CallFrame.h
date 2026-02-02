//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface CallFrame : NSObject
{
    NSString *_functionName;
    NSString *_scriptId;
    NSString *_url;
    NSNumber *_lineNumber;
    NSNumber *_columnNumber;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *columnNumber; // @synthesize columnNumber=_columnNumber;
@property(retain, nonatomic) NSNumber *lineNumber; // @synthesize lineNumber=_lineNumber;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *scriptId; // @synthesize scriptId=_scriptId;
@property(retain, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
- (id)dictKey;

@end

