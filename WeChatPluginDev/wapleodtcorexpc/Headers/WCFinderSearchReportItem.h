//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderSearchReportItem : NSObject
{
    NSString *_queryText;
    NSString *_reqId;
    NSString *_content;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *reqId; // @synthesize reqId=_reqId;
@property(retain, nonatomic) NSString *queryText; // @synthesize queryText=_queryText;

@end

