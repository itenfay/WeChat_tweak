//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData;

@interface GCDWebServerDataResponse
{
    NSData *_data;
    _Bool _done;
}

+ (id)responseWithData:(id)arg1 contentType:(id)arg2;
+ (id)responseWithJSONObject:(id)arg1 contentType:(id)arg2;
+ (id)responseWithJSONObject:(id)arg1;
+ (id)responseWithHTMLTemplate:(id)arg1 variables:(id)arg2;
+ (id)responseWithHTML:(id)arg1;
+ (id)responseWithText:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)readData:(id *)arg1;
- (id)initWithData:(id)arg1 contentType:(id)arg2;
- (id)initWithJSONObject:(id)arg1 contentType:(id)arg2;
- (id)initWithJSONObject:(id)arg1;
- (id)initWithHTMLTemplate:(id)arg1 variables:(id)arg2;
- (id)initWithHTML:(id)arg1;
- (id)initWithText:(id)arg1;

@end

