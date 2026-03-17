//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPVodSelectTrackParams : NSObject
{
    long long _costTimeMs;
    long long _errorCode;
    long long _mediaType;
    long long _attachFormat;
}

@property(nonatomic) long long attachFormat; // @synthesize attachFormat=_attachFormat;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) long long costTimeMs; // @synthesize costTimeMs=_costTimeMs;
- (id)init;

@end

