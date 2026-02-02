//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface MJMovieTextSuggestionSnapshot : NSObject
{
    _Bool _isPrefetched;
    NSString *_sessionID;
    NSData *_jpegData;
    NSString *_ocrText;
    NSString *_cdnUrl;
    CDStruct_1b6d18a9 _snapshotTime;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPrefetched; // @synthesize isPrefetched=_isPrefetched;
@property(retain, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl=_cdnUrl;
@property(retain, nonatomic) NSString *ocrText; // @synthesize ocrText=_ocrText;
@property(retain, nonatomic) NSData *jpegData; // @synthesize jpegData=_jpegData;
@property(readonly, nonatomic) CDStruct_1b6d18a9 snapshotTime; // @synthesize snapshotTime=_snapshotTime;
@property(readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSessionID:(id)arg1 snapshotTime:(CDStruct_1b6d18a9)arg2;

@end

