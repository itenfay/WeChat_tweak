//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, NSMutableData, NSString, NSURLRequest, NSURLResponse;

@interface GCRequestModel : NSObject
{
    NSURLRequest *_request;
    NSDate *_requestDate;
    NSMutableData *_data;
    NSURLResponse *_response;
    NSString *_webviewKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *webviewKey; // @synthesize webviewKey=_webviewKey;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSDate *requestDate; // @synthesize requestDate=_requestDate;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (id)init;

@end

