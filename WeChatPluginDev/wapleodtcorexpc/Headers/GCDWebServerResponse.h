//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;
@protocol GCDWebServerBodyReader;

@interface GCDWebServerResponse : NSObject
{
    NSString *_type;
    unsigned long long _length;
    long long _status;
    unsigned long long _maxAge;
    NSDate *_lastModified;
    NSString *_eTag;
    NSMutableDictionary *_headers;
    _Bool _chunked;
    _Bool _gzipped;
    _Bool _opened;
    NSMutableArray *_encoders;
    id <GCDWebServerBodyReader> _reader;
}

+ (id)response;
+ (id)responseWithRedirect:(id)arg1 permanent:(_Bool)arg2;
+ (id)responseWithStatusCode:(long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *additionalHeaders; // @synthesize additionalHeaders=_headers;
@property(nonatomic, getter=isGZipContentEncodingEnabled) _Bool gzipContentEncodingEnabled; // @synthesize gzipContentEncodingEnabled=_gzipped;
@property(copy, nonatomic) NSString *eTag; // @synthesize eTag=_eTag;
@property(retain, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModified;
@property(nonatomic) unsigned long long cacheControlMaxAge; // @synthesize cacheControlMaxAge=_maxAge;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_status;
@property(nonatomic) unsigned long long contentLength; // @synthesize contentLength=_length;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_type;
@property(readonly, copy) NSString *description;
- (void)performClose;
- (void)performReadDataWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)performOpen:(id *)arg1;
- (void)prepareForReading;
- (void)close;
- (id)readData:(id *)arg1;
- (_Bool)open:(id *)arg1;
@property(readonly, nonatomic) _Bool usesChunkedTransferEncoding;
- (_Bool)hasBody;
- (void)setValue:(id)arg1 forAdditionalHeader:(id)arg2;
- (id)init;
- (id)initWithRedirect:(id)arg1 permanent:(_Bool)arg2;
- (id)initWithStatusCode:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

