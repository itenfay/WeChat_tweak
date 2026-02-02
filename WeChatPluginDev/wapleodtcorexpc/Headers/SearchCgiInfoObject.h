//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SearchCgiInfoObject : NSObject
{
    CDUnknownBlockType _completion;
    NSString *_query;
    NSDate *_createDate;
    NSString *_requestId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSDate *createDate; // @synthesize createDate=_createDate;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (id)initWithCompletion:(CDUnknownBlockType)arg1 query:(id)arg2;

@end

