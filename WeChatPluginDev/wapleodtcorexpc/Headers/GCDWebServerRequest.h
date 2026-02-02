//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSURL;
@protocol GCDWebServerBodyWriter;

@interface GCDWebServerRequest : NSObject
{
    NSString *_method;
    NSURL *_url;
    NSDictionary *_headers;
    NSString *_path;
    NSDictionary *_query;
    NSString *_type;
    _Bool _chunked;
    unsigned long long _length;
    NSDate *_modifiedSince;
    NSString *_noneMatch;
    struct _NSRange _range;
    _Bool _gzipAccepted;
    NSData *_localAddress;
    NSData *_remoteAddress;
    _Bool _opened;
    NSMutableArray *_decoders;
    NSMutableDictionary *_attributes;
    id <GCDWebServerBodyWriter> _writer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *remoteAddressData; // @synthesize remoteAddressData=_remoteAddress;
@property(retain, nonatomic) NSData *localAddressData; // @synthesize localAddressData=_localAddress;
@property(readonly, nonatomic) _Bool usesChunkedTransferEncoding; // @synthesize usesChunkedTransferEncoding=_chunked;
@property(readonly, nonatomic) _Bool acceptsGzipContentEncoding; // @synthesize acceptsGzipContentEncoding=_gzipAccepted;
@property(readonly, nonatomic) struct _NSRange byteRange; // @synthesize byteRange=_range;
@property(readonly, nonatomic) NSString *ifNoneMatch; // @synthesize ifNoneMatch=_noneMatch;
@property(readonly, nonatomic) NSDate *ifModifiedSince; // @synthesize ifModifiedSince=_modifiedSince;
@property(readonly, nonatomic) unsigned long long contentLength; // @synthesize contentLength=_length;
@property(readonly, nonatomic) NSString *contentType; // @synthesize contentType=_type;
@property(readonly, nonatomic) NSDictionary *query; // @synthesize query=_query;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(readonly, nonatomic) NSString *method; // @synthesize method=_method;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *remoteAddressString;
@property(readonly, nonatomic) NSString *localAddressString;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (_Bool)performClose:(id *)arg1;
- (_Bool)performWriteData:(id)arg1 error:(id *)arg2;
- (_Bool)performOpen:(id *)arg1;
- (void)prepareForWriting;
- (_Bool)close:(id *)arg1;
- (_Bool)writeData:(id)arg1 error:(id *)arg2;
- (_Bool)open:(id *)arg1;
- (id)attributeForKey:(id)arg1;
- (_Bool)hasByteRange;
- (_Bool)hasBody;
- (id)initWithMethod:(id)arg1 url:(id)arg2 headers:(id)arg3 path:(id)arg4 query:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

