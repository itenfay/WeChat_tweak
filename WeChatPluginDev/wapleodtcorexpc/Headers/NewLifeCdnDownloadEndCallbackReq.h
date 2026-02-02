//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlutterStandardTypedData, NSString;

@interface NewLifeCdnDownloadEndCallbackReq : NSObject
{
    NSString *_mediaId;
    long long _errCode;
    FlutterStandardTypedData *_cdnOriginResultByteArray;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithMediaId:(id)arg1 errCode:(long long)arg2 cdnOriginResultByteArray:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) FlutterStandardTypedData *cdnOriginResultByteArray; // @synthesize cdnOriginResultByteArray=_cdnOriginResultByteArray;
@property(nonatomic) long long errCode; // @synthesize errCode=_errCode;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (id)toList;

@end

